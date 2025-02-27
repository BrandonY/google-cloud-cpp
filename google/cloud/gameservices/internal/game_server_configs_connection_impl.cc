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
// source: google/cloud/gaming/v1/game_server_configs_service.proto

#include "google/cloud/gameservices/internal/game_server_configs_connection_impl.h"
#include "google/cloud/gameservices/internal/game_server_configs_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GameServerConfigsServiceConnectionImpl::GameServerConfigsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<gameservices_internal::GameServerConfigsServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          gameservices_internal::GameServerConfigsServiceDefaultOptions(
              GameServerConfigsServiceConnection::options()))) {}

StreamRange<google::cloud::gaming::v1::GameServerConfig>
GameServerConfigsServiceConnectionImpl::ListGameServerConfigs(
    google::cloud::gaming::v1::ListGameServerConfigsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<gameservices::GameServerConfigsServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListGameServerConfigs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gaming::v1::GameServerConfig>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::gaming::v1::ListGameServerConfigsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::gaming::v1::ListGameServerConfigsRequest const&
                    request) {
              return stub->ListGameServerConfigs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gaming::v1::ListGameServerConfigsResponse r) {
        std::vector<google::cloud::gaming::v1::GameServerConfig> result(
            r.game_server_configs().size());
        auto& messages = *r.mutable_game_server_configs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::gaming::v1::GameServerConfig>
GameServerConfigsServiceConnectionImpl::GetGameServerConfig(
    google::cloud::gaming::v1::GetGameServerConfigRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetGameServerConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::GetGameServerConfigRequest const&
                 request) {
        return stub_->GetGameServerConfig(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::gaming::v1::GameServerConfig>>
GameServerConfigsServiceConnectionImpl::CreateGameServerConfig(
    google::cloud::gaming::v1::CreateGameServerConfigRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gaming::v1::GameServerConfig>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::CreateGameServerConfigRequest const&
                 request) {
        return stub->AsyncCreateGameServerConfig(cq, std::move(context),
                                                 request);
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
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gaming::v1::GameServerConfig>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateGameServerConfig(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
GameServerConfigsServiceConnectionImpl::DeleteGameServerConfig(
    google::cloud::gaming::v1::DeleteGameServerConfigRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gaming::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::DeleteGameServerConfigRequest const&
                 request) {
        return stub->AsyncDeleteGameServerConfig(cq, std::move(context),
                                                 request);
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
          google::cloud::gaming::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteGameServerConfig(request), polling_policy(),
      __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google
