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
// source: google/cloud/billing/v1/cloud_billing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_CLOUD_BILLING_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_CLOUD_BILLING_CLIENT_H

#include "google/cloud/billing/cloud_billing_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/iam_updater.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Retrieves GCP Console billing accounts and associates them with projects.
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
class CloudBillingClient {
 public:
  explicit CloudBillingClient(
      std::shared_ptr<CloudBillingConnection> connection, Options opts = {});
  ~CloudBillingClient();

  //@{
  // @name Copy and move support
  CloudBillingClient(CloudBillingClient const&) = default;
  CloudBillingClient& operator=(CloudBillingClient const&) = default;
  CloudBillingClient(CloudBillingClient&&) = default;
  CloudBillingClient& operator=(CloudBillingClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(CloudBillingClient const& a,
                         CloudBillingClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CloudBillingClient const& a,
                         CloudBillingClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Gets information about a billing account. The current authenticated user
  /// must be a [viewer of the billing
  /// account](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param name  Required. The resource name of the billing account to
  /// retrieve. For example,
  ///  `billingAccounts/012345-567890-ABCDEF`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::BillingAccount,google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  /// [google.cloud.billing.v1.GetBillingAccountRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L242}
  /// [google.cloud.billing.v1.BillingAccount]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  StatusOr<google::cloud::billing::v1::BillingAccount> GetBillingAccount(
      std::string const& name, Options opts = {});

  ///
  /// Gets information about a billing account. The current authenticated user
  /// must be a [viewer of the billing
  /// account](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::v1::GetBillingAccountRequest,google/cloud/billing/v1/cloud_billing.proto#L242}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::BillingAccount,google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  /// [google.cloud.billing.v1.GetBillingAccountRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L242}
  /// [google.cloud.billing.v1.BillingAccount]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  StatusOr<google::cloud::billing::v1::BillingAccount> GetBillingAccount(
      google::cloud::billing::v1::GetBillingAccountRequest const& request,
      Options opts = {});

  ///
  /// Lists the billing accounts that the current authenticated user has
  /// permission to
  /// [view](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::BillingAccount,google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  /// [google.cloud.billing.v1.ListBillingAccountsRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L254}
  /// [google.cloud.billing.v1.BillingAccount]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  StreamRange<google::cloud::billing::v1::BillingAccount> ListBillingAccounts(
      Options opts = {});

  ///
  /// Lists the billing accounts that the current authenticated user has
  /// permission to
  /// [view](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::v1::ListBillingAccountsRequest,google/cloud/billing/v1/cloud_billing.proto#L254}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::BillingAccount,google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  /// [google.cloud.billing.v1.ListBillingAccountsRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L254}
  /// [google.cloud.billing.v1.BillingAccount]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  StreamRange<google::cloud::billing::v1::BillingAccount> ListBillingAccounts(
      google::cloud::billing::v1::ListBillingAccountsRequest request,
      Options opts = {});

  ///
  /// Updates a billing account's fields.
  /// Currently the only field that can be edited is `display_name`.
  /// The current authenticated user must have the `billing.accounts.update`
  /// IAM permission, which is typically given to the
  /// [administrator](https://cloud.google.com/billing/docs/how-to/billing-access)
  /// of the billing account.
  ///
  /// @param name  Required. The name of the billing account resource to be
  /// updated.
  /// @param account  Required. The billing account resource to replace the
  /// resource on the server.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::BillingAccount,google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  /// [google.cloud.billing.v1.UpdateBillingAccountRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L294}
  /// [google.cloud.billing.v1.BillingAccount]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  StatusOr<google::cloud::billing::v1::BillingAccount> UpdateBillingAccount(
      std::string const& name,
      google::cloud::billing::v1::BillingAccount const& account,
      Options opts = {});

  ///
  /// Updates a billing account's fields.
  /// Currently the only field that can be edited is `display_name`.
  /// The current authenticated user must have the `billing.accounts.update`
  /// IAM permission, which is typically given to the
  /// [administrator](https://cloud.google.com/billing/docs/how-to/billing-access)
  /// of the billing account.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::v1::UpdateBillingAccountRequest,google/cloud/billing/v1/cloud_billing.proto#L294}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::BillingAccount,google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  /// [google.cloud.billing.v1.UpdateBillingAccountRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L294}
  /// [google.cloud.billing.v1.BillingAccount]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  StatusOr<google::cloud::billing::v1::BillingAccount> UpdateBillingAccount(
      google::cloud::billing::v1::UpdateBillingAccountRequest const& request,
      Options opts = {});

  ///
  /// Creates a billing account.
  /// This method can only be used to create
  /// [billing subaccounts](https://cloud.google.com/billing/docs/concepts)
  /// by GCP resellers.
  /// When creating a subaccount, the current authenticated user must have the
  /// `billing.accounts.update` IAM permission on the master account, which is
  /// typically given to billing account
  /// [administrators](https://cloud.google.com/billing/docs/how-to/billing-access).
  /// This method will return an error if the master account has not been
  /// provisioned as a reseller account.
  ///
  /// @param billing_account  Required. The billing account resource to create.
  ///  Currently CreateBillingAccount only supports subaccount creation, so
  ///  any created billing accounts must be under a provided master billing
  ///  account.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::BillingAccount,google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  /// [google.cloud.billing.v1.CreateBillingAccountRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L285}
  /// [google.cloud.billing.v1.BillingAccount]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  StatusOr<google::cloud::billing::v1::BillingAccount> CreateBillingAccount(
      google::cloud::billing::v1::BillingAccount const& billing_account,
      Options opts = {});

  ///
  /// Creates a billing account.
  /// This method can only be used to create
  /// [billing subaccounts](https://cloud.google.com/billing/docs/concepts)
  /// by GCP resellers.
  /// When creating a subaccount, the current authenticated user must have the
  /// `billing.accounts.update` IAM permission on the master account, which is
  /// typically given to billing account
  /// [administrators](https://cloud.google.com/billing/docs/how-to/billing-access).
  /// This method will return an error if the master account has not been
  /// provisioned as a reseller account.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::v1::CreateBillingAccountRequest,google/cloud/billing/v1/cloud_billing.proto#L285}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::BillingAccount,google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  /// [google.cloud.billing.v1.CreateBillingAccountRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L285}
  /// [google.cloud.billing.v1.BillingAccount]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L189}
  ///
  StatusOr<google::cloud::billing::v1::BillingAccount> CreateBillingAccount(
      google::cloud::billing::v1::CreateBillingAccountRequest const& request,
      Options opts = {});

  ///
  /// Lists the projects associated with a billing account. The current
  /// authenticated user must have the `billing.resourceAssociations.list` IAM
  /// permission, which is often given to billing account
  /// [viewers](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param name  Required. The resource name of the billing account associated
  /// with the projects that
  ///  you want to list. For example, `billingAccounts/012345-567890-ABCDEF`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::ProjectBillingInfo,google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  /// [google.cloud.billing.v1.ListProjectBillingInfoRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L312}
  /// [google.cloud.billing.v1.ProjectBillingInfo]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  StreamRange<google::cloud::billing::v1::ProjectBillingInfo>
  ListProjectBillingInfo(std::string const& name, Options opts = {});

  ///
  /// Lists the projects associated with a billing account. The current
  /// authenticated user must have the `billing.resourceAssociations.list` IAM
  /// permission, which is often given to billing account
  /// [viewers](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::v1::ListProjectBillingInfoRequest,google/cloud/billing/v1/cloud_billing.proto#L312}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::ProjectBillingInfo,google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  /// [google.cloud.billing.v1.ListProjectBillingInfoRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L312}
  /// [google.cloud.billing.v1.ProjectBillingInfo]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  StreamRange<google::cloud::billing::v1::ProjectBillingInfo>
  ListProjectBillingInfo(
      google::cloud::billing::v1::ListProjectBillingInfoRequest request,
      Options opts = {});

  ///
  /// Gets the billing information for a project. The current authenticated user
  /// must have [permission to view the
  /// project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
  /// ).
  ///
  /// @param name  Required. The resource name of the project for which billing
  /// information is
  ///  retrieved. For example, `projects/tokyo-rain-123`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::ProjectBillingInfo,google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  /// [google.cloud.billing.v1.GetProjectBillingInfoRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L345}
  /// [google.cloud.billing.v1.ProjectBillingInfo]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  GetProjectBillingInfo(std::string const& name, Options opts = {});

  ///
  /// Gets the billing information for a project. The current authenticated user
  /// must have [permission to view the
  /// project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
  /// ).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::v1::GetProjectBillingInfoRequest,google/cloud/billing/v1/cloud_billing.proto#L345}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::ProjectBillingInfo,google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  /// [google.cloud.billing.v1.GetProjectBillingInfoRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L345}
  /// [google.cloud.billing.v1.ProjectBillingInfo]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  GetProjectBillingInfo(
      google::cloud::billing::v1::GetProjectBillingInfoRequest const& request,
      Options opts = {});

  ///
  /// Sets or updates the billing account associated with a project. You specify
  /// the new billing account by setting the `billing_account_name` in the
  /// `ProjectBillingInfo` resource to the resource name of a billing account.
  /// Associating a project with an open billing account enables billing on the
  /// project and allows charges for resource usage. If the project already had
  /// a billing account, this method changes the billing account used for
  /// resource usage charges.
  ///
  /// *Note:* Incurred charges that have not yet been reported in the
  /// transaction history of the GCP Console might be billed to the new billing
  /// account, even if the charge occurred before the new billing account was
  /// assigned to the project.
  ///
  /// The current authenticated user must have ownership privileges for both the
  /// [project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
  /// ) and the [billing
  /// account](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// You can disable billing on the project by setting the
  /// `billing_account_name` field to empty. This action disassociates the
  /// current billing account from the project. Any billable activity of your
  /// in-use services will stop, and your application could stop functioning as
  /// expected. Any unbilled charges to date will be billed to the previously
  /// associated account. The current authenticated user must be either an owner
  /// of the project or an owner of the billing account for the project.
  ///
  /// Note that associating a project with a *closed* billing account will have
  /// much the same effect as disabling billing on the project: any paid
  /// resources used by the project will be shut down. Thus, unless you wish to
  /// disable billing, you should always call this method with the name of an
  /// *open* billing account.
  ///
  /// @param name  Required. The resource name of the project associated with
  /// the billing information
  ///  that you want to update. For example, `projects/tokyo-rain-123`.
  /// @param project_billing_info  The new billing information for the project.
  /// Read-only fields are ignored;
  ///  thus, you can leave empty all fields except `billing_account_name`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::ProjectBillingInfo,google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  /// [google.cloud.billing.v1.UpdateProjectBillingInfoRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L352}
  /// [google.cloud.billing.v1.ProjectBillingInfo]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  UpdateProjectBillingInfo(std::string const& name,
                           google::cloud::billing::v1::ProjectBillingInfo const&
                               project_billing_info,
                           Options opts = {});

  ///
  /// Sets or updates the billing account associated with a project. You specify
  /// the new billing account by setting the `billing_account_name` in the
  /// `ProjectBillingInfo` resource to the resource name of a billing account.
  /// Associating a project with an open billing account enables billing on the
  /// project and allows charges for resource usage. If the project already had
  /// a billing account, this method changes the billing account used for
  /// resource usage charges.
  ///
  /// *Note:* Incurred charges that have not yet been reported in the
  /// transaction history of the GCP Console might be billed to the new billing
  /// account, even if the charge occurred before the new billing account was
  /// assigned to the project.
  ///
  /// The current authenticated user must have ownership privileges for both the
  /// [project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
  /// ) and the [billing
  /// account](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// You can disable billing on the project by setting the
  /// `billing_account_name` field to empty. This action disassociates the
  /// current billing account from the project. Any billable activity of your
  /// in-use services will stop, and your application could stop functioning as
  /// expected. Any unbilled charges to date will be billed to the previously
  /// associated account. The current authenticated user must be either an owner
  /// of the project or an owner of the billing account for the project.
  ///
  /// Note that associating a project with a *closed* billing account will have
  /// much the same effect as disabling billing on the project: any paid
  /// resources used by the project will be shut down. Thus, unless you wish to
  /// disable billing, you should always call this method with the name of an
  /// *open* billing account.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::v1::UpdateProjectBillingInfoRequest,google/cloud/billing/v1/cloud_billing.proto#L352}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::ProjectBillingInfo,google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  /// [google.cloud.billing.v1.UpdateProjectBillingInfoRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L352}
  /// [google.cloud.billing.v1.ProjectBillingInfo]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_billing.proto#L218}
  ///
  StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  UpdateProjectBillingInfo(
      google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&
          request,
      Options opts = {});

  ///
  /// Gets the access control policy for a billing account.
  /// The caller must have the `billing.accounts.getIamPolicy` permission on the
  /// account, which is often given to billing account
  /// [viewers](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being
  /// requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(std::string const& resource,
                                                 Options opts = {});

  ///
  /// Gets the access control policy for a billing account.
  /// The caller must have the `billing.accounts.getIamPolicy` permission on the
  /// account, which is often given to billing account
  /// [viewers](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Sets the access control policy for a billing account. Replaces any
  /// existing policy. The caller must have the `billing.accounts.setIamPolicy`
  /// permission on the account, which is often given to billing account
  /// [administrators](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being
  /// specified.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param policy  REQUIRED: The complete policy to be applied to the
  /// `resource`. The size of
  ///  the policy is limited to a few 10s of KB. An empty policy is a
  ///  valid policy but certain Cloud Platform services (such as Projects)
  ///  might reject them.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      std::string const& resource, google::iam::v1::Policy const& policy,
      Options opts = {});

  /**
   * Updates the IAM policy for @p resource using an optimistic concurrency
   * control loop.
   *
   * The loop fetches the current policy for @p resource, and passes it to @p
   * updater, which should return the new policy. This new policy should use the
   * current etag so that the read-modify-write cycle can detect races and rerun
   * the update when there is a mismatch. If the new policy does not have an
   * etag, the existing policy will be blindly overwritten. If @p updater does
   * not yield a policy, the control loop is terminated and kCancelled is
   * returned.
   *
   * @param resource  Required. The resource for which the policy is being
   * specified. See the operation documentation for the appropriate value for
   * this field.
   * @param updater  Required. Functor to map the current policy to a new one.
   * @param opts  Optional. Override the class-level options, such as retry and
   *    backoff policies.
   * @return google::iam::v1::Policy
   */
  StatusOr<google::iam::v1::Policy> SetIamPolicy(std::string const& resource,
                                                 IamUpdater const& updater,
                                                 Options opts = {});

  ///
  /// Sets the access control policy for a billing account. Replaces any
  /// existing policy. The caller must have the `billing.accounts.setIamPolicy`
  /// permission on the account, which is often given to billing account
  /// [administrators](https://cloud.google.com/billing/docs/how-to/billing-access).
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Tests the access control policy for a billing account. This method takes
  /// the resource and a set of permissions as input and returns the subset of
  /// the input permissions that the caller is allowed for that resource.
  ///
  /// @param resource  REQUIRED: The resource for which the policy detail is
  /// being requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param permissions  The set of permissions to check for the `resource`.
  /// Permissions with
  ///  wildcards (such as '*' or 'storage.*') are not allowed. For more
  ///  information see
  ///  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      std::string const& resource, std::vector<std::string> const& permissions,
      Options opts = {});

  ///
  /// Tests the access control policy for a billing account. This method takes
  /// the resource and a set of permissions as input and returns the subset of
  /// the input permissions that the caller is allowed for that resource.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<CloudBillingConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_CLOUD_BILLING_CLIENT_H
