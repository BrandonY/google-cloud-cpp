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
// source: google/monitoring/v3/metric_service.proto

#include "google/cloud/monitoring/metric_client.h"
#include "google/cloud/monitoring/internal/metric_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetricServiceClient::MetricServiceClient(
    std::shared_ptr<MetricServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts), monitoring_internal::MetricServiceDefaultOptions(
                               connection_->options()))) {}
MetricServiceClient::~MetricServiceClient() = default;

StreamRange<google::api::MonitoredResourceDescriptor>
MetricServiceClient::ListMonitoredResourceDescriptors(std::string const& name,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::ListMonitoredResourceDescriptorsRequest request;
  request.set_name(name);
  return connection_->ListMonitoredResourceDescriptors(request);
}

StreamRange<google::api::MonitoredResourceDescriptor>
MetricServiceClient::ListMonitoredResourceDescriptors(
    google::monitoring::v3::ListMonitoredResourceDescriptorsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMonitoredResourceDescriptors(std::move(request));
}

StatusOr<google::api::MonitoredResourceDescriptor>
MetricServiceClient::GetMonitoredResourceDescriptor(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::GetMonitoredResourceDescriptorRequest request;
  request.set_name(name);
  return connection_->GetMonitoredResourceDescriptor(request);
}

StatusOr<google::api::MonitoredResourceDescriptor>
MetricServiceClient::GetMonitoredResourceDescriptor(
    google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetMonitoredResourceDescriptor(request);
}

StreamRange<google::api::MetricDescriptor>
MetricServiceClient::ListMetricDescriptors(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::ListMetricDescriptorsRequest request;
  request.set_name(name);
  return connection_->ListMetricDescriptors(request);
}

StreamRange<google::api::MetricDescriptor>
MetricServiceClient::ListMetricDescriptors(
    google::monitoring::v3::ListMetricDescriptorsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMetricDescriptors(std::move(request));
}

StatusOr<google::api::MetricDescriptor>
MetricServiceClient::GetMetricDescriptor(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::GetMetricDescriptorRequest request;
  request.set_name(name);
  return connection_->GetMetricDescriptor(request);
}

StatusOr<google::api::MetricDescriptor>
MetricServiceClient::GetMetricDescriptor(
    google::monitoring::v3::GetMetricDescriptorRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetMetricDescriptor(request);
}

StatusOr<google::api::MetricDescriptor>
MetricServiceClient::CreateMetricDescriptor(
    std::string const& name,
    google::api::MetricDescriptor const& metric_descriptor, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::CreateMetricDescriptorRequest request;
  request.set_name(name);
  *request.mutable_metric_descriptor() = metric_descriptor;
  return connection_->CreateMetricDescriptor(request);
}

StatusOr<google::api::MetricDescriptor>
MetricServiceClient::CreateMetricDescriptor(
    google::monitoring::v3::CreateMetricDescriptorRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMetricDescriptor(request);
}

Status MetricServiceClient::DeleteMetricDescriptor(std::string const& name,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::DeleteMetricDescriptorRequest request;
  request.set_name(name);
  return connection_->DeleteMetricDescriptor(request);
}

Status MetricServiceClient::DeleteMetricDescriptor(
    google::monitoring::v3::DeleteMetricDescriptorRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteMetricDescriptor(request);
}

StreamRange<google::monitoring::v3::TimeSeries>
MetricServiceClient::ListTimeSeries(
    std::string const& name, std::string const& filter,
    google::monitoring::v3::TimeInterval const& interval,
    google::monitoring::v3::ListTimeSeriesRequest::TimeSeriesView view,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::ListTimeSeriesRequest request;
  request.set_name(name);
  request.set_filter(filter);
  *request.mutable_interval() = interval;
  request.set_view(view);
  return connection_->ListTimeSeries(request);
}

StreamRange<google::monitoring::v3::TimeSeries>
MetricServiceClient::ListTimeSeries(
    google::monitoring::v3::ListTimeSeriesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTimeSeries(std::move(request));
}

Status MetricServiceClient::CreateTimeSeries(
    std::string const& name,
    std::vector<google::monitoring::v3::TimeSeries> const& time_series,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::CreateTimeSeriesRequest request;
  request.set_name(name);
  *request.mutable_time_series() = {time_series.begin(), time_series.end()};
  return connection_->CreateTimeSeries(request);
}

Status MetricServiceClient::CreateTimeSeries(
    google::monitoring::v3::CreateTimeSeriesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTimeSeries(request);
}

Status MetricServiceClient::CreateServiceTimeSeries(
    std::string const& name,
    std::vector<google::monitoring::v3::TimeSeries> const& time_series,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::CreateTimeSeriesRequest request;
  request.set_name(name);
  *request.mutable_time_series() = {time_series.begin(), time_series.end()};
  return connection_->CreateServiceTimeSeries(request);
}

Status MetricServiceClient::CreateServiceTimeSeries(
    google::monitoring::v3::CreateTimeSeriesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateServiceTimeSeries(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google
