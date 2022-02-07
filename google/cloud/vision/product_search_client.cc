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
// source: google/cloud/vision/v1/product_search_service.proto

#include "google/cloud/vision/product_search_client.h"
#include "google/cloud/vision/internal/product_search_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace vision {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductSearchClient::ProductSearchClient(
    std::shared_ptr<ProductSearchConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts), vision_internal::ProductSearchDefaultOptions(
                               connection_->options()))) {}
ProductSearchClient::~ProductSearchClient() = default;

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchClient::CreateProductSet(
    std::string const& parent,
    google::cloud::vision::v1::ProductSet const& product_set,
    std::string const& product_set_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::CreateProductSetRequest request;
  request.set_parent(parent);
  *request.mutable_product_set() = product_set;
  request.set_product_set_id(product_set_id);
  return connection_->CreateProductSet(request);
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchClient::CreateProductSet(
    google::cloud::vision::v1::CreateProductSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateProductSet(request);
}

StreamRange<google::cloud::vision::v1::ProductSet>
ProductSearchClient::ListProductSets(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::ListProductSetsRequest request;
  request.set_parent(parent);
  return connection_->ListProductSets(request);
}

StreamRange<google::cloud::vision::v1::ProductSet>
ProductSearchClient::ListProductSets(
    google::cloud::vision::v1::ListProductSetsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListProductSets(std::move(request));
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchClient::GetProductSet(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::GetProductSetRequest request;
  request.set_name(name);
  return connection_->GetProductSet(request);
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchClient::GetProductSet(
    google::cloud::vision::v1::GetProductSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetProductSet(request);
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchClient::UpdateProductSet(
    google::cloud::vision::v1::ProductSet const& product_set,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::UpdateProductSetRequest request;
  *request.mutable_product_set() = product_set;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateProductSet(request);
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchClient::UpdateProductSet(
    google::cloud::vision::v1::UpdateProductSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateProductSet(request);
}

Status ProductSearchClient::DeleteProductSet(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::DeleteProductSetRequest request;
  request.set_name(name);
  return connection_->DeleteProductSet(request);
}

Status ProductSearchClient::DeleteProductSet(
    google::cloud::vision::v1::DeleteProductSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteProductSet(request);
}

StatusOr<google::cloud::vision::v1::Product> ProductSearchClient::CreateProduct(
    std::string const& parent,
    google::cloud::vision::v1::Product const& product,
    std::string const& product_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::CreateProductRequest request;
  request.set_parent(parent);
  *request.mutable_product() = product;
  request.set_product_id(product_id);
  return connection_->CreateProduct(request);
}

StatusOr<google::cloud::vision::v1::Product> ProductSearchClient::CreateProduct(
    google::cloud::vision::v1::CreateProductRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateProduct(request);
}

StreamRange<google::cloud::vision::v1::Product>
ProductSearchClient::ListProducts(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::ListProductsRequest request;
  request.set_parent(parent);
  return connection_->ListProducts(request);
}

StreamRange<google::cloud::vision::v1::Product>
ProductSearchClient::ListProducts(
    google::cloud::vision::v1::ListProductsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListProducts(std::move(request));
}

StatusOr<google::cloud::vision::v1::Product> ProductSearchClient::GetProduct(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::GetProductRequest request;
  request.set_name(name);
  return connection_->GetProduct(request);
}

StatusOr<google::cloud::vision::v1::Product> ProductSearchClient::GetProduct(
    google::cloud::vision::v1::GetProductRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetProduct(request);
}

StatusOr<google::cloud::vision::v1::Product> ProductSearchClient::UpdateProduct(
    google::cloud::vision::v1::Product const& product,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::UpdateProductRequest request;
  *request.mutable_product() = product;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateProduct(request);
}

StatusOr<google::cloud::vision::v1::Product> ProductSearchClient::UpdateProduct(
    google::cloud::vision::v1::UpdateProductRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateProduct(request);
}

Status ProductSearchClient::DeleteProduct(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::DeleteProductRequest request;
  request.set_name(name);
  return connection_->DeleteProduct(request);
}

Status ProductSearchClient::DeleteProduct(
    google::cloud::vision::v1::DeleteProductRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteProduct(request);
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchClient::CreateReferenceImage(
    std::string const& parent,
    google::cloud::vision::v1::ReferenceImage const& reference_image,
    std::string const& reference_image_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::CreateReferenceImageRequest request;
  request.set_parent(parent);
  *request.mutable_reference_image() = reference_image;
  request.set_reference_image_id(reference_image_id);
  return connection_->CreateReferenceImage(request);
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchClient::CreateReferenceImage(
    google::cloud::vision::v1::CreateReferenceImageRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateReferenceImage(request);
}

Status ProductSearchClient::DeleteReferenceImage(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::DeleteReferenceImageRequest request;
  request.set_name(name);
  return connection_->DeleteReferenceImage(request);
}

Status ProductSearchClient::DeleteReferenceImage(
    google::cloud::vision::v1::DeleteReferenceImageRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteReferenceImage(request);
}

StreamRange<google::cloud::vision::v1::ReferenceImage>
ProductSearchClient::ListReferenceImages(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::ListReferenceImagesRequest request;
  request.set_parent(parent);
  return connection_->ListReferenceImages(request);
}

StreamRange<google::cloud::vision::v1::ReferenceImage>
ProductSearchClient::ListReferenceImages(
    google::cloud::vision::v1::ListReferenceImagesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListReferenceImages(std::move(request));
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchClient::GetReferenceImage(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::GetReferenceImageRequest request;
  request.set_name(name);
  return connection_->GetReferenceImage(request);
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchClient::GetReferenceImage(
    google::cloud::vision::v1::GetReferenceImageRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetReferenceImage(request);
}

Status ProductSearchClient::AddProductToProductSet(std::string const& name,
                                                   std::string const& product,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::AddProductToProductSetRequest request;
  request.set_name(name);
  request.set_product(product);
  return connection_->AddProductToProductSet(request);
}

Status ProductSearchClient::AddProductToProductSet(
    google::cloud::vision::v1::AddProductToProductSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddProductToProductSet(request);
}

Status ProductSearchClient::RemoveProductFromProductSet(
    std::string const& name, std::string const& product, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::RemoveProductFromProductSetRequest request;
  request.set_name(name);
  request.set_product(product);
  return connection_->RemoveProductFromProductSet(request);
}

Status ProductSearchClient::RemoveProductFromProductSet(
    google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveProductFromProductSet(request);
}

StreamRange<google::cloud::vision::v1::Product>
ProductSearchClient::ListProductsInProductSet(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::ListProductsInProductSetRequest request;
  request.set_name(name);
  return connection_->ListProductsInProductSet(request);
}

StreamRange<google::cloud::vision::v1::Product>
ProductSearchClient::ListProductsInProductSet(
    google::cloud::vision::v1::ListProductsInProductSetRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListProductsInProductSet(std::move(request));
}

future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>
ProductSearchClient::ImportProductSets(
    std::string const& parent,
    google::cloud::vision::v1::ImportProductSetsInputConfig const& input_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::ImportProductSetsRequest request;
  request.set_parent(parent);
  *request.mutable_input_config() = input_config;
  return connection_->ImportProductSets(request);
}

future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>
ProductSearchClient::ImportProductSets(
    google::cloud::vision::v1::ImportProductSetsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportProductSets(request);
}

future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>
ProductSearchClient::PurgeProducts(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::PurgeProductsRequest request;
  request.set_parent(parent);
  return connection_->PurgeProducts(request);
}

future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>
ProductSearchClient::PurgeProducts(
    google::cloud::vision::v1::PurgeProductsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PurgeProducts(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision
}  // namespace cloud
}  // namespace google
