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
// source: google/cloud/workflows/executions/v1/executions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_CLIENT_H

#include "google/cloud/workflows/executions_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace workflows {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Executions is used to start and manage running instances of
/// [Workflows][google.cloud.workflows.v1.Workflow] called executions.
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
class ExecutionsClient {
 public:
  explicit ExecutionsClient(std::shared_ptr<ExecutionsConnection> connection,
                            Options opts = {});
  ~ExecutionsClient();

  //@{
  // @name Copy and move support
  ExecutionsClient(ExecutionsClient const&) = default;
  ExecutionsClient& operator=(ExecutionsClient const&) = default;
  ExecutionsClient(ExecutionsClient&&) = default;
  ExecutionsClient& operator=(ExecutionsClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(ExecutionsClient const& a, ExecutionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ExecutionsClient const& a, ExecutionsClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Returns a list of executions which belong to the workflow with
  /// the given name. The method returns executions of all workflow
  /// revisions. Returned executions are ordered by their start time (newest
  /// first).
  ///
  /// @param parent  Required. Name of the workflow for which the executions
  /// should be listed.
  ///  Format: projects/{project}/locations/{location}/workflows/{workflow}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::workflows::executions::v1::Execution,google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  /// [google.cloud.workflows.executions.v1.ListExecutionsRequest]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L205}
  /// [google.cloud.workflows.executions.v1.Execution]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  StreamRange<google::cloud::workflows::executions::v1::Execution>
  ListExecutions(std::string const& parent, Options opts = {});

  ///
  /// Returns a list of executions which belong to the workflow with
  /// the given name. The method returns executions of all workflow
  /// revisions. Returned executions are ordered by their start time (newest
  /// first).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::workflows::executions::v1::ListExecutionsRequest,google/cloud/workflows/executions/v1/executions.proto#L205}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::workflows::executions::v1::Execution,google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  /// [google.cloud.workflows.executions.v1.ListExecutionsRequest]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L205}
  /// [google.cloud.workflows.executions.v1.Execution]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  StreamRange<google::cloud::workflows::executions::v1::Execution>
  ListExecutions(
      google::cloud::workflows::executions::v1::ListExecutionsRequest request,
      Options opts = {});

  ///
  /// Creates a new execution using the latest revision of the given workflow.
  ///
  /// @param parent  Required. Name of the workflow for which an execution
  /// should be created.
  ///  Format: projects/{project}/locations/{location}/workflows/{workflow}
  ///  The latest revision of the workflow will be used.
  /// @param execution  Required. Execution to be created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::workflows::executions::v1::Execution,google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  /// [google.cloud.workflows.executions.v1.CreateExecutionRequest]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L249}
  /// [google.cloud.workflows.executions.v1.Execution]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  StatusOr<google::cloud::workflows::executions::v1::Execution> CreateExecution(
      std::string const& parent,
      google::cloud::workflows::executions::v1::Execution const& execution,
      Options opts = {});

  ///
  /// Creates a new execution using the latest revision of the given workflow.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::workflows::executions::v1::CreateExecutionRequest,google/cloud/workflows/executions/v1/executions.proto#L249}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::workflows::executions::v1::Execution,google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  /// [google.cloud.workflows.executions.v1.CreateExecutionRequest]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L249}
  /// [google.cloud.workflows.executions.v1.Execution]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  StatusOr<google::cloud::workflows::executions::v1::Execution> CreateExecution(
      google::cloud::workflows::executions::v1::CreateExecutionRequest const&
          request,
      Options opts = {});

  ///
  /// Returns an execution of the given name.
  ///
  /// @param name  Required. Name of the execution to be retrieved.
  ///  Format:
  ///  projects/{project}/locations/{location}/workflows/{workflow}/executions/{execution}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::workflows::executions::v1::Execution,google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  /// [google.cloud.workflows.executions.v1.GetExecutionRequest]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L267}
  /// [google.cloud.workflows.executions.v1.Execution]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  StatusOr<google::cloud::workflows::executions::v1::Execution> GetExecution(
      std::string const& name, Options opts = {});

  ///
  /// Returns an execution of the given name.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::workflows::executions::v1::GetExecutionRequest,google/cloud/workflows/executions/v1/executions.proto#L267}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::workflows::executions::v1::Execution,google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  /// [google.cloud.workflows.executions.v1.GetExecutionRequest]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L267}
  /// [google.cloud.workflows.executions.v1.Execution]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  StatusOr<google::cloud::workflows::executions::v1::Execution> GetExecution(
      google::cloud::workflows::executions::v1::GetExecutionRequest const&
          request,
      Options opts = {});

  ///
  /// Cancels an execution of the given name.
  ///
  /// @param name  Required. Name of the execution to be cancelled.
  ///  Format:
  ///  projects/{project}/locations/{location}/workflows/{workflow}/executions/{execution}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::workflows::executions::v1::Execution,google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  /// [google.cloud.workflows.executions.v1.CancelExecutionRequest]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L286}
  /// [google.cloud.workflows.executions.v1.Execution]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  StatusOr<google::cloud::workflows::executions::v1::Execution> CancelExecution(
      std::string const& name, Options opts = {});

  ///
  /// Cancels an execution of the given name.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::workflows::executions::v1::CancelExecutionRequest,google/cloud/workflows/executions/v1/executions.proto#L286}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::workflows::executions::v1::Execution,google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  /// [google.cloud.workflows.executions.v1.CancelExecutionRequest]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L286}
  /// [google.cloud.workflows.executions.v1.Execution]:
  /// @googleapis_reference_link{google/cloud/workflows/executions/v1/executions.proto#L80}
  ///
  StatusOr<google::cloud::workflows::executions::v1::Execution> CancelExecution(
      google::cloud::workflows::executions::v1::CancelExecutionRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<ExecutionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_CLIENT_H
