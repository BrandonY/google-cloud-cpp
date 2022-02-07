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
// source: google/cloud/gaming/v1/game_server_clusters_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_GAME_SERVER_CLUSTERS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_GAME_SERVER_CLUSTERS_CLIENT_H

#include "google/cloud/gameservices/game_server_clusters_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The game server cluster maps to Kubernetes clusters running Agones and is
/// used to manage fleets within clusters.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class GameServerClustersServiceClient {
 public:
  explicit GameServerClustersServiceClient(
      std::shared_ptr<GameServerClustersServiceConnection> connection,
      Options opts = {});
  ~GameServerClustersServiceClient();

  //@{
  // @name Copy and move support
  GameServerClustersServiceClient(GameServerClustersServiceClient const&) =
      default;
  GameServerClustersServiceClient& operator=(
      GameServerClustersServiceClient const&) = default;
  GameServerClustersServiceClient(GameServerClustersServiceClient&&) = default;
  GameServerClustersServiceClient& operator=(
      GameServerClustersServiceClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(GameServerClustersServiceClient const& a,
                         GameServerClustersServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GameServerClustersServiceClient const& a,
                         GameServerClustersServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists game server clusters in a given project and location.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  "projects/{project}/locations/{location}/realms/{realm}".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerCluster,google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  /// [google.cloud.gaming.v1.ListGameServerClustersRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L46}
  /// [google.cloud.gaming.v1.GameServerCluster]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  StreamRange<google::cloud::gaming::v1::GameServerCluster>
  ListGameServerClusters(std::string const& parent, Options opts = {});

  ///
  /// Lists game server clusters in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::ListGameServerClustersRequest,google/cloud/gaming/v1/game_server_clusters.proto#L46}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerCluster,google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  /// [google.cloud.gaming.v1.ListGameServerClustersRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L46}
  /// [google.cloud.gaming.v1.GameServerCluster]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  StreamRange<google::cloud::gaming::v1::GameServerCluster>
  ListGameServerClusters(
      google::cloud::gaming::v1::ListGameServerClustersRequest request,
      Options opts = {});

  ///
  /// Gets details of a single game server cluster.
  ///
  /// @param name  Required. The name of the game server cluster to retrieve, in
  /// the following form:
  ///  `projects/{project}/locations/{location}/realms/{realm-id}/gameServerClusters/{cluster}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerCluster,google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  /// [google.cloud.gaming.v1.GetGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L96}
  /// [google.cloud.gaming.v1.GameServerCluster]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  StatusOr<google::cloud::gaming::v1::GameServerCluster> GetGameServerCluster(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single game server cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::GetGameServerClusterRequest,google/cloud/gaming/v1/game_server_clusters.proto#L96}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerCluster,google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  /// [google.cloud.gaming.v1.GetGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L96}
  /// [google.cloud.gaming.v1.GameServerCluster]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  StatusOr<google::cloud::gaming::v1::GameServerCluster> GetGameServerCluster(
      google::cloud::gaming::v1::GetGameServerClusterRequest const& request,
      Options opts = {});

  ///
  /// Creates a new game server cluster in a given project and location.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  `projects/{project}/locations/{location}/realms/{realm-id}`.
  /// @param game_server_cluster  Required. The game server cluster resource to
  /// be created.
  /// @param game_server_cluster_id  Required. The ID of the game server cluster
  /// resource to be created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerCluster,google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  /// [google.cloud.gaming.v1.CreateGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L116}
  /// [google.cloud.gaming.v1.GameServerCluster]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>
  CreateGameServerCluster(
      std::string const& parent,
      google::cloud::gaming::v1::GameServerCluster const& game_server_cluster,
      std::string const& game_server_cluster_id, Options opts = {});

  ///
  /// Creates a new game server cluster in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::CreateGameServerClusterRequest,google/cloud/gaming/v1/game_server_clusters.proto#L116}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerCluster,google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  /// [google.cloud.gaming.v1.CreateGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L116}
  /// [google.cloud.gaming.v1.GameServerCluster]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>
  CreateGameServerCluster(
      google::cloud::gaming::v1::CreateGameServerClusterRequest const& request,
      Options opts = {});

  ///
  /// Previews creation of a new game server cluster in a given project and
  /// location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::PreviewCreateGameServerClusterRequest,google/cloud/gaming/v1/game_server_clusters.proto#L134}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::PreviewCreateGameServerClusterResponse,google/cloud/gaming/v1/game_server_clusters.proto#L163}
  ///
  /// [google.cloud.gaming.v1.PreviewCreateGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L134}
  /// [google.cloud.gaming.v1.PreviewCreateGameServerClusterResponse]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L163}
  ///
  StatusOr<google::cloud::gaming::v1::PreviewCreateGameServerClusterResponse>
  PreviewCreateGameServerCluster(
      google::cloud::gaming::v1::PreviewCreateGameServerClusterRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes a single game server cluster.
  ///
  /// @param name  Required. The name of the game server cluster to delete, in
  /// the following form:
  ///  `projects/{project}/locations/{location}/gameServerClusters/{cluster}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::OperationMetadata,google/cloud/gaming/v1/common.proto#L29}
  ///
  /// [google.cloud.gaming.v1.DeleteGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L176}
  /// [google.cloud.gaming.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L29}
  ///
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
  DeleteGameServerCluster(std::string const& name, Options opts = {});

  ///
  /// Deletes a single game server cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::DeleteGameServerClusterRequest,google/cloud/gaming/v1/game_server_clusters.proto#L176}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::OperationMetadata,google/cloud/gaming/v1/common.proto#L29}
  ///
  /// [google.cloud.gaming.v1.DeleteGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L176}
  /// [google.cloud.gaming.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L29}
  ///
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
  DeleteGameServerCluster(
      google::cloud::gaming::v1::DeleteGameServerClusterRequest const& request,
      Options opts = {});

  ///
  /// Previews deletion of a single game server cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::PreviewDeleteGameServerClusterRequest,google/cloud/gaming/v1/game_server_clusters.proto#L188}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::PreviewDeleteGameServerClusterResponse,google/cloud/gaming/v1/game_server_clusters.proto#L204}
  ///
  /// [google.cloud.gaming.v1.PreviewDeleteGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L188}
  /// [google.cloud.gaming.v1.PreviewDeleteGameServerClusterResponse]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L204}
  ///
  StatusOr<google::cloud::gaming::v1::PreviewDeleteGameServerClusterResponse>
  PreviewDeleteGameServerCluster(
      google::cloud::gaming::v1::PreviewDeleteGameServerClusterRequest const&
          request,
      Options opts = {});

  ///
  /// Patches a single game server cluster.
  ///
  /// @param game_server_cluster  Required. The game server cluster to be
  /// updated.
  ///  Only fields specified in update_mask are updated.
  /// @param update_mask  Required. Mask of fields to update. At least one path
  /// must be supplied in
  ///  this field. For the `FieldMask` definition, see
  ///  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerCluster,google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  /// [google.cloud.gaming.v1.UpdateGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L213}
  /// [google.cloud.gaming.v1.GameServerCluster]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>
  UpdateGameServerCluster(
      google::cloud::gaming::v1::GameServerCluster const& game_server_cluster,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Patches a single game server cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::UpdateGameServerClusterRequest,google/cloud/gaming/v1/game_server_clusters.proto#L213}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::GameServerCluster,google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  /// [google.cloud.gaming.v1.UpdateGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L213}
  /// [google.cloud.gaming.v1.GameServerCluster]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L276}
  ///
  future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>
  UpdateGameServerCluster(
      google::cloud::gaming::v1::UpdateGameServerClusterRequest const& request,
      Options opts = {});

  ///
  /// Previews updating a GameServerCluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::PreviewUpdateGameServerClusterRequest,google/cloud/gaming/v1/game_server_clusters.proto#L225}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::PreviewUpdateGameServerClusterResponse,google/cloud/gaming/v1/game_server_clusters.proto#L240}
  ///
  /// [google.cloud.gaming.v1.PreviewUpdateGameServerClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L225}
  /// [google.cloud.gaming.v1.PreviewUpdateGameServerClusterResponse]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/game_server_clusters.proto#L240}
  ///
  StatusOr<google::cloud::gaming::v1::PreviewUpdateGameServerClusterResponse>
  PreviewUpdateGameServerCluster(
      google::cloud::gaming::v1::PreviewUpdateGameServerClusterRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<GameServerClustersServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_GAME_SERVER_CLUSTERS_CLIENT_H
