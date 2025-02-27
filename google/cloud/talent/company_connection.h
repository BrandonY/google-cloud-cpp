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
// source: google/cloud/talent/v4/company_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_COMPANY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_COMPANY_CONNECTION_H

#include "google/cloud/talent/company_connection_idempotency_policy.h"
#include "google/cloud/talent/internal/company_retry_traits.h"
#include "google/cloud/talent/internal/company_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CompanyServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        talent_internal::CompanyServiceRetryTraits>;

using CompanyServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        talent_internal::CompanyServiceRetryTraits>;

using CompanyServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        talent_internal::CompanyServiceRetryTraits>;

/**
 * The `CompanyServiceConnection` object for `CompanyServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CompanyServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CompanyServiceClient`.
 *
 * To create a concrete instance, see `MakeCompanyServiceConnection()`.
 *
 * For mocking, see `talent_mocks::MockCompanyServiceConnection`.
 */
class CompanyServiceConnection {
 public:
  virtual ~CompanyServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::talent::v4::Company> CreateCompany(
      google::cloud::talent::v4::CreateCompanyRequest const& request);

  virtual StatusOr<google::cloud::talent::v4::Company> GetCompany(
      google::cloud::talent::v4::GetCompanyRequest const& request);

  virtual StatusOr<google::cloud::talent::v4::Company> UpdateCompany(
      google::cloud::talent::v4::UpdateCompanyRequest const& request);

  virtual Status DeleteCompany(
      google::cloud::talent::v4::DeleteCompanyRequest const& request);

  virtual StreamRange<google::cloud::talent::v4::Company> ListCompanies(
      google::cloud::talent::v4::ListCompaniesRequest request);
};

/**
 * A factory function to construct an object of type `CompanyServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CompanyServiceClient,
 * and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `CompanyServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::talent::CompanyServicePolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `CompanyServiceConnection` created by
 * this function.
 */
std::shared_ptr<CompanyServiceConnection> MakeCompanyServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace talent_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<talent::CompanyServiceConnection> MakeCompanyServiceConnection(
    std::shared_ptr<CompanyServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_COMPANY_CONNECTION_H
