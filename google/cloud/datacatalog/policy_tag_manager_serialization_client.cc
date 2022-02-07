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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#include "google/cloud/datacatalog/policy_tag_manager_serialization_client.h"
#include "google/cloud/datacatalog/internal/policy_tag_manager_serialization_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PolicyTagManagerSerializationClient::PolicyTagManagerSerializationClient(
    std::shared_ptr<PolicyTagManagerSerializationConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts),
          datacatalog_internal::PolicyTagManagerSerializationDefaultOptions(
              connection_->options()))) {}
PolicyTagManagerSerializationClient::~PolicyTagManagerSerializationClient() =
    default;

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerSerializationClient::ReplaceTaxonomy(
    google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReplaceTaxonomy(request);
}

StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
PolicyTagManagerSerializationClient::ImportTaxonomies(
    google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportTaxonomies(request);
}

StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
PolicyTagManagerSerializationClient::ExportTaxonomies(
    google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportTaxonomies(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog
}  // namespace cloud
}  // namespace google
