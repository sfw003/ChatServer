// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contact.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_contact_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_contact_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_contact_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_contact_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_contact_2eproto;
namespace contact {
class Contact;
struct ContactDefaultTypeInternal;
extern ContactDefaultTypeInternal _Contact_default_instance_;
class PeopleInfo;
struct PeopleInfoDefaultTypeInternal;
extern PeopleInfoDefaultTypeInternal _PeopleInfo_default_instance_;
class PeopleInfo_Phone;
struct PeopleInfo_PhoneDefaultTypeInternal;
extern PeopleInfo_PhoneDefaultTypeInternal _PeopleInfo_Phone_default_instance_;
}  // namespace contact
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace contact {

// ===================================================================


// -------------------------------------------------------------------

class PeopleInfo_Phone final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contact.PeopleInfo.Phone) */ {
 public:
  inline PeopleInfo_Phone() : PeopleInfo_Phone(nullptr) {}
  ~PeopleInfo_Phone() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PeopleInfo_Phone(::google::protobuf::internal::ConstantInitialized);

  inline PeopleInfo_Phone(const PeopleInfo_Phone& from)
      : PeopleInfo_Phone(nullptr, from) {}
  PeopleInfo_Phone(PeopleInfo_Phone&& from) noexcept
    : PeopleInfo_Phone() {
    *this = ::std::move(from);
  }

  inline PeopleInfo_Phone& operator=(const PeopleInfo_Phone& from) {
    CopyFrom(from);
    return *this;
  }
  inline PeopleInfo_Phone& operator=(PeopleInfo_Phone&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PeopleInfo_Phone& default_instance() {
    return *internal_default_instance();
  }
  static inline const PeopleInfo_Phone* internal_default_instance() {
    return reinterpret_cast<const PeopleInfo_Phone*>(
               &_PeopleInfo_Phone_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PeopleInfo_Phone& a, PeopleInfo_Phone& b) {
    a.Swap(&b);
  }
  inline void Swap(PeopleInfo_Phone* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PeopleInfo_Phone* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PeopleInfo_Phone* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PeopleInfo_Phone>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const PeopleInfo_Phone& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const PeopleInfo_Phone& from) {
    PeopleInfo_Phone::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(PeopleInfo_Phone* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "contact.PeopleInfo.Phone";
  }
  protected:
  explicit PeopleInfo_Phone(::google::protobuf::Arena* arena);
  PeopleInfo_Phone(::google::protobuf::Arena* arena, const PeopleInfo_Phone& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNumberFieldNumber = 1,
  };
  // string number = 1;
  void clear_number() ;
  const std::string& number() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_number(Arg_&& arg, Args_... args);
  std::string* mutable_number();
  PROTOBUF_NODISCARD std::string* release_number();
  void set_allocated_number(std::string* value);

  private:
  const std::string& _internal_number() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_number(
      const std::string& value);
  std::string* _internal_mutable_number();

  public:
  // @@protoc_insertion_point(class_scope:contact.PeopleInfo.Phone)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      39, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr number_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_contact_2eproto;
};// -------------------------------------------------------------------

class PeopleInfo final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contact.PeopleInfo) */ {
 public:
  inline PeopleInfo() : PeopleInfo(nullptr) {}
  ~PeopleInfo() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PeopleInfo(::google::protobuf::internal::ConstantInitialized);

  inline PeopleInfo(const PeopleInfo& from)
      : PeopleInfo(nullptr, from) {}
  PeopleInfo(PeopleInfo&& from) noexcept
    : PeopleInfo() {
    *this = ::std::move(from);
  }

  inline PeopleInfo& operator=(const PeopleInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline PeopleInfo& operator=(PeopleInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PeopleInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const PeopleInfo* internal_default_instance() {
    return reinterpret_cast<const PeopleInfo*>(
               &_PeopleInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PeopleInfo& a, PeopleInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(PeopleInfo* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PeopleInfo* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PeopleInfo* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PeopleInfo>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const PeopleInfo& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const PeopleInfo& from) {
    PeopleInfo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(PeopleInfo* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "contact.PeopleInfo";
  }
  protected:
  explicit PeopleInfo(::google::protobuf::Arena* arena);
  PeopleInfo(::google::protobuf::Arena* arena, const PeopleInfo& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using Phone = PeopleInfo_Phone;

  // accessors -------------------------------------------------------

  enum : int {
    kPhoneFieldNumber = 3,
    kNameFieldNumber = 1,
    kAgeFieldNumber = 2,
  };
  // repeated .contact.PeopleInfo.Phone phone = 3;
  int phone_size() const;
  private:
  int _internal_phone_size() const;

  public:
  void clear_phone() ;
  ::contact::PeopleInfo_Phone* mutable_phone(int index);
  ::google::protobuf::RepeatedPtrField< ::contact::PeopleInfo_Phone >*
      mutable_phone();
  private:
  const ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo_Phone>& _internal_phone() const;
  ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo_Phone>* _internal_mutable_phone();
  public:
  const ::contact::PeopleInfo_Phone& phone(int index) const;
  ::contact::PeopleInfo_Phone* add_phone();
  const ::google::protobuf::RepeatedPtrField< ::contact::PeopleInfo_Phone >&
      phone() const;
  // string name = 1;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // int32 age = 2;
  void clear_age() ;
  ::int32_t age() const;
  void set_age(::int32_t value);

  private:
  ::int32_t _internal_age() const;
  void _internal_set_age(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:contact.PeopleInfo)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 1,
      31, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::RepeatedPtrField< ::contact::PeopleInfo_Phone > phone_;
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::int32_t age_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_contact_2eproto;
};// -------------------------------------------------------------------

class Contact final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contact.Contact) */ {
 public:
  inline Contact() : Contact(nullptr) {}
  ~Contact() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Contact(::google::protobuf::internal::ConstantInitialized);

  inline Contact(const Contact& from)
      : Contact(nullptr, from) {}
  Contact(Contact&& from) noexcept
    : Contact() {
    *this = ::std::move(from);
  }

  inline Contact& operator=(const Contact& from) {
    CopyFrom(from);
    return *this;
  }
  inline Contact& operator=(Contact&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Contact& default_instance() {
    return *internal_default_instance();
  }
  static inline const Contact* internal_default_instance() {
    return reinterpret_cast<const Contact*>(
               &_Contact_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Contact& a, Contact& b) {
    a.Swap(&b);
  }
  inline void Swap(Contact* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Contact* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Contact* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Contact>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Contact& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Contact& from) {
    Contact::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Contact* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "contact.Contact";
  }
  protected:
  explicit Contact(::google::protobuf::Arena* arena);
  Contact(::google::protobuf::Arena* arena, const Contact& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPeopleFieldNumber = 1,
  };
  // repeated .contact.PeopleInfo people = 1;
  int people_size() const;
  private:
  int _internal_people_size() const;

  public:
  void clear_people() ;
  ::contact::PeopleInfo* mutable_people(int index);
  ::google::protobuf::RepeatedPtrField< ::contact::PeopleInfo >*
      mutable_people();
  private:
  const ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo>& _internal_people() const;
  ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo>* _internal_mutable_people();
  public:
  const ::contact::PeopleInfo& people(int index) const;
  ::contact::PeopleInfo* add_people();
  const ::google::protobuf::RepeatedPtrField< ::contact::PeopleInfo >&
      people() const;
  // @@protoc_insertion_point(class_scope:contact.Contact)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 1,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::RepeatedPtrField< ::contact::PeopleInfo > people_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_contact_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// PeopleInfo_Phone

// string number = 1;
inline void PeopleInfo_Phone::clear_number() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.number_.ClearToEmpty();
}
inline const std::string& PeopleInfo_Phone::number() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:contact.PeopleInfo.Phone.number)
  return _internal_number();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PeopleInfo_Phone::set_number(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.number_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:contact.PeopleInfo.Phone.number)
}
inline std::string* PeopleInfo_Phone::mutable_number() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_number();
  // @@protoc_insertion_point(field_mutable:contact.PeopleInfo.Phone.number)
  return _s;
}
inline const std::string& PeopleInfo_Phone::_internal_number() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.number_.Get();
}
inline void PeopleInfo_Phone::_internal_set_number(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.number_.Set(value, GetArena());
}
inline std::string* PeopleInfo_Phone::_internal_mutable_number() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.number_.Mutable( GetArena());
}
inline std::string* PeopleInfo_Phone::release_number() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:contact.PeopleInfo.Phone.number)
  return _impl_.number_.Release();
}
inline void PeopleInfo_Phone::set_allocated_number(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.number_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.number_.IsDefault()) {
          _impl_.number_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:contact.PeopleInfo.Phone.number)
}

// -------------------------------------------------------------------

// PeopleInfo

// string name = 1;
inline void PeopleInfo::clear_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.name_.ClearToEmpty();
}
inline const std::string& PeopleInfo::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:contact.PeopleInfo.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PeopleInfo::set_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:contact.PeopleInfo.name)
}
inline std::string* PeopleInfo::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:contact.PeopleInfo.name)
  return _s;
}
inline const std::string& PeopleInfo::_internal_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.name_.Get();
}
inline void PeopleInfo::_internal_set_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.name_.Set(value, GetArena());
}
inline std::string* PeopleInfo::_internal_mutable_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* PeopleInfo::release_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:contact.PeopleInfo.name)
  return _impl_.name_.Release();
}
inline void PeopleInfo::set_allocated_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:contact.PeopleInfo.name)
}

// int32 age = 2;
inline void PeopleInfo::clear_age() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.age_ = 0;
}
inline ::int32_t PeopleInfo::age() const {
  // @@protoc_insertion_point(field_get:contact.PeopleInfo.age)
  return _internal_age();
}
inline void PeopleInfo::set_age(::int32_t value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:contact.PeopleInfo.age)
}
inline ::int32_t PeopleInfo::_internal_age() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.age_;
}
inline void PeopleInfo::_internal_set_age(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.age_ = value;
}

// repeated .contact.PeopleInfo.Phone phone = 3;
inline int PeopleInfo::_internal_phone_size() const {
  return _internal_phone().size();
}
inline int PeopleInfo::phone_size() const {
  return _internal_phone_size();
}
inline void PeopleInfo::clear_phone() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.phone_.Clear();
}
inline ::contact::PeopleInfo_Phone* PeopleInfo::mutable_phone(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:contact.PeopleInfo.phone)
  return _internal_mutable_phone()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo_Phone>* PeopleInfo::mutable_phone()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:contact.PeopleInfo.phone)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_phone();
}
inline const ::contact::PeopleInfo_Phone& PeopleInfo::phone(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:contact.PeopleInfo.phone)
  return _internal_phone().Get(index);
}
inline ::contact::PeopleInfo_Phone* PeopleInfo::add_phone() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::contact::PeopleInfo_Phone* _add = _internal_mutable_phone()->Add();
  // @@protoc_insertion_point(field_add:contact.PeopleInfo.phone)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo_Phone>& PeopleInfo::phone() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:contact.PeopleInfo.phone)
  return _internal_phone();
}
inline const ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo_Phone>&
PeopleInfo::_internal_phone() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.phone_;
}
inline ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo_Phone>*
PeopleInfo::_internal_mutable_phone() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.phone_;
}

// -------------------------------------------------------------------

// Contact

// repeated .contact.PeopleInfo people = 1;
inline int Contact::_internal_people_size() const {
  return _internal_people().size();
}
inline int Contact::people_size() const {
  return _internal_people_size();
}
inline void Contact::clear_people() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.people_.Clear();
}
inline ::contact::PeopleInfo* Contact::mutable_people(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:contact.Contact.people)
  return _internal_mutable_people()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo>* Contact::mutable_people()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:contact.Contact.people)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_people();
}
inline const ::contact::PeopleInfo& Contact::people(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:contact.Contact.people)
  return _internal_people().Get(index);
}
inline ::contact::PeopleInfo* Contact::add_people() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::contact::PeopleInfo* _add = _internal_mutable_people()->Add();
  // @@protoc_insertion_point(field_add:contact.Contact.people)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo>& Contact::people() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:contact.Contact.people)
  return _internal_people();
}
inline const ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo>&
Contact::_internal_people() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.people_;
}
inline ::google::protobuf::RepeatedPtrField<::contact::PeopleInfo>*
Contact::_internal_mutable_people() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.people_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace contact


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_contact_2eproto_2epb_2eh
