#!/usr/bin/env bash
#
# Copyright 2020 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set -euo pipefail

source "$(dirname "$0")/../../../lib/init.sh"
source module ci/etc/integration-tests-config.sh
source module ci/etc/quickstart-config.sh
source module ci/lib/io.sh

# NOTE: In this file use the command `bazelisk` rather than bazel, because
# Kokoro has both installed and we want to make sure to use the former.
io::log_h2 "Using bazel version"
: "${USE_BAZEL_VERSION:="5.2.0"}"
export USE_BAZEL_VERSION
bazelisk version || rm -fr "$HOME"/Library/Caches/bazelisk || bazelisk version
# Kokoro needs bazel to be shutdown here, otherwise it will hang. This shutdown
# is different (because it's in a different WORKSPACE) than the shutdown below
# that's done in each quickstart workspace.
bazelisk shutdown

bazel_args=(
  # On macOS gRPC does not compile correctly unless one defines this:
  "--copt=-DGRPC_BAZEL_BUILD"
  # We need this environment variable because on macOS gRPC crashes if it
  # cannot find the credentials, even if you do not use them. Some of the
  # unit tests do exactly that.
  "--test_output=errors"
  "--verbose_failures=true"
  "--keep_going")

readonly CONFIG_DIR="${KOKORO_GFILE_DIR:-/private/var/tmp}"
readonly CREDENTIALS_FILE="${CONFIG_DIR}/kokoro-run-key.json"
readonly BAZEL_CACHE="https://storage.googleapis.com/cloud-cpp-bazel-cache"

if [[ -r "${CREDENTIALS_FILE}" ]]; then
  io::log "Using bazel remote cache: ${BAZEL_CACHE}/macos/${BUILD_NAME:-}"
  bazel_args+=(
    "--remote_cache=${BAZEL_CACHE}/macos/${BUILD_NAME:-}"
    # Reduce the timeout for the remote cache from the 60s default:
    #     https://docs.bazel.build/versions/main/command-line-reference.html#flag--remote_timeout
    # If the build machine has network problems we would rather build locally
    # over blocking the build for 60s. When adjusting this parameter, keep in
    # mind that:
    # - Some of the objects in the cache in the ~60MiB range.
    # - Without tuning uploads run in the 50 MiB/s range, and downloads in
    #   the 150 MiB/s range.
    "--remote_timeout=5"
  )
  bazel_args+=("--google_credentials=${CREDENTIALS_FILE}")
  # See https://docs.bazel.build/versions/main/remote-caching.html#known-issues
  # and https://github.com/bazelbuild/bazel/issues/3360
  bazel_args+=("--experimental_guard_against_concurrent_changes")
fi

build_quickstart() {
  local -r library="$1"

  pushd "${PROJECT_ROOT}/google/cloud/${library}/quickstart" >/dev/null
  trap "popd >/dev/null" RETURN
  for repeat in 1 2 3; do
    # Additional dependencies, these are not downloaded by `bazel fetch ...`,
    # but are needed to compile the code
    external=(
      @local_config_platform//...
      @local_config_cc_toolchains//...
      @local_config_sh//...
      @go_sdk//...
      @remotejdk11_macos//:jdk
    )
    io::log_yellow "Fetching deps for ${library}'s quickstart [${repeat}/3]"
    if bazelisk fetch ... "${external[@]}"; then
      break
    else
      io::log_yellow "bazel fetch failed with $?"
    fi
    sleep $((120 * repeat))
  done

  io::log_h2 "Compiling ${library}'s quickstart"
  bazelisk build "${bazel_args[@]}" ...

  # Kokoro needs bazel to be shutdown.
  bazelisk shutdown
}

errors=""
for library in $(quickstart::libraries); do
  io::log_h2 "Building ${library}'s quickstart"
  if ! build_quickstart "${library}"; then
    io::log_red "Building ${library}'s quickstart failed"
    errors="${errors} ${library}"
  else
    io::log_green "Building ${library}'s quickstart was successful"
  fi
done

if [[ -z "${errors}" ]]; then
  io::log_green "All quickstart builds were successful"
else
  io::log_red "Build failed for ${errors}"
  exit 1
fi
