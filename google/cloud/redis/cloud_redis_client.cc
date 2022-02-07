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
// source: google/cloud/redis/v1/cloud_redis.proto

#include "google/cloud/redis/cloud_redis_client.h"
#include "google/cloud/redis/internal/cloud_redis_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace redis {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudRedisClient::CloudRedisClient(
    std::shared_ptr<CloudRedisConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts),
          redis_internal::CloudRedisDefaultOptions(connection_->options()))) {}
CloudRedisClient::~CloudRedisClient() = default;

StreamRange<google::cloud::redis::v1::Instance> CloudRedisClient::ListInstances(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::redis::v1::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StreamRange<google::cloud::redis::v1::Instance> CloudRedisClient::ListInstances(
    google::cloud::redis::v1::ListInstancesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

StatusOr<google::cloud::redis::v1::Instance> CloudRedisClient::GetInstance(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::redis::v1::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::cloud::redis::v1::Instance> CloudRedisClient::GetInstance(
    google::cloud::redis::v1::GetInstanceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::CreateInstance(
    std::string const& parent, std::string const& instance_id,
    google::cloud::redis::v1::Instance const& instance, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::redis::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  request.set_instance_id(instance_id);
  *request.mutable_instance() = instance;
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::CreateInstance(
    google::cloud::redis::v1::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::UpdateInstance(
    google::protobuf::FieldMask const& update_mask,
    google::cloud::redis::v1::Instance const& instance, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::redis::v1::UpdateInstanceRequest request;
  *request.mutable_update_mask() = update_mask;
  *request.mutable_instance() = instance;
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::UpdateInstance(
    google::cloud::redis::v1::UpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::UpgradeInstance(std::string const& name,
                                  std::string const& redis_version,
                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::redis::v1::UpgradeInstanceRequest request;
  request.set_name(name);
  request.set_redis_version(redis_version);
  return connection_->UpgradeInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::UpgradeInstance(
    google::cloud::redis::v1::UpgradeInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpgradeInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::ImportInstance(
    std::string const& name,
    google::cloud::redis::v1::InputConfig const& input_config, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::redis::v1::ImportInstanceRequest request;
  request.set_name(name);
  *request.mutable_input_config() = input_config;
  return connection_->ImportInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::ImportInstance(
    google::cloud::redis::v1::ImportInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::ExportInstance(
    std::string const& name,
    google::cloud::redis::v1::OutputConfig const& output_config, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::redis::v1::ExportInstanceRequest request;
  request.set_name(name);
  *request.mutable_output_config() = output_config;
  return connection_->ExportInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::ExportInstance(
    google::cloud::redis::v1::ExportInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::FailoverInstance(
    std::string const& name,
    google::cloud::redis::v1::FailoverInstanceRequest::DataProtectionMode
        data_protection_mode,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::redis::v1::FailoverInstanceRequest request;
  request.set_name(name);
  request.set_data_protection_mode(data_protection_mode);
  return connection_->FailoverInstance(request);
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisClient::FailoverInstance(
    google::cloud::redis::v1::FailoverInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FailoverInstance(request);
}

future<StatusOr<google::cloud::redis::v1::OperationMetadata>>
CloudRedisClient::DeleteInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::redis::v1::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(request);
}

future<StatusOr<google::cloud::redis::v1::OperationMetadata>>
CloudRedisClient::DeleteInstance(
    google::cloud::redis::v1::DeleteInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis
}  // namespace cloud
}  // namespace google
