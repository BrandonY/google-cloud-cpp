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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#include "google/cloud/cloudbuild/internal/cloud_build_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/devtools/cloudbuild/v1/cloudbuild.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudBuildMetadata::CloudBuildMetadata(std::shared_ptr<CloudBuildStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncCreateBuild(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
  SetMetadata(*context);
  return child_->AsyncCreateBuild(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::Build> CloudBuildMetadata::GetBuild(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::GetBuildRequest const& request) {
  SetMetadata(context);
  return child_->GetBuild(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildsResponse>
CloudBuildMetadata::ListBuilds(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::ListBuildsRequest const& request) {
  SetMetadata(context);
  return child_->ListBuilds(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::Build>
CloudBuildMetadata::CancelBuild(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::CancelBuildRequest const& request) {
  SetMetadata(context);
  return child_->CancelBuild(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncRetryBuild(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
  SetMetadata(*context);
  return child_->AsyncRetryBuild(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncApproveBuild(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncApproveBuild(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildMetadata::CreateBuildTrigger(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
        request) {
  SetMetadata(context);
  return child_->CreateBuildTrigger(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildMetadata::GetBuildTrigger(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request) {
  SetMetadata(context);
  return child_->GetBuildTrigger(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildTriggersResponse>
CloudBuildMetadata::ListBuildTriggers(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::ListBuildTriggersRequest const& request) {
  SetMetadata(context);
  return child_->ListBuildTriggers(context, request);
}

Status CloudBuildMetadata::DeleteBuildTrigger(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
        request) {
  SetMetadata(context);
  return child_->DeleteBuildTrigger(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildMetadata::UpdateBuildTrigger(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
        request) {
  SetMetadata(context);
  return child_->UpdateBuildTrigger(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncRunBuildTrigger(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request) {
  SetMetadata(*context);
  return child_->AsyncRunBuildTrigger(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
CloudBuildMetadata::ReceiveTriggerWebhook(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
        request) {
  SetMetadata(context);
  return child_->ReceiveTriggerWebhook(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncCreateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateWorkerPool(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildMetadata::GetWorkerPool(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetWorkerPool(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncDeleteWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteWorkerPool(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncUpdateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request) {
  SetMetadata(*context, "worker_pool.name=" + request.worker_pool().name());
  return child_->AsyncUpdateWorkerPool(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::ListWorkerPoolsResponse>
CloudBuildMetadata::ListWorkerPools(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListWorkerPools(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudBuildMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CloudBuildMetadata::SetMetadata(grpc::ClientContext& context,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudBuildMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_internal
}  // namespace cloud
}  // namespace google
