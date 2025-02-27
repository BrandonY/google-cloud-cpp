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
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/cloud_channel_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace channel {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudChannelServiceConnectionIdempotencyPolicy::
    ~CloudChannelServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultCloudChannelServiceConnectionIdempotencyPolicy
    : public CloudChannelServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultCloudChannelServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<CloudChannelServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultCloudChannelServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency ListCustomers(
      google::cloud::channel::v1::ListCustomersRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetCustomer(
      google::cloud::channel::v1::GetCustomerRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CheckCloudIdentityAccountsExist(
      google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateCustomer(
      google::cloud::channel::v1::CreateCustomerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateCustomer(
      google::cloud::channel::v1::UpdateCustomerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteCustomer(
      google::cloud::channel::v1::DeleteCustomerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ImportCustomer(
      google::cloud::channel::v1::ImportCustomerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ProvisionCloudIdentity(
      google::cloud::channel::v1::ProvisionCloudIdentityRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListEntitlements(
      google::cloud::channel::v1::ListEntitlementsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListTransferableSkus(
      google::cloud::channel::v1::ListTransferableSkusRequest) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListTransferableOffers(
      google::cloud::channel::v1::ListTransferableOffersRequest) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetEntitlement(
      google::cloud::channel::v1::GetEntitlementRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateEntitlement(
      google::cloud::channel::v1::CreateEntitlementRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ChangeParameters(
      google::cloud::channel::v1::ChangeParametersRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ChangeRenewalSettings(
      google::cloud::channel::v1::ChangeRenewalSettingsRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ChangeOffer(
      google::cloud::channel::v1::ChangeOfferRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency StartPaidService(
      google::cloud::channel::v1::StartPaidServiceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SuspendEntitlement(
      google::cloud::channel::v1::SuspendEntitlementRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CancelEntitlement(
      google::cloud::channel::v1::CancelEntitlementRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ActivateEntitlement(
      google::cloud::channel::v1::ActivateEntitlementRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency TransferEntitlements(
      google::cloud::channel::v1::TransferEntitlementsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency TransferEntitlementsToGoogle(
      google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListChannelPartnerLinks(
      google::cloud::channel::v1::ListChannelPartnerLinksRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetChannelPartnerLink(
      google::cloud::channel::v1::GetChannelPartnerLinkRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateChannelPartnerLink(
      google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateChannelPartnerLink(
      google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetCustomerRepricingConfig(
      google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListCustomerRepricingConfigs(
      google::cloud::channel::v1::ListCustomerRepricingConfigsRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateCustomerRepricingConfig(
      google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateCustomerRepricingConfig(
      google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteCustomerRepricingConfig(
      google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          GetChannelPartnerRepricingConfigRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListChannelPartnerRepricingConfigs(
      google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          CreateChannelPartnerRepricingConfigRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          UpdateChannelPartnerRepricingConfigRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          DeleteChannelPartnerRepricingConfigRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency LookupOffer(
      google::cloud::channel::v1::LookupOfferRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListProducts(
      google::cloud::channel::v1::ListProductsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListSkus(google::cloud::channel::v1::ListSkusRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListOffers(
      google::cloud::channel::v1::ListOffersRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListPurchasableSkus(
      google::cloud::channel::v1::ListPurchasableSkusRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListPurchasableOffers(
      google::cloud::channel::v1::ListPurchasableOffersRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency RegisterSubscriber(
      google::cloud::channel::v1::RegisterSubscriberRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UnregisterSubscriber(
      google::cloud::channel::v1::UnregisterSubscriberRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListSubscribers(
      google::cloud::channel::v1::ListSubscribersRequest) override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<CloudChannelServiceConnectionIdempotencyPolicy>
MakeDefaultCloudChannelServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultCloudChannelServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel
}  // namespace cloud
}  // namespace google
