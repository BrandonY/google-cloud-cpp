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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_GAME_SERVER_DEPLOYMENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_GAME_SERVER_DEPLOYMENTS_CONNECTION_H

#include "google/cloud/gameservices/game_server_deployments_connection_idempotency_policy.h"
#include "google/cloud/gameservices/internal/game_server_deployments_retry_traits.h"
#include "google/cloud/gameservices/internal/game_server_deployments_stub.h"
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
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using GameServerDeploymentsServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        gameservices_internal::GameServerDeploymentsServiceRetryTraits>;

using GameServerDeploymentsServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        gameservices_internal::GameServerDeploymentsServiceRetryTraits>;

using GameServerDeploymentsServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        gameservices_internal::GameServerDeploymentsServiceRetryTraits>;

/**
 * The `GameServerDeploymentsServiceConnection` object for
 * `GameServerDeploymentsServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `GameServerDeploymentsServiceClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `GameServerDeploymentsServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeGameServerDeploymentsServiceConnection()`.
 *
 * For mocking, see
 * `gameservices_mocks::MockGameServerDeploymentsServiceConnection`.
 */
class GameServerDeploymentsServiceConnection {
 public:
  virtual ~GameServerDeploymentsServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::gaming::v1::GameServerDeployment>
  ListGameServerDeployments(
      google::cloud::gaming::v1::ListGameServerDeploymentsRequest request);

  virtual StatusOr<google::cloud::gaming::v1::GameServerDeployment>
  GetGameServerDeployment(
      google::cloud::gaming::v1::GetGameServerDeploymentRequest const& request);

  virtual future<StatusOr<google::cloud::gaming::v1::GameServerDeployment>>
  CreateGameServerDeployment(
      google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&
          request);

  virtual future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
  DeleteGameServerDeployment(
      google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&
          request);

  virtual future<StatusOr<google::cloud::gaming::v1::GameServerDeployment>>
  UpdateGameServerDeployment(
      google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&
          request);

  virtual StatusOr<google::cloud::gaming::v1::GameServerDeploymentRollout>
  GetGameServerDeploymentRollout(
      google::cloud::gaming::v1::GetGameServerDeploymentRolloutRequest const&
          request);

  virtual future<StatusOr<google::cloud::gaming::v1::GameServerDeployment>>
  UpdateGameServerDeploymentRollout(
      google::cloud::gaming::v1::UpdateGameServerDeploymentRolloutRequest const&
          request);

  virtual StatusOr<
      google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutResponse>
  PreviewGameServerDeploymentRollout(
      google::cloud::gaming::v1::
          PreviewGameServerDeploymentRolloutRequest const& request);

  virtual StatusOr<google::cloud::gaming::v1::FetchDeploymentStateResponse>
  FetchDeploymentState(
      google::cloud::gaming::v1::FetchDeploymentStateRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `GameServerDeploymentsServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * GameServerDeploymentsServiceClient, and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `GameServerDeploymentsServiceConnection`. Expected options are any
 * of the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::gameservices::GameServerDeploymentsServicePolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the
 * `GameServerDeploymentsServiceConnection` created by this function.
 */
std::shared_ptr<GameServerDeploymentsServiceConnection>
MakeGameServerDeploymentsServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<gameservices::GameServerDeploymentsServiceConnection>
MakeGameServerDeploymentsServiceConnection(
    std::shared_ptr<GameServerDeploymentsServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_GAME_SERVER_DEPLOYMENTS_CONNECTION_H
