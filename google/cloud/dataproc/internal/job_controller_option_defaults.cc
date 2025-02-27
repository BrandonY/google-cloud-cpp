// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/dataproc/v1/jobs.proto

#include "google/cloud/dataproc/internal/job_controller_option_defaults.h"
#include "google/cloud/dataproc/job_controller_connection.h"
#include "google/cloud/dataproc/job_controller_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options JobControllerDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_JOB_CONTROLLER_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_JOB_CONTROLLER_AUTHORITY", "dataproc.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<dataproc::JobControllerRetryPolicyOption>()) {
    options.set<dataproc::JobControllerRetryPolicyOption>(
        dataproc::JobControllerLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<dataproc::JobControllerBackoffPolicyOption>()) {
    options.set<dataproc::JobControllerBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<dataproc::JobControllerPollingPolicyOption>()) {
    options.set<dataproc::JobControllerPollingPolicyOption>(
        GenericPollingPolicy<dataproc::JobControllerRetryPolicyOption::Type,
                             dataproc::JobControllerBackoffPolicyOption::Type>(
            options.get<dataproc::JobControllerRetryPolicyOption>()->clone(),
            options.get<dataproc::JobControllerBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options
           .has<dataproc::JobControllerConnectionIdempotencyPolicyOption>()) {
    options.set<dataproc::JobControllerConnectionIdempotencyPolicyOption>(
        dataproc::MakeDefaultJobControllerConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_internal
}  // namespace cloud
}  // namespace google
