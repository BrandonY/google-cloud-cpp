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

#include "google/cloud/dataproc/internal/job_controller_auth_decorator.h"
#include <google/cloud/dataproc/v1/jobs.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobControllerAuth::JobControllerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<JobControllerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerAuth::SubmitJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SubmitJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
JobControllerAuth::AsyncSubmitJobAsOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncSubmitJobAsOperation(cq, *std::move(context),
                                                request);
      });
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerAuth::GetJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::GetJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetJob(context, request);
}

StatusOr<google::cloud::dataproc::v1::ListJobsResponse>
JobControllerAuth::ListJobs(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::ListJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListJobs(context, request);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerAuth::UpdateJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::UpdateJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateJob(context, request);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerAuth::CancelJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::CancelJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelJob(context, request);
}

Status JobControllerAuth::DeleteJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::DeleteJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
JobControllerAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> JobControllerAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_internal
}  // namespace cloud
}  // namespace google
