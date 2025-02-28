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
// source: google/cloud/dataplex/v1/service.proto

#include "google/cloud/dataplex/internal/dataplex_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataplex/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataplexServiceStub::~DataplexServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncCreateLake(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateLakeRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::CreateLakeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateLake(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncUpdateLake(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateLakeRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::UpdateLakeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateLake(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncDeleteLake(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteLakeRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::DeleteLakeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteLake(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dataplex::v1::ListLakesResponse>
DefaultDataplexServiceStub::ListLakes(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListLakesRequest const& request) {
  google::cloud::dataplex::v1::ListLakesResponse response;
  auto status = grpc_stub_->ListLakes(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Lake> DefaultDataplexServiceStub::GetLake(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::GetLakeRequest const& request) {
  google::cloud::dataplex::v1::Lake response;
  auto status = grpc_stub_->GetLake(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DefaultDataplexServiceStub::ListLakeActions(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListLakeActionsRequest const& request) {
  google::cloud::dataplex::v1::ListActionsResponse response;
  auto status =
      grpc_stub_->ListLakeActions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncCreateZone(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateZoneRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::CreateZoneRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateZone(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncUpdateZone(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateZoneRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::UpdateZoneRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateZone(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncDeleteZone(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteZoneRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::DeleteZoneRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteZone(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dataplex::v1::ListZonesResponse>
DefaultDataplexServiceStub::ListZones(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListZonesRequest const& request) {
  google::cloud::dataplex::v1::ListZonesResponse response;
  auto status = grpc_stub_->ListZones(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Zone> DefaultDataplexServiceStub::GetZone(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::GetZoneRequest const& request) {
  google::cloud::dataplex::v1::Zone response;
  auto status = grpc_stub_->GetZone(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DefaultDataplexServiceStub::ListZoneActions(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListZoneActionsRequest const& request) {
  google::cloud::dataplex::v1::ListActionsResponse response;
  auto status =
      grpc_stub_->ListZoneActions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateAssetRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::CreateAssetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAsset(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncUpdateAsset(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateAssetRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::UpdateAssetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAsset(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteAssetRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::DeleteAssetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAsset(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dataplex::v1::ListAssetsResponse>
DefaultDataplexServiceStub::ListAssets(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListAssetsRequest const& request) {
  google::cloud::dataplex::v1::ListAssetsResponse response;
  auto status = grpc_stub_->ListAssets(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Asset>
DefaultDataplexServiceStub::GetAsset(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::GetAssetRequest const& request) {
  google::cloud::dataplex::v1::Asset response;
  auto status = grpc_stub_->GetAsset(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DefaultDataplexServiceStub::ListAssetActions(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListAssetActionsRequest const& request) {
  google::cloud::dataplex::v1::ListActionsResponse response;
  auto status =
      grpc_stub_->ListAssetActions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncCreateTask(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateTaskRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::CreateTaskRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateTask(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncUpdateTask(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateTaskRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::UpdateTaskRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateTask(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncDeleteTask(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteTaskRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::DeleteTaskRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTask(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dataplex::v1::ListTasksResponse>
DefaultDataplexServiceStub::ListTasks(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListTasksRequest const& request) {
  google::cloud::dataplex::v1::ListTasksResponse response;
  auto status = grpc_stub_->ListTasks(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Task> DefaultDataplexServiceStub::GetTask(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::GetTaskRequest const& request) {
  google::cloud::dataplex::v1::Task response;
  auto status = grpc_stub_->GetTask(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::ListJobsResponse>
DefaultDataplexServiceStub::ListJobs(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListJobsRequest const& request) {
  google::cloud::dataplex::v1::ListJobsResponse response;
  auto status = grpc_stub_->ListJobs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Job> DefaultDataplexServiceStub::GetJob(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::GetJobRequest const& request) {
  google::cloud::dataplex::v1::Job response;
  auto status = grpc_stub_->GetJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataplexServiceStub::CancelJob(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::CancelJobRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->CancelJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateEnvironmentRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](
          grpc::ClientContext* context,
          google::cloud::dataplex::v1::CreateEnvironmentRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateEnvironment(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](
          grpc::ClientContext* context,
          google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateEnvironment(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](
          grpc::ClientContext* context,
          google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteEnvironment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dataplex::v1::ListEnvironmentsResponse>
DefaultDataplexServiceStub::ListEnvironments(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListEnvironmentsRequest const& request) {
  google::cloud::dataplex::v1::ListEnvironmentsResponse response;
  auto status =
      grpc_stub_->ListEnvironments(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Environment>
DefaultDataplexServiceStub::GetEnvironment(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::GetEnvironmentRequest const& request) {
  google::cloud::dataplex::v1::Environment response;
  auto status = grpc_stub_->GetEnvironment(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::ListSessionsResponse>
DefaultDataplexServiceStub::ListSessions(
    grpc::ClientContext& client_context,
    google::cloud::dataplex::v1::ListSessionsRequest const& request) {
  google::cloud::dataplex::v1::ListSessionsResponse response;
  auto status = grpc_stub_->ListSessions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataplexServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultDataplexServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return cq
      .MakeUnaryRpc(
          [this](grpc::ClientContext* context,
                 google::longrunning::CancelOperationRequest const& request,
                 grpc::CompletionQueue* cq) {
            return operations_->AsyncCancelOperation(context, request, cq);
          },
          request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_internal
}  // namespace cloud
}  // namespace google
