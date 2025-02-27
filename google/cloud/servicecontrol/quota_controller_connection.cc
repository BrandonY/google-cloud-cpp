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
// source: google/api/servicecontrol/v1/quota_controller.proto

#include "google/cloud/servicecontrol/quota_controller_connection.h"
#include "google/cloud/servicecontrol/internal/quota_controller_connection_impl.h"
#include "google/cloud/servicecontrol/internal/quota_controller_option_defaults.h"
#include "google/cloud/servicecontrol/internal/quota_controller_stub_factory.h"
#include "google/cloud/servicecontrol/quota_controller_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicecontrol {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

QuotaControllerConnection::~QuotaControllerConnection() = default;

StatusOr<google::api::servicecontrol::v1::AllocateQuotaResponse>
QuotaControllerConnection::AllocateQuota(
    google::api::servicecontrol::v1::AllocateQuotaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<QuotaControllerConnection> MakeQuotaControllerConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 QuotaControllerPolicyOptionList>(options,
                                                                  __func__);
  options = servicecontrol_internal::QuotaControllerDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = servicecontrol_internal::CreateDefaultQuotaControllerStub(
      background->cq(), options);
  return std::make_shared<
      servicecontrol_internal::QuotaControllerConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace servicecontrol_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<servicecontrol::QuotaControllerConnection>
MakeQuotaControllerConnection(std::shared_ptr<QuotaControllerStub> stub,
                              Options options) {
  options = QuotaControllerDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      servicecontrol_internal::QuotaControllerConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_internal
}  // namespace cloud
}  // namespace google
