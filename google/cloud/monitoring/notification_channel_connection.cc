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
// source: google/monitoring/v3/notification_service.proto

#include "google/cloud/monitoring/notification_channel_connection.h"
#include "google/cloud/monitoring/internal/notification_channel_connection_impl.h"
#include "google/cloud/monitoring/internal/notification_channel_option_defaults.h"
#include "google/cloud/monitoring/internal/notification_channel_stub_factory.h"
#include "google/cloud/monitoring/notification_channel_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotificationChannelServiceConnection::~NotificationChannelServiceConnection() =
    default;

StreamRange<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceConnection::ListNotificationChannelDescriptors(
    google::monitoring::v3::
        ListNotificationChannelDescriptorsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::monitoring::v3::NotificationChannelDescriptor>>();
}

StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceConnection::GetNotificationChannelDescriptor(
    google::monitoring::v3::GetNotificationChannelDescriptorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnection::ListNotificationChannels(
    google::monitoring::v3::
        ListNotificationChannelsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::monitoring::v3::NotificationChannel>>();
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnection::GetNotificationChannel(
    google::monitoring::v3::GetNotificationChannelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnection::CreateNotificationChannel(
    google::monitoring::v3::CreateNotificationChannelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnection::UpdateNotificationChannel(
    google::monitoring::v3::UpdateNotificationChannelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status NotificationChannelServiceConnection::DeleteNotificationChannel(
    google::monitoring::v3::DeleteNotificationChannelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status
NotificationChannelServiceConnection::SendNotificationChannelVerificationCode(
    google::monitoring::v3::
        SendNotificationChannelVerificationCodeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
NotificationChannelServiceConnection::GetNotificationChannelVerificationCode(
    google::monitoring::v3::
        GetNotificationChannelVerificationCodeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnection::VerifyNotificationChannel(
    google::monitoring::v3::VerifyNotificationChannelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<NotificationChannelServiceConnection>
MakeNotificationChannelServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 NotificationChannelServicePolicyOptionList>(
      options, __func__);
  options = monitoring_internal::NotificationChannelServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = monitoring_internal::CreateDefaultNotificationChannelServiceStub(
      background->cq(), options);
  return std::make_shared<
      monitoring_internal::NotificationChannelServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<monitoring::NotificationChannelServiceConnection>
MakeNotificationChannelServiceConnection(
    std::shared_ptr<NotificationChannelServiceStub> stub, Options options) {
  options = NotificationChannelServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      monitoring_internal::NotificationChannelServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google
