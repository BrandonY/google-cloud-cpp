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
// source: google/cloud/batch/v1/batch.proto

#include "google/cloud/batch/internal/batch_connection_impl.h"
#include "google/cloud/batch/internal/batch_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace batch_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BatchServiceConnectionImpl::BatchServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<batch_internal::BatchServiceStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), batch_internal::BatchServiceDefaultOptions(
                                  BatchServiceConnection::options()))) {}

StatusOr<google::cloud::batch::v1::Job> BatchServiceConnectionImpl::CreateJob(
    google::cloud::batch::v1::CreateJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::batch::v1::CreateJobRequest const& request) {
        return stub_->CreateJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::batch::v1::Job> BatchServiceConnectionImpl::GetJob(
    google::cloud::batch::v1::GetJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::batch::v1::GetJobRequest const& request) {
        return stub_->GetJob(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::batch::v1::OperationMetadata>>
BatchServiceConnectionImpl::DeleteJob(
    google::cloud::batch::v1::DeleteJobRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::batch::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::batch::v1::DeleteJobRequest const& request) {
        return stub->AsyncDeleteJob(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::batch::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteJob(request), polling_policy(), __func__);
}

StreamRange<google::cloud::batch::v1::Job> BatchServiceConnectionImpl::ListJobs(
    google::cloud::batch::v1::ListJobsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<batch::BatchServiceRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::batch::v1::Job>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::batch::v1::ListJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::batch::v1::ListJobsRequest const& request) {
              return stub->ListJobs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::batch::v1::ListJobsResponse r) {
        std::vector<google::cloud::batch::v1::Job> result(r.jobs().size());
        auto& messages = *r.mutable_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::batch::v1::Task> BatchServiceConnectionImpl::GetTask(
    google::cloud::batch::v1::GetTaskRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetTask(request),
      [this](grpc::ClientContext& context,
             google::cloud::batch::v1::GetTaskRequest const& request) {
        return stub_->GetTask(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::batch::v1::Task>
BatchServiceConnectionImpl::ListTasks(
    google::cloud::batch::v1::ListTasksRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<batch::BatchServiceRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListTasks(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::batch::v1::Task>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::batch::v1::ListTasksRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::batch::v1::ListTasksRequest const& request) {
              return stub->ListTasks(context, request);
            },
            r, function_name);
      },
      [](google::cloud::batch::v1::ListTasksResponse r) {
        std::vector<google::cloud::batch::v1::Task> result(r.tasks().size());
        auto& messages = *r.mutable_tasks();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_internal
}  // namespace cloud
}  // namespace google
