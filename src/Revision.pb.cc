// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Revision.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Revision_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Revision_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Revision_2eproto() {
  protobuf_AddDesc_Revision_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Revision.proto");
  GOOGLE_CHECK(file != NULL);
  Revision_descriptor_ = file->message_type(0);
  static const int Revision_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Revision, sequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Revision, lasteffectivedate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Revision, deleted_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Revision, previousid_),
  };
  Revision_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Revision_descriptor_,
      Revision::default_instance_,
      Revision_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Revision, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Revision, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Revision));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Revision_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Revision_descriptor_, &Revision::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Revision_2eproto() {
  delete Revision::default_instance_;
  delete Revision_reflection_;
}

void protobuf_AddDesc_Revision_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016Revision.proto\"\\\n\010Revision\022\020\n\010sequence"
    "\030\001 \001(\005\022\031\n\021lastEffectiveDate\030\002 \001(\005\022\017\n\007del"
    "eted\030\003 \001(\010\022\022\n\npreviousId\030\004 \001(\005", 110);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Revision.proto", &protobuf_RegisterTypes);
  Revision::default_instance_ = new Revision();
  Revision::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Revision_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Revision_2eproto {
  StaticDescriptorInitializer_Revision_2eproto() {
    protobuf_AddDesc_Revision_2eproto();
  }
} static_descriptor_initializer_Revision_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Revision::kSequenceFieldNumber;
const int Revision::kLastEffectiveDateFieldNumber;
const int Revision::kDeletedFieldNumber;
const int Revision::kPreviousIdFieldNumber;
#endif  // !_MSC_VER

Revision::Revision()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Revision::InitAsDefaultInstance() {
}

Revision::Revision(const Revision& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Revision::SharedCtor() {
  _cached_size_ = 0;
  sequence_ = 0;
  lasteffectivedate_ = 0;
  deleted_ = false;
  previousid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Revision::~Revision() {
  SharedDtor();
}

void Revision::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Revision::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Revision::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Revision_descriptor_;
}

const Revision& Revision::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Revision_2eproto();  return *default_instance_;
}

Revision* Revision::default_instance_ = NULL;

Revision* Revision::New() const {
  return new Revision;
}

void Revision::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    sequence_ = 0;
    lasteffectivedate_ = 0;
    deleted_ = false;
    previousid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Revision::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 sequence = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sequence_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_lastEffectiveDate;
        break;
      }
      
      // optional int32 lastEffectiveDate = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_lastEffectiveDate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &lasteffectivedate_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_deleted;
        break;
      }
      
      // optional bool deleted = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_deleted:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &deleted_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_previousId;
        break;
      }
      
      // optional int32 previousId = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_previousId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &previousid_)));
          _set_bit(3);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Revision::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 sequence = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->sequence(), output);
  }
  
  // optional int32 lastEffectiveDate = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->lasteffectivedate(), output);
  }
  
  // optional bool deleted = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->deleted(), output);
  }
  
  // optional int32 previousId = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->previousid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Revision::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 sequence = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->sequence(), target);
  }
  
  // optional int32 lastEffectiveDate = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->lasteffectivedate(), target);
  }
  
  // optional bool deleted = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->deleted(), target);
  }
  
  // optional int32 previousId = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->previousid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Revision::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 sequence = 1;
    if (has_sequence()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sequence());
    }
    
    // optional int32 lastEffectiveDate = 2;
    if (has_lasteffectivedate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->lasteffectivedate());
    }
    
    // optional bool deleted = 3;
    if (has_deleted()) {
      total_size += 1 + 1;
    }
    
    // optional int32 previousId = 4;
    if (has_previousid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->previousid());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Revision::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Revision* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Revision*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Revision::MergeFrom(const Revision& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_sequence(from.sequence());
    }
    if (from._has_bit(1)) {
      set_lasteffectivedate(from.lasteffectivedate());
    }
    if (from._has_bit(2)) {
      set_deleted(from.deleted());
    }
    if (from._has_bit(3)) {
      set_previousid(from.previousid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Revision::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Revision::CopyFrom(const Revision& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Revision::IsInitialized() const {
  
  return true;
}

void Revision::Swap(Revision* other) {
  if (other != this) {
    std::swap(sequence_, other->sequence_);
    std::swap(lasteffectivedate_, other->lasteffectivedate_);
    std::swap(deleted_, other->deleted_);
    std::swap(previousid_, other->previousid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Revision::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Revision_descriptor_;
  metadata.reflection = Revision_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)