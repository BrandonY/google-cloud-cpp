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

#include "google/cloud/dataplex/metadata_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

MetadataServiceConnectionIdempotencyPolicy::
    ~MetadataServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultMetadataServiceConnectionIdempotencyPolicy
    : public MetadataServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultMetadataServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<MetadataServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultMetadataServiceConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency CreateEntity(
      google::cloud::dataplex::v1::CreateEntityRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateEntity(
      google::cloud::dataplex::v1::UpdateEntityRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteEntity(
      google::cloud::dataplex::v1::DeleteEntityRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetEntity(
      google::cloud::dataplex::v1::GetEntityRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListEntities(
      google::cloud::dataplex::v1::ListEntitiesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreatePartition(
      google::cloud::dataplex::v1::CreatePartitionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeletePartition(
      google::cloud::dataplex::v1::DeletePartitionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetPartition(
      google::cloud::dataplex::v1::GetPartitionRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListPartitions(
      google::cloud::dataplex::v1::ListPartitionsRequest) override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<MetadataServiceConnectionIdempotencyPolicy>
MakeDefaultMetadataServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultMetadataServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex
}  // namespace cloud
}  // namespace google
