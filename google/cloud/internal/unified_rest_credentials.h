// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_UNIFIED_REST_CREDENTIALS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_UNIFIED_REST_CREDENTIALS_H

#include "google/cloud/credentials.h"
#include "google/cloud/internal/oauth2_credentials.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Maps a GUAC `google::cloud::Credentials` type to its corresponding OAuth 2.0
 * `google::cloud::oauth2_internal::Credentials` type.
 */
std::shared_ptr<oauth2_internal::Credentials> MapCredentials(
    std::shared_ptr<google::cloud::Credentials> const& credentials);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_UNIFIED_REST_CREDENTIALS_H
