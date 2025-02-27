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
// source: google/cloud/dataplex/v1/metadata.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_METADATA_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_METADATA_CONNECTION_H

#include "google/cloud/dataplex/internal/metadata_retry_traits.h"
#include "google/cloud/dataplex/internal/metadata_stub.h"
#include "google/cloud/dataplex/metadata_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using MetadataServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        dataplex_internal::MetadataServiceRetryTraits>;

using MetadataServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dataplex_internal::MetadataServiceRetryTraits>;

using MetadataServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dataplex_internal::MetadataServiceRetryTraits>;

/**
 * The `MetadataServiceConnection` object for `MetadataServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `MetadataServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `MetadataServiceClient`.
 *
 * To create a concrete instance, see `MakeMetadataServiceConnection()`.
 *
 * For mocking, see `dataplex_mocks::MockMetadataServiceConnection`.
 */
class MetadataServiceConnection {
 public:
  virtual ~MetadataServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::dataplex::v1::Entity> CreateEntity(
      google::cloud::dataplex::v1::CreateEntityRequest const& request);

  virtual StatusOr<google::cloud::dataplex::v1::Entity> UpdateEntity(
      google::cloud::dataplex::v1::UpdateEntityRequest const& request);

  virtual Status DeleteEntity(
      google::cloud::dataplex::v1::DeleteEntityRequest const& request);

  virtual StatusOr<google::cloud::dataplex::v1::Entity> GetEntity(
      google::cloud::dataplex::v1::GetEntityRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::Entity> ListEntities(
      google::cloud::dataplex::v1::ListEntitiesRequest request);

  virtual StatusOr<google::cloud::dataplex::v1::Partition> CreatePartition(
      google::cloud::dataplex::v1::CreatePartitionRequest const& request);

  virtual Status DeletePartition(
      google::cloud::dataplex::v1::DeletePartitionRequest const& request);

  virtual StatusOr<google::cloud::dataplex::v1::Partition> GetPartition(
      google::cloud::dataplex::v1::GetPartitionRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::Partition> ListPartitions(
      google::cloud::dataplex::v1::ListPartitionsRequest request);
};

/**
 * A factory function to construct an object of type
 * `MetadataServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of MetadataServiceClient,
 * and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `MetadataServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::dataplex::MetadataServicePolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `MetadataServiceConnection` created
 * by this function.
 */
std::shared_ptr<MetadataServiceConnection> MakeMetadataServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace dataplex_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<dataplex::MetadataServiceConnection>
MakeMetadataServiceConnection(std::shared_ptr<MetadataServiceStub> stub,
                              Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_METADATA_CONNECTION_H
