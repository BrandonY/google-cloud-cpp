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
// source: google/cloud/redis/v1/cloud_redis.proto

#include "google/cloud/redis/internal/cloud_redis_option_defaults.h"
#include "google/cloud/redis/cloud_redis_connection.h"
#include "google/cloud/redis/cloud_redis_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace redis_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options CloudRedisDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CLOUD_REDIS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_CLOUD_REDIS_AUTHORITY", "redis.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<redis::CloudRedisRetryPolicyOption>()) {
    options.set<redis::CloudRedisRetryPolicyOption>(
        redis::CloudRedisLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<redis::CloudRedisBackoffPolicyOption>()) {
    options.set<redis::CloudRedisBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<redis::CloudRedisPollingPolicyOption>()) {
    options.set<redis::CloudRedisPollingPolicyOption>(
        GenericPollingPolicy<redis::CloudRedisRetryPolicyOption::Type,
                             redis::CloudRedisBackoffPolicyOption::Type>(
            options.get<redis::CloudRedisRetryPolicyOption>()->clone(),
            options.get<redis::CloudRedisBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options.has<redis::CloudRedisConnectionIdempotencyPolicyOption>()) {
    options.set<redis::CloudRedisConnectionIdempotencyPolicyOption>(
        redis::MakeDefaultCloudRedisConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_internal
}  // namespace cloud
}  // namespace google
