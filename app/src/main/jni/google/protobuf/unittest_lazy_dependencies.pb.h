// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_lazy_dependencies.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/unittest_lazy_dependencies_custom_option.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto;
namespace protobuf_unittest {
namespace lazy_imports {
class ImportedMessage;
class ImportedMessageDefaultTypeInternal;
extern ImportedMessageDefaultTypeInternal _ImportedMessage_default_instance_;
class MessageCustomOption;
class MessageCustomOptionDefaultTypeInternal;
extern MessageCustomOptionDefaultTypeInternal _MessageCustomOption_default_instance_;
class MessageCustomOption2;
class MessageCustomOption2DefaultTypeInternal;
extern MessageCustomOption2DefaultTypeInternal _MessageCustomOption2_default_instance_;
}  // namespace lazy_imports
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> ::protobuf_unittest::lazy_imports::ImportedMessage* Arena::CreateMaybeMessage<::protobuf_unittest::lazy_imports::ImportedMessage>(Arena*);
template<> ::protobuf_unittest::lazy_imports::MessageCustomOption* Arena::CreateMaybeMessage<::protobuf_unittest::lazy_imports::MessageCustomOption>(Arena*);
template<> ::protobuf_unittest::lazy_imports::MessageCustomOption2* Arena::CreateMaybeMessage<::protobuf_unittest::lazy_imports::MessageCustomOption2>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protobuf_unittest {
namespace lazy_imports {

// ===================================================================

class ImportedMessage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest.lazy_imports.ImportedMessage) */ {
 public:
  ImportedMessage();
  virtual ~ImportedMessage();

  ImportedMessage(const ImportedMessage& from);
  ImportedMessage(ImportedMessage&& from) noexcept
    : ImportedMessage() {
    *this = ::std::move(from);
  }

  inline ImportedMessage& operator=(const ImportedMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ImportedMessage& operator=(ImportedMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ImportedMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ImportedMessage* internal_default_instance() {
    return reinterpret_cast<const ImportedMessage*>(
               &_ImportedMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ImportedMessage& a, ImportedMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(ImportedMessage* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ImportedMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ImportedMessage* New() const final {
    return CreateMaybeMessage<ImportedMessage>(nullptr);
  }

  ImportedMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ImportedMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ImportedMessage& from);
  void MergeFrom(const ImportedMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ImportedMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protobuf_unittest.lazy_imports.ImportedMessage";
  }
  protected:
  explicit ImportedMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto);
    return ::descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLazyMessageFieldNumber = 1,
  };
  // optional .protobuf_unittest.lazy_imports.LazyMessage lazy_message = 1;
  bool has_lazy_message() const;
  private:
  bool _internal_has_lazy_message() const;
  public:
  void clear_lazy_message();
  const ::protobuf_unittest::lazy_imports::LazyMessage& lazy_message() const;
  ::protobuf_unittest::lazy_imports::LazyMessage* release_lazy_message();
  ::protobuf_unittest::lazy_imports::LazyMessage* mutable_lazy_message();
  void set_allocated_lazy_message(::protobuf_unittest::lazy_imports::LazyMessage* lazy_message);
  private:
  const ::protobuf_unittest::lazy_imports::LazyMessage& _internal_lazy_message() const;
  ::protobuf_unittest::lazy_imports::LazyMessage* _internal_mutable_lazy_message();
  public:
  void unsafe_arena_set_allocated_lazy_message(
      ::protobuf_unittest::lazy_imports::LazyMessage* lazy_message);
  ::protobuf_unittest::lazy_imports::LazyMessage* unsafe_arena_release_lazy_message();

  // @@protoc_insertion_point(class_scope:protobuf_unittest.lazy_imports.ImportedMessage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::protobuf_unittest::lazy_imports::LazyMessage* lazy_message_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto;
};
// -------------------------------------------------------------------

class MessageCustomOption :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest.lazy_imports.MessageCustomOption) */ {
 public:
  MessageCustomOption();
  virtual ~MessageCustomOption();

  MessageCustomOption(const MessageCustomOption& from);
  MessageCustomOption(MessageCustomOption&& from) noexcept
    : MessageCustomOption() {
    *this = ::std::move(from);
  }

  inline MessageCustomOption& operator=(const MessageCustomOption& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessageCustomOption& operator=(MessageCustomOption&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MessageCustomOption& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MessageCustomOption* internal_default_instance() {
    return reinterpret_cast<const MessageCustomOption*>(
               &_MessageCustomOption_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MessageCustomOption& a, MessageCustomOption& b) {
    a.Swap(&b);
  }
  inline void Swap(MessageCustomOption* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MessageCustomOption* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MessageCustomOption* New() const final {
    return CreateMaybeMessage<MessageCustomOption>(nullptr);
  }

  MessageCustomOption* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MessageCustomOption>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MessageCustomOption& from);
  void MergeFrom(const MessageCustomOption& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MessageCustomOption* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protobuf_unittest.lazy_imports.MessageCustomOption";
  }
  protected:
  explicit MessageCustomOption(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto);
    return ::descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:protobuf_unittest.lazy_imports.MessageCustomOption)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto;
};
// -------------------------------------------------------------------

class MessageCustomOption2 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest.lazy_imports.MessageCustomOption2) */ {
 public:
  MessageCustomOption2();
  virtual ~MessageCustomOption2();

  MessageCustomOption2(const MessageCustomOption2& from);
  MessageCustomOption2(MessageCustomOption2&& from) noexcept
    : MessageCustomOption2() {
    *this = ::std::move(from);
  }

  inline MessageCustomOption2& operator=(const MessageCustomOption2& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessageCustomOption2& operator=(MessageCustomOption2&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MessageCustomOption2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MessageCustomOption2* internal_default_instance() {
    return reinterpret_cast<const MessageCustomOption2*>(
               &_MessageCustomOption2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MessageCustomOption2& a, MessageCustomOption2& b) {
    a.Swap(&b);
  }
  inline void Swap(MessageCustomOption2* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MessageCustomOption2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MessageCustomOption2* New() const final {
    return CreateMaybeMessage<MessageCustomOption2>(nullptr);
  }

  MessageCustomOption2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MessageCustomOption2>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MessageCustomOption2& from);
  void MergeFrom(const MessageCustomOption2& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MessageCustomOption2* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protobuf_unittest.lazy_imports.MessageCustomOption2";
  }
  protected:
  explicit MessageCustomOption2(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto);
    return ::descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:protobuf_unittest.lazy_imports.MessageCustomOption2)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ImportedMessage

// optional .protobuf_unittest.lazy_imports.LazyMessage lazy_message = 1;
inline bool ImportedMessage::_internal_has_lazy_message() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || lazy_message_ != nullptr);
  return value;
}
inline bool ImportedMessage::has_lazy_message() const {
  return _internal_has_lazy_message();
}
inline const ::protobuf_unittest::lazy_imports::LazyMessage& ImportedMessage::_internal_lazy_message() const {
  const ::protobuf_unittest::lazy_imports::LazyMessage* p = lazy_message_;
  return p != nullptr ? *p : *reinterpret_cast<const ::protobuf_unittest::lazy_imports::LazyMessage*>(
      &::protobuf_unittest::lazy_imports::_LazyMessage_default_instance_);
}
inline const ::protobuf_unittest::lazy_imports::LazyMessage& ImportedMessage::lazy_message() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.lazy_imports.ImportedMessage.lazy_message)
  return _internal_lazy_message();
}
inline ::protobuf_unittest::lazy_imports::LazyMessage* ImportedMessage::release_lazy_message() {
  auto temp = unsafe_arena_release_lazy_message();
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::protobuf_unittest::lazy_imports::LazyMessage* ImportedMessage::unsafe_arena_release_lazy_message() {
  // @@protoc_insertion_point(field_release:protobuf_unittest.lazy_imports.ImportedMessage.lazy_message)
  _has_bits_[0] &= ~0x00000001u;
  ::protobuf_unittest::lazy_imports::LazyMessage* temp = lazy_message_;
  lazy_message_ = nullptr;
  return temp;
}
inline ::protobuf_unittest::lazy_imports::LazyMessage* ImportedMessage::_internal_mutable_lazy_message() {
  _has_bits_[0] |= 0x00000001u;
  if (lazy_message_ == nullptr) {
    auto* p = CreateMaybeMessage<::protobuf_unittest::lazy_imports::LazyMessage>(GetArenaNoVirtual());
    lazy_message_ = p;
  }
  return lazy_message_;
}
inline ::protobuf_unittest::lazy_imports::LazyMessage* ImportedMessage::mutable_lazy_message() {
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.lazy_imports.ImportedMessage.lazy_message)
  return _internal_mutable_lazy_message();
}
inline void ImportedMessage::set_allocated_lazy_message(::protobuf_unittest::lazy_imports::LazyMessage* lazy_message) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(lazy_message_);
  }
  if (lazy_message) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(lazy_message)->GetArena();
    if (message_arena != submessage_arena) {
      lazy_message = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, lazy_message, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  lazy_message_ = lazy_message;
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.lazy_imports.ImportedMessage.lazy_message)
}

// -------------------------------------------------------------------

// MessageCustomOption

// -------------------------------------------------------------------

// MessageCustomOption2

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace lazy_imports
}  // namespace protobuf_unittest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto
