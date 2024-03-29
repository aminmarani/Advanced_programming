// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto3.proto

#ifndef PROTOBUF_proto3_2eproto__INCLUDED
#define PROTOBUF_proto3_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace cse411 {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_proto3_2eproto();
void protobuf_AssignDesc_proto3_2eproto();
void protobuf_ShutdownFile_proto3_2eproto();

class Item;
class Set;

// ===================================================================

class Item : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cse411.Item) */ {
 public:
  Item();
  virtual ~Item();

  Item(const Item& from);

  inline Item& operator=(const Item& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Item& default_instance();

  void Swap(Item* other);

  // implements Message ----------------------------------------------

  inline Item* New() const { return New(NULL); }

  Item* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Item& from);
  void MergeFrom(const Item& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Item* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 num = 1;
  void clear_num();
  static const int kNumFieldNumber = 1;
  ::google::protobuf::int32 num() const;
  void set_num(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cse411.Item)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 num_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_proto3_2eproto();
  friend void protobuf_AssignDesc_proto3_2eproto();
  friend void protobuf_ShutdownFile_proto3_2eproto();

  void InitAsDefaultInstance();
  static Item* default_instance_;
};
// -------------------------------------------------------------------

class Set : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cse411.Set) */ {
 public:
  Set();
  virtual ~Set();

  Set(const Set& from);

  inline Set& operator=(const Set& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Set& default_instance();

  void Swap(Set* other);

  // implements Message ----------------------------------------------

  inline Set* New() const { return New(NULL); }

  Set* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Set& from);
  void MergeFrom(const Set& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Set* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .cse411.Item item = 1;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::cse411::Item& item(int index) const;
  ::cse411::Item* mutable_item(int index);
  ::cse411::Item* add_item();
  ::google::protobuf::RepeatedPtrField< ::cse411::Item >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::cse411::Item >&
      item() const;

  // @@protoc_insertion_point(class_scope:cse411.Set)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::cse411::Item > item_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_proto3_2eproto();
  friend void protobuf_AssignDesc_proto3_2eproto();
  friend void protobuf_ShutdownFile_proto3_2eproto();

  void InitAsDefaultInstance();
  static Set* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Item

// optional int32 num = 1;
inline void Item::clear_num() {
  num_ = 0;
}
inline ::google::protobuf::int32 Item::num() const {
  // @@protoc_insertion_point(field_get:cse411.Item.num)
  return num_;
}
inline void Item::set_num(::google::protobuf::int32 value) {
  
  num_ = value;
  // @@protoc_insertion_point(field_set:cse411.Item.num)
}

// -------------------------------------------------------------------

// Set

// repeated .cse411.Item item = 1;
inline int Set::item_size() const {
  return item_.size();
}
inline void Set::clear_item() {
  item_.Clear();
}
inline const ::cse411::Item& Set::item(int index) const {
  // @@protoc_insertion_point(field_get:cse411.Set.item)
  return item_.Get(index);
}
inline ::cse411::Item* Set::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:cse411.Set.item)
  return item_.Mutable(index);
}
inline ::cse411::Item* Set::add_item() {
  // @@protoc_insertion_point(field_add:cse411.Set.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cse411::Item >*
Set::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:cse411.Set.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cse411::Item >&
Set::item() const {
  // @@protoc_insertion_point(field_list:cse411.Set.item)
  return item_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace cse411

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto3_2eproto__INCLUDED
