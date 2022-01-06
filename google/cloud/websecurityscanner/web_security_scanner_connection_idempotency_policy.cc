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
// source: google/cloud/websecurityscanner/v1/web_security_scanner.proto

#include "google/cloud/websecurityscanner/web_security_scanner_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace websecurityscanner {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::internal::Idempotency;

WebSecurityScannerConnectionIdempotencyPolicy::
    ~WebSecurityScannerConnectionIdempotencyPolicy() = default;

namespace {
class DefaultWebSecurityScannerConnectionIdempotencyPolicy
    : public WebSecurityScannerConnectionIdempotencyPolicy {
 public:
  ~DefaultWebSecurityScannerConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<WebSecurityScannerConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultWebSecurityScannerConnectionIdempotencyPolicy>(*this);
  }

  Idempotency CreateScanConfig(
      google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteScanConfig(
      google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetScanConfig(
      google::cloud::websecurityscanner::v1::GetScanConfigRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListScanConfigs(
      google::cloud::websecurityscanner::v1::ListScanConfigsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateScanConfig(
      google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency StartScanRun(
      google::cloud::websecurityscanner::v1::StartScanRunRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetScanRun(
      google::cloud::websecurityscanner::v1::GetScanRunRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListScanRuns(
      google::cloud::websecurityscanner::v1::ListScanRunsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency StopScanRun(
      google::cloud::websecurityscanner::v1::StopScanRunRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListCrawledUrls(
      google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetFinding(
      google::cloud::websecurityscanner::v1::GetFindingRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListFindings(
      google::cloud::websecurityscanner::v1::ListFindingsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListFindingTypeStats(
      google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&)
      override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<WebSecurityScannerConnectionIdempotencyPolicy>
MakeDefaultWebSecurityScannerConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultWebSecurityScannerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google
