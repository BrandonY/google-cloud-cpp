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
// source: grafeas/v1/grafeas.proto

#include "google/cloud/containeranalysis/grafeas_client.h"
#include "google/cloud/containeranalysis/internal/grafeas_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GrafeasClient::GrafeasClient(std::shared_ptr<GrafeasConnection> connection,
                             Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts), containeranalysis_internal::GrafeasDefaultOptions(
                               connection_->options()))) {}
GrafeasClient::~GrafeasClient() = default;

StatusOr<grafeas::v1::Occurrence> GrafeasClient::GetOccurrence(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::GetOccurrenceRequest request;
  request.set_name(name);
  return connection_->GetOccurrence(request);
}

StatusOr<grafeas::v1::Occurrence> GrafeasClient::GetOccurrence(
    grafeas::v1::GetOccurrenceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOccurrence(request);
}

StreamRange<grafeas::v1::Occurrence> GrafeasClient::ListOccurrences(
    std::string const& parent, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::ListOccurrencesRequest request;
  request.set_parent(parent);
  request.set_filter(filter);
  return connection_->ListOccurrences(request);
}

StreamRange<grafeas::v1::Occurrence> GrafeasClient::ListOccurrences(
    grafeas::v1::ListOccurrencesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOccurrences(std::move(request));
}

Status GrafeasClient::DeleteOccurrence(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::DeleteOccurrenceRequest request;
  request.set_name(name);
  return connection_->DeleteOccurrence(request);
}

Status GrafeasClient::DeleteOccurrence(
    grafeas::v1::DeleteOccurrenceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOccurrence(request);
}

StatusOr<grafeas::v1::Occurrence> GrafeasClient::CreateOccurrence(
    std::string const& parent, grafeas::v1::Occurrence const& occurrence,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::CreateOccurrenceRequest request;
  request.set_parent(parent);
  *request.mutable_occurrence() = occurrence;
  return connection_->CreateOccurrence(request);
}

StatusOr<grafeas::v1::Occurrence> GrafeasClient::CreateOccurrence(
    grafeas::v1::CreateOccurrenceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateOccurrence(request);
}

StatusOr<grafeas::v1::BatchCreateOccurrencesResponse>
GrafeasClient::BatchCreateOccurrences(
    std::string const& parent,
    std::vector<grafeas::v1::Occurrence> const& occurrences, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::BatchCreateOccurrencesRequest request;
  request.set_parent(parent);
  *request.mutable_occurrences() = {occurrences.begin(), occurrences.end()};
  return connection_->BatchCreateOccurrences(request);
}

StatusOr<grafeas::v1::BatchCreateOccurrencesResponse>
GrafeasClient::BatchCreateOccurrences(
    grafeas::v1::BatchCreateOccurrencesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateOccurrences(request);
}

StatusOr<grafeas::v1::Occurrence> GrafeasClient::UpdateOccurrence(
    std::string const& name, grafeas::v1::Occurrence const& occurrence,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::UpdateOccurrenceRequest request;
  request.set_name(name);
  *request.mutable_occurrence() = occurrence;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateOccurrence(request);
}

StatusOr<grafeas::v1::Occurrence> GrafeasClient::UpdateOccurrence(
    grafeas::v1::UpdateOccurrenceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateOccurrence(request);
}

StatusOr<grafeas::v1::Note> GrafeasClient::GetOccurrenceNote(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::GetOccurrenceNoteRequest request;
  request.set_name(name);
  return connection_->GetOccurrenceNote(request);
}

StatusOr<grafeas::v1::Note> GrafeasClient::GetOccurrenceNote(
    grafeas::v1::GetOccurrenceNoteRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOccurrenceNote(request);
}

StatusOr<grafeas::v1::Note> GrafeasClient::GetNote(std::string const& name,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::GetNoteRequest request;
  request.set_name(name);
  return connection_->GetNote(request);
}

StatusOr<grafeas::v1::Note> GrafeasClient::GetNote(
    grafeas::v1::GetNoteRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNote(request);
}

StreamRange<grafeas::v1::Note> GrafeasClient::ListNotes(
    std::string const& parent, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::ListNotesRequest request;
  request.set_parent(parent);
  request.set_filter(filter);
  return connection_->ListNotes(request);
}

StreamRange<grafeas::v1::Note> GrafeasClient::ListNotes(
    grafeas::v1::ListNotesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNotes(std::move(request));
}

Status GrafeasClient::DeleteNote(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::DeleteNoteRequest request;
  request.set_name(name);
  return connection_->DeleteNote(request);
}

Status GrafeasClient::DeleteNote(grafeas::v1::DeleteNoteRequest const& request,
                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNote(request);
}

StatusOr<grafeas::v1::Note> GrafeasClient::CreateNote(
    std::string const& parent, std::string const& note_id,
    grafeas::v1::Note const& note, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::CreateNoteRequest request;
  request.set_parent(parent);
  request.set_note_id(note_id);
  *request.mutable_note() = note;
  return connection_->CreateNote(request);
}

StatusOr<grafeas::v1::Note> GrafeasClient::CreateNote(
    grafeas::v1::CreateNoteRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNote(request);
}

StatusOr<grafeas::v1::BatchCreateNotesResponse> GrafeasClient::BatchCreateNotes(
    std::string const& parent,
    std::map<std::string, grafeas::v1::Note> const& notes, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::BatchCreateNotesRequest request;
  request.set_parent(parent);
  *request.mutable_notes() = {notes.begin(), notes.end()};
  return connection_->BatchCreateNotes(request);
}

StatusOr<grafeas::v1::BatchCreateNotesResponse> GrafeasClient::BatchCreateNotes(
    grafeas::v1::BatchCreateNotesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateNotes(request);
}

StatusOr<grafeas::v1::Note> GrafeasClient::UpdateNote(
    std::string const& name, grafeas::v1::Note const& note,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::UpdateNoteRequest request;
  request.set_name(name);
  *request.mutable_note() = note;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateNote(request);
}

StatusOr<grafeas::v1::Note> GrafeasClient::UpdateNote(
    grafeas::v1::UpdateNoteRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateNote(request);
}

StreamRange<grafeas::v1::Occurrence> GrafeasClient::ListNoteOccurrences(
    std::string const& name, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  grafeas::v1::ListNoteOccurrencesRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListNoteOccurrences(request);
}

StreamRange<grafeas::v1::Occurrence> GrafeasClient::ListNoteOccurrences(
    grafeas::v1::ListNoteOccurrencesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNoteOccurrences(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis
}  // namespace cloud
}  // namespace google
