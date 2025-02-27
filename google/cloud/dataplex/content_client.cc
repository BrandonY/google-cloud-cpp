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
// source: google/cloud/dataplex/v1/content.proto

#include "google/cloud/dataplex/content_client.h"
#include "google/cloud/dataplex/internal/content_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContentServiceClient::ContentServiceClient(
    std::shared_ptr<ContentServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts), dataplex_internal::ContentServiceDefaultOptions(
                               connection_->options()))) {}
ContentServiceClient::~ContentServiceClient() = default;

StatusOr<google::cloud::dataplex::v1::Content>
ContentServiceClient::CreateContent(
    std::string const& parent,
    google::cloud::dataplex::v1::Content const& content, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateContentRequest request;
  request.set_parent(parent);
  *request.mutable_content() = content;
  return connection_->CreateContent(request);
}

StatusOr<google::cloud::dataplex::v1::Content>
ContentServiceClient::CreateContent(
    google::cloud::dataplex::v1::CreateContentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateContent(request);
}

StatusOr<google::cloud::dataplex::v1::Content>
ContentServiceClient::UpdateContent(
    google::cloud::dataplex::v1::Content const& content,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateContentRequest request;
  *request.mutable_content() = content;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateContent(request);
}

StatusOr<google::cloud::dataplex::v1::Content>
ContentServiceClient::UpdateContent(
    google::cloud::dataplex::v1::UpdateContentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateContent(request);
}

Status ContentServiceClient::DeleteContent(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteContentRequest request;
  request.set_name(name);
  return connection_->DeleteContent(request);
}

Status ContentServiceClient::DeleteContent(
    google::cloud::dataplex::v1::DeleteContentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteContent(request);
}

StatusOr<google::cloud::dataplex::v1::Content> ContentServiceClient::GetContent(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetContentRequest request;
  request.set_name(name);
  return connection_->GetContent(request);
}

StatusOr<google::cloud::dataplex::v1::Content> ContentServiceClient::GetContent(
    google::cloud::dataplex::v1::GetContentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetContent(request);
}

StatusOr<google::iam::v1::Policy> ContentServiceClient::GetIamPolicy(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ContentServiceClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ContentServiceClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ContentServiceClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::cloud::dataplex::v1::Content>
ContentServiceClient::ListContent(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListContentRequest request;
  request.set_parent(parent);
  return connection_->ListContent(request);
}

StreamRange<google::cloud::dataplex::v1::Content>
ContentServiceClient::ListContent(
    google::cloud::dataplex::v1::ListContentRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListContent(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex
}  // namespace cloud
}  // namespace google
