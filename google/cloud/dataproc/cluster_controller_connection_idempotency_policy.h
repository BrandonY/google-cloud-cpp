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
// source: google/cloud/dataproc/v1/clusters.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_CLUSTER_CONTROLLER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_CLUSTER_CONTROLLER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/dataproc/v1/clusters.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ClusterControllerConnectionIdempotencyPolicy {
 public:
  virtual ~ClusterControllerConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<ClusterControllerConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency CreateCluster(
      google::cloud::dataproc::v1::CreateClusterRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateCluster(
      google::cloud::dataproc::v1::UpdateClusterRequest const& request) = 0;

  virtual google::cloud::Idempotency StopCluster(
      google::cloud::dataproc::v1::StopClusterRequest const& request) = 0;

  virtual google::cloud::Idempotency StartCluster(
      google::cloud::dataproc::v1::StartClusterRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteCluster(
      google::cloud::dataproc::v1::DeleteClusterRequest const& request) = 0;

  virtual google::cloud::Idempotency GetCluster(
      google::cloud::dataproc::v1::GetClusterRequest const& request) = 0;

  virtual google::cloud::Idempotency ListClusters(
      google::cloud::dataproc::v1::ListClustersRequest request) = 0;

  virtual google::cloud::Idempotency DiagnoseCluster(
      google::cloud::dataproc::v1::DiagnoseClusterRequest const& request) = 0;
};

std::unique_ptr<ClusterControllerConnectionIdempotencyPolicy>
MakeDefaultClusterControllerConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_CLUSTER_CONTROLLER_CONNECTION_IDEMPOTENCY_POLICY_H
