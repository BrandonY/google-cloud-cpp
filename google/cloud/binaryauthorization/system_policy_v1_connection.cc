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
// source: google/cloud/binaryauthorization/v1/service.proto

#include "google/cloud/binaryauthorization/system_policy_v1_connection.h"
#include "google/cloud/binaryauthorization/internal/system_policy_v1_connection_impl.h"
#include "google/cloud/binaryauthorization/internal/system_policy_v1_option_defaults.h"
#include "google/cloud/binaryauthorization/internal/system_policy_v1_stub_factory.h"
#include "google/cloud/binaryauthorization/system_policy_v1_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SystemPolicyV1Connection::~SystemPolicyV1Connection() = default;

StatusOr<google::cloud::binaryauthorization::v1::Policy>
SystemPolicyV1Connection::GetSystemPolicy(
    google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<SystemPolicyV1Connection> MakeSystemPolicyV1Connection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 SystemPolicyV1PolicyOptionList>(options,
                                                                 __func__);
  options = binaryauthorization_internal::SystemPolicyV1DefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = binaryauthorization_internal::CreateDefaultSystemPolicyV1Stub(
      background->cq(), options);
  return std::make_shared<
      binaryauthorization_internal::SystemPolicyV1ConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace binaryauthorization_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<binaryauthorization::SystemPolicyV1Connection>
MakeSystemPolicyV1Connection(std::shared_ptr<SystemPolicyV1Stub> stub,
                             Options options) {
  options = SystemPolicyV1DefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      binaryauthorization_internal::SystemPolicyV1ConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_internal
}  // namespace cloud
}  // namespace google
