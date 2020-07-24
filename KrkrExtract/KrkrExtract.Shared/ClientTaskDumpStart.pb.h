// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClientTaskDumpStart.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ClientTaskDumpStart_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ClientTaskDumpStart_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ClientTaskDumpStart_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ClientTaskDumpStart_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
class ClientTaskDumpStart;
class ClientTaskDumpStartDefaultTypeInternal;
extern ClientTaskDumpStartDefaultTypeInternal _ClientTaskDumpStart_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ClientTaskDumpStart* Arena::CreateMaybeMessage<::ClientTaskDumpStart>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class ClientTaskDumpStart :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ClientTaskDumpStart) */ {
 public:
  ClientTaskDumpStart();
  virtual ~ClientTaskDumpStart();

  ClientTaskDumpStart(const ClientTaskDumpStart& from);
  ClientTaskDumpStart(ClientTaskDumpStart&& from) noexcept
    : ClientTaskDumpStart() {
    *this = ::std::move(from);
  }

  inline ClientTaskDumpStart& operator=(const ClientTaskDumpStart& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClientTaskDumpStart& operator=(ClientTaskDumpStart&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ClientTaskDumpStart& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClientTaskDumpStart* internal_default_instance() {
    return reinterpret_cast<const ClientTaskDumpStart*>(
               &_ClientTaskDumpStart_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ClientTaskDumpStart& a, ClientTaskDumpStart& b) {
    a.Swap(&b);
  }
  inline void Swap(ClientTaskDumpStart* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ClientTaskDumpStart* New() const final {
    return CreateMaybeMessage<ClientTaskDumpStart>(nullptr);
  }

  ClientTaskDumpStart* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ClientTaskDumpStart>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const ClientTaskDumpStart& from);
  void MergeFrom(const ClientTaskDumpStart& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClientTaskDumpStart* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ClientTaskDumpStart";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFileFieldNumber = 9,
    kSequenceIdFieldNumber = 1,
    kPsbModeFieldNumber = 2,
    kTextModeFieldNumber = 3,
    kPngModeFieldNumber = 4,
    kTjs2ModeFieldNumber = 5,
    kTlgModeFieldNumber = 6,
    kAmvModeFieldNumber = 7,
    kPdbModeFieldNumber = 8,
  };
  // string File = 9;
  void clear_file();
  const std::string& file() const;
  void set_file(const std::string& value);
  void set_file(std::string&& value);
  void set_file(const char* value);
  void set_file(const char* value, size_t size);
  std::string* mutable_file();
  std::string* release_file();
  void set_allocated_file(std::string* file);
  private:
  const std::string& _internal_file() const;
  void _internal_set_file(const std::string& value);
  std::string* _internal_mutable_file();
  public:

  // uint64 SequenceId = 1;
  void clear_sequenceid();
  ::PROTOBUF_NAMESPACE_ID::uint64 sequenceid() const;
  void set_sequenceid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_sequenceid() const;
  void _internal_set_sequenceid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 PsbMode = 2;
  void clear_psbmode();
  ::PROTOBUF_NAMESPACE_ID::uint64 psbmode() const;
  void set_psbmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_psbmode() const;
  void _internal_set_psbmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 TextMode = 3;
  void clear_textmode();
  ::PROTOBUF_NAMESPACE_ID::uint64 textmode() const;
  void set_textmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_textmode() const;
  void _internal_set_textmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 PngMode = 4;
  void clear_pngmode();
  ::PROTOBUF_NAMESPACE_ID::uint64 pngmode() const;
  void set_pngmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_pngmode() const;
  void _internal_set_pngmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 Tjs2Mode = 5;
  void clear_tjs2mode();
  ::PROTOBUF_NAMESPACE_ID::uint64 tjs2mode() const;
  void set_tjs2mode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_tjs2mode() const;
  void _internal_set_tjs2mode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 TlgMode = 6;
  void clear_tlgmode();
  ::PROTOBUF_NAMESPACE_ID::uint64 tlgmode() const;
  void set_tlgmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_tlgmode() const;
  void _internal_set_tlgmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 AmvMode = 7;
  void clear_amvmode();
  ::PROTOBUF_NAMESPACE_ID::uint64 amvmode() const;
  void set_amvmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_amvmode() const;
  void _internal_set_amvmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 PdbMode = 8;
  void clear_pdbmode();
  ::PROTOBUF_NAMESPACE_ID::uint64 pdbmode() const;
  void set_pdbmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_pdbmode() const;
  void _internal_set_pdbmode(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:ClientTaskDumpStart)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr file_;
  ::PROTOBUF_NAMESPACE_ID::uint64 sequenceid_;
  ::PROTOBUF_NAMESPACE_ID::uint64 psbmode_;
  ::PROTOBUF_NAMESPACE_ID::uint64 textmode_;
  ::PROTOBUF_NAMESPACE_ID::uint64 pngmode_;
  ::PROTOBUF_NAMESPACE_ID::uint64 tjs2mode_;
  ::PROTOBUF_NAMESPACE_ID::uint64 tlgmode_;
  ::PROTOBUF_NAMESPACE_ID::uint64 amvmode_;
  ::PROTOBUF_NAMESPACE_ID::uint64 pdbmode_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ClientTaskDumpStart_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ClientTaskDumpStart

// uint64 SequenceId = 1;
inline void ClientTaskDumpStart::clear_sequenceid() {
  sequenceid_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::_internal_sequenceid() const {
  return sequenceid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::sequenceid() const {
  // @@protoc_insertion_point(field_get:ClientTaskDumpStart.SequenceId)
  return _internal_sequenceid();
}
inline void ClientTaskDumpStart::_internal_set_sequenceid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  sequenceid_ = value;
}
inline void ClientTaskDumpStart::set_sequenceid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_sequenceid(value);
  // @@protoc_insertion_point(field_set:ClientTaskDumpStart.SequenceId)
}

// uint64 PsbMode = 2;
inline void ClientTaskDumpStart::clear_psbmode() {
  psbmode_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::_internal_psbmode() const {
  return psbmode_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::psbmode() const {
  // @@protoc_insertion_point(field_get:ClientTaskDumpStart.PsbMode)
  return _internal_psbmode();
}
inline void ClientTaskDumpStart::_internal_set_psbmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  psbmode_ = value;
}
inline void ClientTaskDumpStart::set_psbmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_psbmode(value);
  // @@protoc_insertion_point(field_set:ClientTaskDumpStart.PsbMode)
}

// uint64 TextMode = 3;
inline void ClientTaskDumpStart::clear_textmode() {
  textmode_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::_internal_textmode() const {
  return textmode_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::textmode() const {
  // @@protoc_insertion_point(field_get:ClientTaskDumpStart.TextMode)
  return _internal_textmode();
}
inline void ClientTaskDumpStart::_internal_set_textmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  textmode_ = value;
}
inline void ClientTaskDumpStart::set_textmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_textmode(value);
  // @@protoc_insertion_point(field_set:ClientTaskDumpStart.TextMode)
}

// uint64 PngMode = 4;
inline void ClientTaskDumpStart::clear_pngmode() {
  pngmode_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::_internal_pngmode() const {
  return pngmode_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::pngmode() const {
  // @@protoc_insertion_point(field_get:ClientTaskDumpStart.PngMode)
  return _internal_pngmode();
}
inline void ClientTaskDumpStart::_internal_set_pngmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  pngmode_ = value;
}
inline void ClientTaskDumpStart::set_pngmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_pngmode(value);
  // @@protoc_insertion_point(field_set:ClientTaskDumpStart.PngMode)
}

// uint64 Tjs2Mode = 5;
inline void ClientTaskDumpStart::clear_tjs2mode() {
  tjs2mode_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::_internal_tjs2mode() const {
  return tjs2mode_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::tjs2mode() const {
  // @@protoc_insertion_point(field_get:ClientTaskDumpStart.Tjs2Mode)
  return _internal_tjs2mode();
}
inline void ClientTaskDumpStart::_internal_set_tjs2mode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  tjs2mode_ = value;
}
inline void ClientTaskDumpStart::set_tjs2mode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_tjs2mode(value);
  // @@protoc_insertion_point(field_set:ClientTaskDumpStart.Tjs2Mode)
}

// uint64 TlgMode = 6;
inline void ClientTaskDumpStart::clear_tlgmode() {
  tlgmode_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::_internal_tlgmode() const {
  return tlgmode_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::tlgmode() const {
  // @@protoc_insertion_point(field_get:ClientTaskDumpStart.TlgMode)
  return _internal_tlgmode();
}
inline void ClientTaskDumpStart::_internal_set_tlgmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  tlgmode_ = value;
}
inline void ClientTaskDumpStart::set_tlgmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_tlgmode(value);
  // @@protoc_insertion_point(field_set:ClientTaskDumpStart.TlgMode)
}

// uint64 AmvMode = 7;
inline void ClientTaskDumpStart::clear_amvmode() {
  amvmode_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::_internal_amvmode() const {
  return amvmode_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::amvmode() const {
  // @@protoc_insertion_point(field_get:ClientTaskDumpStart.AmvMode)
  return _internal_amvmode();
}
inline void ClientTaskDumpStart::_internal_set_amvmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  amvmode_ = value;
}
inline void ClientTaskDumpStart::set_amvmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_amvmode(value);
  // @@protoc_insertion_point(field_set:ClientTaskDumpStart.AmvMode)
}

// uint64 PdbMode = 8;
inline void ClientTaskDumpStart::clear_pdbmode() {
  pdbmode_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::_internal_pdbmode() const {
  return pdbmode_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientTaskDumpStart::pdbmode() const {
  // @@protoc_insertion_point(field_get:ClientTaskDumpStart.PdbMode)
  return _internal_pdbmode();
}
inline void ClientTaskDumpStart::_internal_set_pdbmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  pdbmode_ = value;
}
inline void ClientTaskDumpStart::set_pdbmode(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_pdbmode(value);
  // @@protoc_insertion_point(field_set:ClientTaskDumpStart.PdbMode)
}

// string File = 9;
inline void ClientTaskDumpStart::clear_file() {
  file_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientTaskDumpStart::file() const {
  // @@protoc_insertion_point(field_get:ClientTaskDumpStart.File)
  return _internal_file();
}
inline void ClientTaskDumpStart::set_file(const std::string& value) {
  _internal_set_file(value);
  // @@protoc_insertion_point(field_set:ClientTaskDumpStart.File)
}
inline std::string* ClientTaskDumpStart::mutable_file() {
  // @@protoc_insertion_point(field_mutable:ClientTaskDumpStart.File)
  return _internal_mutable_file();
}
inline const std::string& ClientTaskDumpStart::_internal_file() const {
  return file_.GetNoArena();
}
inline void ClientTaskDumpStart::_internal_set_file(const std::string& value) {
  
  file_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ClientTaskDumpStart::set_file(std::string&& value) {
  
  file_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientTaskDumpStart.File)
}
inline void ClientTaskDumpStart::set_file(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  file_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientTaskDumpStart.File)
}
inline void ClientTaskDumpStart::set_file(const char* value, size_t size) {
  
  file_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientTaskDumpStart.File)
}
inline std::string* ClientTaskDumpStart::_internal_mutable_file() {
  
  return file_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientTaskDumpStart::release_file() {
  // @@protoc_insertion_point(field_release:ClientTaskDumpStart.File)
  
  return file_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientTaskDumpStart::set_allocated_file(std::string* file) {
  if (file != nullptr) {
    
  } else {
    
  }
  file_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), file);
  // @@protoc_insertion_point(field_set_allocated:ClientTaskDumpStart.File)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ClientTaskDumpStart_2eproto