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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_INTERNAL_ASSURED_WORKLOADS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_INTERNAL_ASSURED_WORKLOADS_CONNECTION_IMPL_H

#include "google/cloud/assuredworkloads/assured_workloads_connection.h"
#include "google/cloud/assuredworkloads/assured_workloads_connection_idempotency_policy.h"
#include "google/cloud/assuredworkloads/assured_workloads_options.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_retry_traits.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AssuredWorkloadsServiceConnectionImpl
    : public assuredworkloads::AssuredWorkloadsServiceConnection {
 public:
  ~AssuredWorkloadsServiceConnectionImpl() override = default;

  AssuredWorkloadsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<assuredworkloads_internal::AssuredWorkloadsServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
  CreateWorkload(
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Workload> UpdateWorkload(
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request)
      override;

  Status DeleteWorkload(
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request)
      override;

  StreamRange<google::cloud::assuredworkloads::v1::Workload> ListWorkloads(
      google::cloud::assuredworkloads::v1::ListWorkloadsRequest request)
      override;

 private:
  std::unique_ptr<assuredworkloads::AssuredWorkloadsServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            assuredworkloads::AssuredWorkloadsServiceRetryPolicyOption>()) {
      return options
          .get<assuredworkloads::AssuredWorkloadsServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<assuredworkloads::AssuredWorkloadsServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            assuredworkloads::AssuredWorkloadsServiceBackoffPolicyOption>()) {
      return options
          .get<assuredworkloads::AssuredWorkloadsServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<assuredworkloads::AssuredWorkloadsServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      assuredworkloads::AssuredWorkloadsServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            assuredworkloads::
                AssuredWorkloadsServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<assuredworkloads::
                   AssuredWorkloadsServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<assuredworkloads::
                 AssuredWorkloadsServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            assuredworkloads::AssuredWorkloadsServicePollingPolicyOption>()) {
      return options
          .get<assuredworkloads::AssuredWorkloadsServicePollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<assuredworkloads::AssuredWorkloadsServicePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<assuredworkloads_internal::AssuredWorkloadsServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_INTERNAL_ASSURED_WORKLOADS_CONNECTION_IMPL_H
