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

#include "google/cloud/websecurityscanner/web_security_scanner_connection.h"
#include "google/cloud/websecurityscanner/internal/web_security_scanner_option_defaults.h"
#include "google/cloud/websecurityscanner/internal/web_security_scanner_stub_factory.h"
#include "google/cloud/websecurityscanner/web_security_scanner_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace websecurityscanner {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WebSecurityScannerConnection::~WebSecurityScannerConnection() = default;

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerConnection::CreateScanConfig(
    google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status WebSecurityScannerConnection::DeleteScanConfig(
    google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerConnection::GetScanConfig(
    google::cloud::websecurityscanner::v1::GetScanConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerConnection::ListScanConfigs(
    google::cloud::websecurityscanner::v1::ListScanConfigsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>>(
      std::move(request),
      [](google::cloud::websecurityscanner::v1::ListScanConfigsRequest const&) {
        return StatusOr<
            google::cloud::websecurityscanner::v1::ListScanConfigsResponse>{};
      },
      [](google::cloud::websecurityscanner::v1::
             ListScanConfigsResponse const&) {
        return std::vector<google::cloud::websecurityscanner::v1::ScanConfig>();
      });
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerConnection::UpdateScanConfig(
    google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerConnection::StartScanRun(
    google::cloud::websecurityscanner::v1::StartScanRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerConnection::GetScanRun(
    google::cloud::websecurityscanner::v1::GetScanRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerConnection::ListScanRuns(
    google::cloud::websecurityscanner::v1::ListScanRunsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::websecurityscanner::v1::ScanRun>>(
      std::move(request),
      [](google::cloud::websecurityscanner::v1::ListScanRunsRequest const&) {
        return StatusOr<
            google::cloud::websecurityscanner::v1::ListScanRunsResponse>{};
      },
      [](google::cloud::websecurityscanner::v1::ListScanRunsResponse const&) {
        return std::vector<google::cloud::websecurityscanner::v1::ScanRun>();
      });
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerConnection::StopScanRun(
    google::cloud::websecurityscanner::v1::StopScanRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>
WebSecurityScannerConnection::ListCrawledUrls(
    google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>>(
      std::move(request),
      [](google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest const&) {
        return StatusOr<
            google::cloud::websecurityscanner::v1::ListCrawledUrlsResponse>{};
      },
      [](google::cloud::websecurityscanner::v1::
             ListCrawledUrlsResponse const&) {
        return std::vector<google::cloud::websecurityscanner::v1::CrawledUrl>();
      });
}

StatusOr<google::cloud::websecurityscanner::v1::Finding>
WebSecurityScannerConnection::GetFinding(
    google::cloud::websecurityscanner::v1::GetFindingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::websecurityscanner::v1::Finding>
WebSecurityScannerConnection::ListFindings(
    google::cloud::websecurityscanner::v1::ListFindingsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::websecurityscanner::v1::Finding>>(
      std::move(request),
      [](google::cloud::websecurityscanner::v1::ListFindingsRequest const&) {
        return StatusOr<
            google::cloud::websecurityscanner::v1::ListFindingsResponse>{};
      },
      [](google::cloud::websecurityscanner::v1::ListFindingsResponse const&) {
        return std::vector<google::cloud::websecurityscanner::v1::Finding>();
      });
}

StatusOr<google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>
WebSecurityScannerConnection::ListFindingTypeStats(
    google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class WebSecurityScannerConnectionImpl : public WebSecurityScannerConnection {
 public:
  WebSecurityScannerConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<websecurityscanner_internal::WebSecurityScannerStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<WebSecurityScannerRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<WebSecurityScannerBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<WebSecurityScannerConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~WebSecurityScannerConnectionImpl() override = default;

  StatusOr<google::cloud::websecurityscanner::v1::ScanConfig> CreateScanConfig(
      google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateScanConfig(request),
        [this](grpc::ClientContext& context,
               google::cloud::websecurityscanner::v1::
                   CreateScanConfigRequest const& request) {
          return stub_->CreateScanConfig(context, request);
        },
        request, __func__);
  }

  Status DeleteScanConfig(
      google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteScanConfig(request),
        [this](grpc::ClientContext& context,
               google::cloud::websecurityscanner::v1::
                   DeleteScanConfigRequest const& request) {
          return stub_->DeleteScanConfig(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::websecurityscanner::v1::ScanConfig> GetScanConfig(
      google::cloud::websecurityscanner::v1::GetScanConfigRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetScanConfig(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::websecurityscanner::v1::GetScanConfigRequest const&
                request) { return stub_->GetScanConfig(context, request); },
        request, __func__);
  }

  StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>
  ListScanConfigs(google::cloud::websecurityscanner::v1::ListScanConfigsRequest
                      request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<WebSecurityScannerRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListScanConfigs(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::websecurityscanner::v1::ListScanConfigsRequest const&
                r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::websecurityscanner::v1::
                         ListScanConfigsRequest const& request) {
                return stub->ListScanConfigs(context, request);
              },
              r, function_name);
        },
        [](google::cloud::websecurityscanner::v1::ListScanConfigsResponse r) {
          std::vector<google::cloud::websecurityscanner::v1::ScanConfig> result(
              r.scan_configs().size());
          auto& messages = *r.mutable_scan_configs();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::websecurityscanner::v1::ScanConfig> UpdateScanConfig(
      google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateScanConfig(request),
        [this](grpc::ClientContext& context,
               google::cloud::websecurityscanner::v1::
                   UpdateScanConfigRequest const& request) {
          return stub_->UpdateScanConfig(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::websecurityscanner::v1::ScanRun> StartScanRun(
      google::cloud::websecurityscanner::v1::StartScanRunRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->StartScanRun(request),
        [this](grpc::ClientContext& context,
               google::cloud::websecurityscanner::v1::StartScanRunRequest const&
                   request) { return stub_->StartScanRun(context, request); },
        request, __func__);
  }

  StatusOr<google::cloud::websecurityscanner::v1::ScanRun> GetScanRun(
      google::cloud::websecurityscanner::v1::GetScanRunRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetScanRun(request),
        [this](grpc::ClientContext& context,
               google::cloud::websecurityscanner::v1::GetScanRunRequest const&
                   request) { return stub_->GetScanRun(context, request); },
        request, __func__);
  }

  StreamRange<google::cloud::websecurityscanner::v1::ScanRun> ListScanRuns(
      google::cloud::websecurityscanner::v1::ListScanRunsRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<WebSecurityScannerRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListScanRuns(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::websecurityscanner::v1::ScanRun>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::websecurityscanner::v1::ListScanRunsRequest const&
                r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::websecurityscanner::v1::
                         ListScanRunsRequest const& request) {
                return stub->ListScanRuns(context, request);
              },
              r, function_name);
        },
        [](google::cloud::websecurityscanner::v1::ListScanRunsResponse r) {
          std::vector<google::cloud::websecurityscanner::v1::ScanRun> result(
              r.scan_runs().size());
          auto& messages = *r.mutable_scan_runs();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::websecurityscanner::v1::ScanRun> StopScanRun(
      google::cloud::websecurityscanner::v1::StopScanRunRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->StopScanRun(request),
        [this](grpc::ClientContext& context,
               google::cloud::websecurityscanner::v1::StopScanRunRequest const&
                   request) { return stub_->StopScanRun(context, request); },
        request, __func__);
  }

  StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>
  ListCrawledUrls(google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest
                      request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<WebSecurityScannerRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListCrawledUrls(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest const&
                r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::websecurityscanner::v1::
                         ListCrawledUrlsRequest const& request) {
                return stub->ListCrawledUrls(context, request);
              },
              r, function_name);
        },
        [](google::cloud::websecurityscanner::v1::ListCrawledUrlsResponse r) {
          std::vector<google::cloud::websecurityscanner::v1::CrawledUrl> result(
              r.crawled_urls().size());
          auto& messages = *r.mutable_crawled_urls();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::websecurityscanner::v1::Finding> GetFinding(
      google::cloud::websecurityscanner::v1::GetFindingRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetFinding(request),
        [this](grpc::ClientContext& context,
               google::cloud::websecurityscanner::v1::GetFindingRequest const&
                   request) { return stub_->GetFinding(context, request); },
        request, __func__);
  }

  StreamRange<google::cloud::websecurityscanner::v1::Finding> ListFindings(
      google::cloud::websecurityscanner::v1::ListFindingsRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<WebSecurityScannerRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListFindings(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::websecurityscanner::v1::Finding>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::websecurityscanner::v1::ListFindingsRequest const&
                r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::websecurityscanner::v1::
                         ListFindingsRequest const& request) {
                return stub->ListFindings(context, request);
              },
              r, function_name);
        },
        [](google::cloud::websecurityscanner::v1::ListFindingsResponse r) {
          std::vector<google::cloud::websecurityscanner::v1::Finding> result(
              r.findings().size());
          auto& messages = *r.mutable_findings();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>
  ListFindingTypeStats(
      google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ListFindingTypeStats(request),
        [this](grpc::ClientContext& context,
               google::cloud::websecurityscanner::v1::
                   ListFindingTypeStatsRequest const& request) {
          return stub_->ListFindingTypeStats(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<websecurityscanner_internal::WebSecurityScannerStub> stub_;
  std::unique_ptr<WebSecurityScannerRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<WebSecurityScannerConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<WebSecurityScannerConnection> MakeWebSecurityScannerConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 WebSecurityScannerPolicyOptionList>(options,
                                                                     __func__);
  options = websecurityscanner_internal::WebSecurityScannerDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = websecurityscanner_internal::CreateDefaultWebSecurityScannerStub(
      background->cq(), options);
  return std::make_shared<WebSecurityScannerConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace websecurityscanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<websecurityscanner::WebSecurityScannerConnection>
MakeWebSecurityScannerConnection(std::shared_ptr<WebSecurityScannerStub> stub,
                                 Options options) {
  options = WebSecurityScannerDefaultOptions(std::move(options));
  return std::make_shared<websecurityscanner::WebSecurityScannerConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner_internal
}  // namespace cloud
}  // namespace google
