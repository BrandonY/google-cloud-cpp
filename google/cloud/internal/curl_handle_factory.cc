// Copyright 2018 Google LLC
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

#include "google/cloud/internal/curl_handle_factory.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/curl_options.h"
#include <algorithm>
#include <iterator>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

void CurlHandleFactory::SetCurlStringOption(CURL* handle, CURLoption option_tag,
                                            char const* value) {
  curl_easy_setopt(handle, option_tag, value);
}

std::shared_ptr<CurlHandleFactory> GetDefaultCurlHandleFactory() {
  static auto const* const kFactory =
      new auto(std::make_shared<DefaultCurlHandleFactory>());
  return *kFactory;
}

std::shared_ptr<CurlHandleFactory> GetDefaultCurlHandleFactory(
    Options const& options) {
  if (!options.get<CARootsFilePathOption>().empty()) {
    return std::make_shared<DefaultCurlHandleFactory>(options);
  }
  return GetDefaultCurlHandleFactory();
}

DefaultCurlHandleFactory::DefaultCurlHandleFactory(Options const& o) {
  if (o.has<CARootsFilePathOption>()) cainfo_ = o.get<CARootsFilePathOption>();
  if (o.has<CAPathOption>()) capath_ = o.get<CAPathOption>();
}

CurlPtr DefaultCurlHandleFactory::CreateHandle() {
  auto curl = MakeCurlPtr();
  SetCurlOptions(curl.get());
  return curl;
}

void DefaultCurlHandleFactory::CleanupHandle(CurlPtr h) {
  if (!h) return;
  char* ip;
  auto res = curl_easy_getinfo(h.get(), CURLINFO_LOCAL_IP, &ip);
  if (res == CURLE_OK && ip != nullptr) {
    std::lock_guard<std::mutex> lk(mu_);
    last_client_ip_address_ = ip;
  }
  h.reset();
}

CurlMulti DefaultCurlHandleFactory::CreateMultiHandle() {
  return CurlMulti(curl_multi_init(), &curl_multi_cleanup);
}

void DefaultCurlHandleFactory::CleanupMultiHandle(CurlMulti m) { m.reset(); }

void DefaultCurlHandleFactory::SetCurlOptions(CURL* handle) {
  if (cainfo_) {
    SetCurlStringOption(handle, CURLOPT_CAINFO, cainfo_->c_str());
  }
  if (capath_) {
    SetCurlStringOption(handle, CURLOPT_CAPATH, capath_->c_str());
  }
}

PooledCurlHandleFactory::PooledCurlHandleFactory(std::size_t maximum_size,
                                                 Options const& o)
    : maximum_size_(maximum_size), cainfo_(CAInfo(o)), capath_(CAPath(o)) {}

PooledCurlHandleFactory::~PooledCurlHandleFactory() = default;

CurlPtr PooledCurlHandleFactory::CreateHandle() {
  std::unique_lock<std::mutex> lk(handles_mu_);
  if (!handles_.empty()) {
    auto handle = std::move(handles_.back());
    handles_.pop_back();
    lk.unlock();
    // Clear all the options in the handle, so we do not leak its previous
    // state.
    (void)curl_easy_reset(handle.get());
    SetCurlOptions(handle.get());
    return handle;
  }
  lk.unlock();
  auto curl = MakeCurlPtr();
  SetCurlOptions(curl.get());
  return curl;
}

void PooledCurlHandleFactory::CleanupHandle(CurlPtr h) {
  if (!h) return;
  // Querying the local IP can be expensive, as it may require a DNS lookup.
  // We should not perform such operations while holding a lock.
  char* ip;
  auto res = curl_easy_getinfo(h.get(), CURLINFO_LOCAL_IP, &ip);
  if (res == CURLE_OK && ip != nullptr) {
    std::unique_lock<std::mutex> lk(last_client_ip_address_mu_);
    last_client_ip_address_ = ip;
  }
  // Use a temporary data structure to release any excess handles *after* the
  // lock is released.
  std::vector<CurlPtr> released;
  std::unique_lock<std::mutex> lk(handles_mu_);
  // If needed, release several handles to make room, amortizing the cost when
  // many threads are releasing handles at the same time.
  if (handles_.size() >= maximum_size_) {
    auto const keep_count = maximum_size_ / 2;
    auto const release_count = handles_.size() - keep_count;
    released.reserve(release_count);
    auto const end = std::next(handles_.begin(), release_count);
    std::move(handles_.begin(), end, std::back_inserter(released));
    handles_.erase(handles_.begin(), end);
  }
  handles_.push_back(std::move(h));
}

CurlMulti PooledCurlHandleFactory::CreateMultiHandle() {
  std::unique_lock<std::mutex> lk(multi_handles_mu_);
  if (!multi_handles_.empty()) {
    auto m = std::move(multi_handles_.back());
    multi_handles_.pop_back();
    lk.unlock();
    return m;
  }
  lk.unlock();
  return CurlMulti(curl_multi_init(), &curl_multi_cleanup);
}

void PooledCurlHandleFactory::CleanupMultiHandle(CurlMulti m) {
  if (!m) return;
  // Use a temporary data structure to release any excess handles *after* the
  // lock is released.
  std::vector<CurlMulti> released;
  std::unique_lock<std::mutex> lk(multi_handles_mu_);
  // If needed, release several handles to make room, amortizing the cost when
  // many threads are releasing handles at the same time.
  if (multi_handles_.size() >= maximum_size_) {
    auto const keep_count = maximum_size_ / 2;
    auto const release_count = multi_handles_.size() - keep_count;
    released.reserve(release_count);
    auto const end = std::next(multi_handles_.begin(), release_count);
    std::move(multi_handles_.begin(), end, std::back_inserter(released));
    multi_handles_.erase(multi_handles_.begin(), end);
  }
  multi_handles_.push_back(std::move(m));
}

void PooledCurlHandleFactory::SetCurlOptions(CURL* handle) {
  if (cainfo_) {
    SetCurlStringOption(handle, CURLOPT_CAINFO, cainfo_->c_str());
  }
  if (capath_) {
    SetCurlStringOption(handle, CURLOPT_CAPATH, capath_->c_str());
  }
}

absl::optional<std::string> PooledCurlHandleFactory::CAInfo(Options const& o) {
  if (!o.has<CARootsFilePathOption>()) return absl::nullopt;
  return o.get<CARootsFilePathOption>();
}

absl::optional<std::string> PooledCurlHandleFactory::CAPath(Options const& o) {
  if (!o.has<CAPathOption>()) return absl::nullopt;
  return o.get<CAPathOption>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google
