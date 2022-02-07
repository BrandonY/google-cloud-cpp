// Copyright 2021 Google LLC
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
// source: google/cloud/bigquery/storage/v1/storage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGQUERY_READ_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGQUERY_READ_CLIENT_H

#include "google/cloud/bigquery/bigquery_read_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// BigQuery Read API.
///
/// The Read API can be used to read data from BigQuery.
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
class BigQueryReadClient {
 public:
  explicit BigQueryReadClient(
      std::shared_ptr<BigQueryReadConnection> connection, Options opts = {});
  ~BigQueryReadClient();

  //@{
  // @name Copy and move support
  BigQueryReadClient(BigQueryReadClient const&) = default;
  BigQueryReadClient& operator=(BigQueryReadClient const&) = default;
  BigQueryReadClient(BigQueryReadClient&&) = default;
  BigQueryReadClient& operator=(BigQueryReadClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(BigQueryReadClient const& a,
                         BigQueryReadClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(BigQueryReadClient const& a,
                         BigQueryReadClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Creates a new read session. A read session divides the contents of a
  /// BigQuery table into one or more streams, which can then be used to read
  /// data from the table. The read session also specifies properties of the
  /// data to be read, such as a list of columns or a push-down filter
  /// describing the rows to be returned.
  ///
  /// A particular row can be read by at most one stream. When the caller has
  /// reached the end of each stream in the session, then all the data in the
  /// table has been read.
  ///
  /// Data is assigned to each stream such that roughly the same number of
  /// rows can be read from each stream. Because the server-side unit for
  /// assigning data is collections of rows, the API does not guarantee that
  /// each stream will return the same number or rows. Additionally, the
  /// limits are enforced based on the number of pre-filtered rows, so some
  /// filters can lead to lopsided assignments.
  ///
  /// Read sessions automatically expire 6 hours after they are created and do
  /// not require manual clean-up by the caller.
  ///
  /// @param parent  Required. The request project that owns the session, in the
  /// form of
  ///  `projects/{project_id}`.
  /// @param read_session  Required. Session to be created.
  /// @param max_stream_count  Max initial number of streams. If unset or zero,
  /// the server will
  ///  provide a value of streams so as to produce reasonable throughput. Must
  ///  be non-negative. The number of streams may be lower than the requested
  ///  number, depending on the amount parallelism that is reasonable for the
  ///  table. Error will be returned if the max count is greater than the
  ///  current system max limit of 1,000. Streams must be read starting from
  ///  offset 0.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::ReadSession,google/cloud/bigquery/storage/v1/stream.proto#L47}
  ///
  /// [google.cloud.bigquery.storage.v1.CreateReadSessionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L229}
  /// [google.cloud.bigquery.storage.v1.ReadSession]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/stream.proto#L47}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::ReadSession> CreateReadSession(
      std::string const& parent,
      google::cloud::bigquery::storage::v1::ReadSession const& read_session,
      std::int32_t max_stream_count, Options opts = {});

  ///
  /// Creates a new read session. A read session divides the contents of a
  /// BigQuery table into one or more streams, which can then be used to read
  /// data from the table. The read session also specifies properties of the
  /// data to be read, such as a list of columns or a push-down filter
  /// describing the rows to be returned.
  ///
  /// A particular row can be read by at most one stream. When the caller has
  /// reached the end of each stream in the session, then all the data in the
  /// table has been read.
  ///
  /// Data is assigned to each stream such that roughly the same number of
  /// rows can be read from each stream. Because the server-side unit for
  /// assigning data is collections of rows, the API does not guarantee that
  /// each stream will return the same number or rows. Additionally, the
  /// limits are enforced based on the number of pre-filtered rows, so some
  /// filters can lead to lopsided assignments.
  ///
  /// Read sessions automatically expire 6 hours after they are created and do
  /// not require manual clean-up by the caller.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::storage::v1::CreateReadSessionRequest,google/cloud/bigquery/storage/v1/storage.proto#L229}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::ReadSession,google/cloud/bigquery/storage/v1/stream.proto#L47}
  ///
  /// [google.cloud.bigquery.storage.v1.CreateReadSessionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L229}
  /// [google.cloud.bigquery.storage.v1.ReadSession]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/stream.proto#L47}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::ReadSession> CreateReadSession(
      google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
          request,
      Options opts = {});

  ///
  /// Reads rows from the stream in the format prescribed by the ReadSession.
  /// Each response contains one or more table rows, up to a maximum of 100 MiB
  /// per response; read requests which attempt to read individual rows larger
  /// than 100 MiB will fail.
  ///
  /// Each request also returns a set of stream statistics reflecting the
  /// current state of the stream.
  ///
  /// @param read_stream  Required. Stream to read rows from.
  /// @param offset  The offset requested must be less than the last row read
  /// from Read.
  ///  Requesting a larger offset is undefined. If not specified, start reading
  ///  from offset zero.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::ReadRowsResponse,google/cloud/bigquery/storage/v1/storage.proto#L304}
  ///
  /// [google.cloud.bigquery.storage.v1.ReadRowsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L254}
  /// [google.cloud.bigquery.storage.v1.ReadRowsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L304}
  ///
  StreamRange<google::cloud::bigquery::storage::v1::ReadRowsResponse> ReadRows(
      std::string const& read_stream, std::int64_t offset, Options opts = {});

  ///
  /// Reads rows from the stream in the format prescribed by the ReadSession.
  /// Each response contains one or more table rows, up to a maximum of 100 MiB
  /// per response; read requests which attempt to read individual rows larger
  /// than 100 MiB will fail.
  ///
  /// Each request also returns a set of stream statistics reflecting the
  /// current state of the stream.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::storage::v1::ReadRowsRequest,google/cloud/bigquery/storage/v1/storage.proto#L254}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::ReadRowsResponse,google/cloud/bigquery/storage/v1/storage.proto#L304}
  ///
  /// [google.cloud.bigquery.storage.v1.ReadRowsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L254}
  /// [google.cloud.bigquery.storage.v1.ReadRowsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L304}
  ///
  StreamRange<google::cloud::bigquery::storage::v1::ReadRowsResponse> ReadRows(
      google::cloud::bigquery::storage::v1::ReadRowsRequest const& request,
      Options opts = {});

  ///
  /// Splits a given `ReadStream` into two `ReadStream` objects. These
  /// `ReadStream` objects are referred to as the primary and the residual
  /// streams of the split. The original `ReadStream` can still be read from in
  /// the same manner as before. Both of the returned `ReadStream` objects can
  /// also be read from, and the rows returned by both child streams will be
  /// the same as the rows read from the original stream.
  ///
  /// Moreover, the two child streams will be allocated back-to-back in the
  /// original `ReadStream`. Concretely, it is guaranteed that for streams
  /// original, primary, and residual, that original[0-j] = primary[0-j] and
  /// original[j-n] = residual[0-m] once the streams have been read to
  /// completion.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::storage::v1::SplitReadStreamRequest,google/cloud/bigquery/storage/v1/storage.proto#L339}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::SplitReadStreamResponse,google/cloud/bigquery/storage/v1/storage.proto#L359}
  ///
  /// [google.cloud.bigquery.storage.v1.SplitReadStreamRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L339}
  /// [google.cloud.bigquery.storage.v1.SplitReadStreamResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L359}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::SplitReadStreamResponse>
  SplitReadStream(
      google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<BigQueryReadConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGQUERY_READ_CLIENT_H
