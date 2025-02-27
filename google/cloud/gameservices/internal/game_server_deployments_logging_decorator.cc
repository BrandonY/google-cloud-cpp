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
// source: google/cloud/gaming/v1/game_server_deployments_service.proto

#include "google/cloud/gameservices/internal/game_server_deployments_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gaming/v1/game_server_deployments_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GameServerDeploymentsServiceLogging::GameServerDeploymentsServiceLogging(
    std::shared_ptr<GameServerDeploymentsServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::gaming::v1::ListGameServerDeploymentsResponse>
GameServerDeploymentsServiceLogging::ListGameServerDeployments(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::ListGameServerDeploymentsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::ListGameServerDeploymentsRequest const&
                 request) {
        return child_->ListGameServerDeployments(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gaming::v1::GameServerDeployment>
GameServerDeploymentsServiceLogging::GetGameServerDeployment(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::GetGameServerDeploymentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::GetGameServerDeploymentRequest const&
                 request) {
        return child_->GetGameServerDeployment(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceLogging::AsyncCreateGameServerDeployment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&
                 request) {
        return child_->AsyncCreateGameServerDeployment(cq, std::move(context),
                                                       request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceLogging::AsyncDeleteGameServerDeployment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&
                 request) {
        return child_->AsyncDeleteGameServerDeployment(cq, std::move(context),
                                                       request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceLogging::AsyncUpdateGameServerDeployment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&
                 request) {
        return child_->AsyncUpdateGameServerDeployment(cq, std::move(context),
                                                       request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::gaming::v1::GameServerDeploymentRollout>
GameServerDeploymentsServiceLogging::GetGameServerDeploymentRollout(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::GetGameServerDeploymentRolloutRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::
                 GetGameServerDeploymentRolloutRequest const& request) {
        return child_->GetGameServerDeploymentRollout(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceLogging::AsyncUpdateGameServerDeploymentRollout(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::UpdateGameServerDeploymentRolloutRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::
                 UpdateGameServerDeploymentRolloutRequest const& request) {
        return child_->AsyncUpdateGameServerDeploymentRollout(
            cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutResponse>
GameServerDeploymentsServiceLogging::PreviewGameServerDeploymentRollout(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::
                 PreviewGameServerDeploymentRolloutRequest const& request) {
        return child_->PreviewGameServerDeploymentRollout(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gaming::v1::FetchDeploymentStateResponse>
GameServerDeploymentsServiceLogging::FetchDeploymentState(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::FetchDeploymentStateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::FetchDeploymentStateRequest const&
                 request) {
        return child_->FetchDeploymentState(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> GameServerDeploymentsServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google
