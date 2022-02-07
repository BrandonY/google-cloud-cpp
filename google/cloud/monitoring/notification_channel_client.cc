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

#include "google/cloud/monitoring/notification_channel_client.h"
#include "google/cloud/monitoring/internal/notification_channel_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotificationChannelServiceClient::NotificationChannelServiceClient(
    std::shared_ptr<NotificationChannelServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts),
          monitoring_internal::NotificationChannelServiceDefaultOptions(
              connection_->options()))) {}
NotificationChannelServiceClient::~NotificationChannelServiceClient() = default;

StreamRange<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceClient::ListNotificationChannelDescriptors(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::ListNotificationChannelDescriptorsRequest request;
  request.set_name(name);
  return connection_->ListNotificationChannelDescriptors(request);
}

StreamRange<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceClient::ListNotificationChannelDescriptors(
    google::monitoring::v3::ListNotificationChannelDescriptorsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNotificationChannelDescriptors(std::move(request));
}

StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceClient::GetNotificationChannelDescriptor(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::GetNotificationChannelDescriptorRequest request;
  request.set_name(name);
  return connection_->GetNotificationChannelDescriptor(request);
}

StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceClient::GetNotificationChannelDescriptor(
    google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNotificationChannelDescriptor(request);
}

StreamRange<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::ListNotificationChannels(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::ListNotificationChannelsRequest request;
  request.set_name(name);
  return connection_->ListNotificationChannels(request);
}

StreamRange<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::ListNotificationChannels(
    google::monitoring::v3::ListNotificationChannelsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNotificationChannels(std::move(request));
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::GetNotificationChannel(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::GetNotificationChannelRequest request;
  request.set_name(name);
  return connection_->GetNotificationChannel(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::GetNotificationChannel(
    google::monitoring::v3::GetNotificationChannelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNotificationChannel(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::CreateNotificationChannel(
    std::string const& name,
    google::monitoring::v3::NotificationChannel const& notification_channel,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::CreateNotificationChannelRequest request;
  request.set_name(name);
  *request.mutable_notification_channel() = notification_channel;
  return connection_->CreateNotificationChannel(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::CreateNotificationChannel(
    google::monitoring::v3::CreateNotificationChannelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNotificationChannel(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::UpdateNotificationChannel(
    google::protobuf::FieldMask const& update_mask,
    google::monitoring::v3::NotificationChannel const& notification_channel,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::UpdateNotificationChannelRequest request;
  *request.mutable_update_mask() = update_mask;
  *request.mutable_notification_channel() = notification_channel;
  return connection_->UpdateNotificationChannel(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::UpdateNotificationChannel(
    google::monitoring::v3::UpdateNotificationChannelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateNotificationChannel(request);
}

Status NotificationChannelServiceClient::DeleteNotificationChannel(
    std::string const& name, bool force, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::DeleteNotificationChannelRequest request;
  request.set_name(name);
  request.set_force(force);
  return connection_->DeleteNotificationChannel(request);
}

Status NotificationChannelServiceClient::DeleteNotificationChannel(
    google::monitoring::v3::DeleteNotificationChannelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNotificationChannel(request);
}

Status
NotificationChannelServiceClient::SendNotificationChannelVerificationCode(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::SendNotificationChannelVerificationCodeRequest
      request;
  request.set_name(name);
  return connection_->SendNotificationChannelVerificationCode(request);
}

Status
NotificationChannelServiceClient::SendNotificationChannelVerificationCode(
    google::monitoring::v3::
        SendNotificationChannelVerificationCodeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SendNotificationChannelVerificationCode(request);
}

StatusOr<google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
NotificationChannelServiceClient::GetNotificationChannelVerificationCode(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::GetNotificationChannelVerificationCodeRequest request;
  request.set_name(name);
  return connection_->GetNotificationChannelVerificationCode(request);
}

StatusOr<google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
NotificationChannelServiceClient::GetNotificationChannelVerificationCode(
    google::monitoring::v3::GetNotificationChannelVerificationCodeRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNotificationChannelVerificationCode(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::VerifyNotificationChannel(
    std::string const& name, std::string const& code, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::VerifyNotificationChannelRequest request;
  request.set_name(name);
  request.set_code(code);
  return connection_->VerifyNotificationChannel(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceClient::VerifyNotificationChannel(
    google::monitoring::v3::VerifyNotificationChannelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->VerifyNotificationChannel(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google
