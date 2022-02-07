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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/assured_workloads_client.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssuredWorkloadsServiceClient::AssuredWorkloadsServiceClient(
    std::shared_ptr<AssuredWorkloadsServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts),
          assuredworkloads_internal::AssuredWorkloadsServiceDefaultOptions(
              connection_->options()))) {}
AssuredWorkloadsServiceClient::~AssuredWorkloadsServiceClient() = default;

future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
AssuredWorkloadsServiceClient::CreateWorkload(
    std::string const& parent,
    google::cloud::assuredworkloads::v1::Workload const& workload,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::assuredworkloads::v1::CreateWorkloadRequest request;
  request.set_parent(parent);
  *request.mutable_workload() = workload;
  return connection_->CreateWorkload(request);
}

future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
AssuredWorkloadsServiceClient::CreateWorkload(
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkload(request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceClient::UpdateWorkload(
    google::cloud::assuredworkloads::v1::Workload const& workload,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::assuredworkloads::v1::UpdateWorkloadRequest request;
  *request.mutable_workload() = workload;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkload(request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceClient::UpdateWorkload(
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkload(request);
}

Status AssuredWorkloadsServiceClient::DeleteWorkload(std::string const& name,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::assuredworkloads::v1::DeleteWorkloadRequest request;
  request.set_name(name);
  return connection_->DeleteWorkload(request);
}

Status AssuredWorkloadsServiceClient::DeleteWorkload(
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkload(request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceClient::GetWorkload(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::assuredworkloads::v1::GetWorkloadRequest request;
  request.set_name(name);
  return connection_->GetWorkload(request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceClient::GetWorkload(
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetWorkload(request);
}

StreamRange<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceClient::ListWorkloads(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::assuredworkloads::v1::ListWorkloadsRequest request;
  request.set_parent(parent);
  return connection_->ListWorkloads(request);
}

StreamRange<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceClient::ListWorkloads(
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListWorkloads(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads
}  // namespace cloud
}  // namespace google
