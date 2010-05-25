// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Revision.proto

#ifndef PROTOBUF_Revision_2eproto__INCLUDED
#define PROTOBUF_Revision_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Revision_2eproto();
void protobuf_AssignDesc_Revision_2eproto();
void protobuf_ShutdownFile_Revision_2eproto();

class Revision;

// ===================================================================

class Revision : public ::google::protobuf::Message {
 public:
  Revision();
  virtual ~Revision();
  
  Revision(const Revision& from);
  
  inline Revision& operator=(const Revision& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Revision& default_instance();
  
  void Swap(Revision* other);
  
  // implements Message ----------------------------------------------
  
  Revision* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Revision& from);
  void MergeFrom(const Revision& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 sequence = 1;
  inline bool has_sequence() const;
  inline void clear_sequence();
  static const int kSequenceFieldNumber = 1;
  inline ::google::protobuf::int32 sequence() const;
  inline void set_sequence(::google::protobuf::int32 value);
  
  // optional int32 lastEffectiveDate = 2;
  inline bool has_lasteffectivedate() const;
  inline void clear_lasteffectivedate();
  static const int kLastEffectiveDateFieldNumber = 2;
  inline ::google::protobuf::int32 lasteffectivedate() const;
  inline void set_lasteffectivedate(::google::protobuf::int32 value);
  
  // optional bool deleted = 3;
  inline bool has_deleted() const;
  inline void clear_deleted();
  static const int kDeletedFieldNumber = 3;
  inline bool deleted() const;
  inline void set_deleted(bool value);
  
  // optional int32 previousId = 4;
  inline bool has_previousid() const;
  inline void clear_previousid();
  static const int kPreviousIdFieldNumber = 4;
  inline ::google::protobuf::int32 previousid() const;
  inline void set_previousid(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:Revision)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 sequence_;
  ::google::protobuf::int32 lasteffectivedate_;
  bool deleted_;
  ::google::protobuf::int32 previousid_;
  friend void  protobuf_AddDesc_Revision_2eproto();
  friend void protobuf_AssignDesc_Revision_2eproto();
  friend void protobuf_ShutdownFile_Revision_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static Revision* default_instance_;
};
// ===================================================================


// ===================================================================

// Revision

// optional int32 sequence = 1;
inline bool Revision::has_sequence() const {
  return _has_bit(0);
}
inline void Revision::clear_sequence() {
  sequence_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 Revision::sequence() const {
  return sequence_;
}
inline void Revision::set_sequence(::google::protobuf::int32 value) {
  _set_bit(0);
  sequence_ = value;
}

// optional int32 lastEffectiveDate = 2;
inline bool Revision::has_lasteffectivedate() const {
  return _has_bit(1);
}
inline void Revision::clear_lasteffectivedate() {
  lasteffectivedate_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 Revision::lasteffectivedate() const {
  return lasteffectivedate_;
}
inline void Revision::set_lasteffectivedate(::google::protobuf::int32 value) {
  _set_bit(1);
  lasteffectivedate_ = value;
}

// optional bool deleted = 3;
inline bool Revision::has_deleted() const {
  return _has_bit(2);
}
inline void Revision::clear_deleted() {
  deleted_ = false;
  _clear_bit(2);
}
inline bool Revision::deleted() const {
  return deleted_;
}
inline void Revision::set_deleted(bool value) {
  _set_bit(2);
  deleted_ = value;
}

// optional int32 previousId = 4;
inline bool Revision::has_previousid() const {
  return _has_bit(3);
}
inline void Revision::clear_previousid() {
  previousid_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 Revision::previousid() const {
  return previousid_;
}
inline void Revision::set_previousid(::google::protobuf::int32 value) {
  _set_bit(3);
  previousid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Revision_2eproto__INCLUDED
