// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contact.proto

#include "contact.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace contact {

inline constexpr PeopleInfo_Phone::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : number_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR PeopleInfo_Phone::PeopleInfo_Phone(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct PeopleInfo_PhoneDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PeopleInfo_PhoneDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PeopleInfo_PhoneDefaultTypeInternal() {}
  union {
    PeopleInfo_Phone _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PeopleInfo_PhoneDefaultTypeInternal _PeopleInfo_Phone_default_instance_;

inline constexpr PeopleInfo::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : phone_{},
        name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        age_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR PeopleInfo::PeopleInfo(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct PeopleInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PeopleInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PeopleInfoDefaultTypeInternal() {}
  union {
    PeopleInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PeopleInfoDefaultTypeInternal _PeopleInfo_default_instance_;

inline constexpr Contact::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : people_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Contact::Contact(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ContactDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ContactDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ContactDefaultTypeInternal() {}
  union {
    Contact _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ContactDefaultTypeInternal _Contact_default_instance_;
}  // namespace contact
static ::_pb::Metadata file_level_metadata_contact_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_contact_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_contact_2eproto = nullptr;
const ::uint32_t TableStruct_contact_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::contact::PeopleInfo_Phone, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::contact::PeopleInfo_Phone, _impl_.number_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::contact::PeopleInfo, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::contact::PeopleInfo, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::contact::PeopleInfo, _impl_.age_),
    PROTOBUF_FIELD_OFFSET(::contact::PeopleInfo, _impl_.phone_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::contact::Contact, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::contact::Contact, _impl_.people_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::contact::PeopleInfo_Phone)},
        {9, -1, -1, sizeof(::contact::PeopleInfo)},
        {20, -1, -1, sizeof(::contact::Contact)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::contact::_PeopleInfo_Phone_default_instance_._instance,
    &::contact::_PeopleInfo_default_instance_._instance,
    &::contact::_Contact_default_instance_._instance,
};
const char descriptor_table_protodef_contact_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\rcontact.proto\022\007contact\"j\n\nPeopleInfo\022\014"
    "\n\004name\030\001 \001(\t\022\013\n\003age\030\002 \001(\005\022(\n\005phone\030\003 \003(\013"
    "2\031.contact.PeopleInfo.Phone\032\027\n\005Phone\022\016\n\006"
    "number\030\001 \001(\t\".\n\007Contact\022#\n\006people\030\001 \003(\0132"
    "\023.contact.PeopleInfob\006proto3"
};
static ::absl::once_flag descriptor_table_contact_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_contact_2eproto = {
    false,
    false,
    188,
    descriptor_table_protodef_contact_2eproto,
    "contact.proto",
    &descriptor_table_contact_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_contact_2eproto::offsets,
    file_level_metadata_contact_2eproto,
    file_level_enum_descriptors_contact_2eproto,
    file_level_service_descriptors_contact_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_contact_2eproto_getter() {
  return &descriptor_table_contact_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_contact_2eproto(&descriptor_table_contact_2eproto);
namespace contact {
// ===================================================================

class PeopleInfo_Phone::_Internal {
 public:
};

PeopleInfo_Phone::PeopleInfo_Phone(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:contact.PeopleInfo.Phone)
}
inline PROTOBUF_NDEBUG_INLINE PeopleInfo_Phone::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : number_(arena, from.number_),
        _cached_size_{0} {}

PeopleInfo_Phone::PeopleInfo_Phone(
    ::google::protobuf::Arena* arena,
    const PeopleInfo_Phone& from)
    : ::google::protobuf::Message(arena) {
  PeopleInfo_Phone* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:contact.PeopleInfo.Phone)
}
inline PROTOBUF_NDEBUG_INLINE PeopleInfo_Phone::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : number_(arena),
        _cached_size_{0} {}

inline void PeopleInfo_Phone::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
PeopleInfo_Phone::~PeopleInfo_Phone() {
  // @@protoc_insertion_point(destructor:contact.PeopleInfo.Phone)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void PeopleInfo_Phone::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.number_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void PeopleInfo_Phone::Clear() {
// @@protoc_insertion_point(message_clear_start:contact.PeopleInfo.Phone)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.number_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* PeopleInfo_Phone::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 39, 2> PeopleInfo_Phone::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_PeopleInfo_Phone_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string number = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(PeopleInfo_Phone, _impl_.number_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string number = 1;
    {PROTOBUF_FIELD_OFFSET(PeopleInfo_Phone, _impl_.number_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\30\6\0\0\0\0\0\0"
    "contact.PeopleInfo.Phone"
    "number"
  }},
};

::uint8_t* PeopleInfo_Phone::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:contact.PeopleInfo.Phone)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string number = 1;
  if (!this->_internal_number().empty()) {
    const std::string& _s = this->_internal_number();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "contact.PeopleInfo.Phone.number");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contact.PeopleInfo.Phone)
  return target;
}

::size_t PeopleInfo_Phone::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contact.PeopleInfo.Phone)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string number = 1;
  if (!this->_internal_number().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_number());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData PeopleInfo_Phone::_class_data_ = {
    PeopleInfo_Phone::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* PeopleInfo_Phone::GetClassData() const {
  return &_class_data_;
}

void PeopleInfo_Phone::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<PeopleInfo_Phone*>(&to_msg);
  auto& from = static_cast<const PeopleInfo_Phone&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:contact.PeopleInfo.Phone)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_number().empty()) {
    _this->_internal_set_number(from._internal_number());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void PeopleInfo_Phone::CopyFrom(const PeopleInfo_Phone& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contact.PeopleInfo.Phone)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool PeopleInfo_Phone::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* PeopleInfo_Phone::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void PeopleInfo_Phone::InternalSwap(PeopleInfo_Phone* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.number_, &other->_impl_.number_, arena);
}

::google::protobuf::Metadata PeopleInfo_Phone::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_contact_2eproto_getter, &descriptor_table_contact_2eproto_once,
      file_level_metadata_contact_2eproto[0]);
}
// ===================================================================

class PeopleInfo::_Internal {
 public:
};

PeopleInfo::PeopleInfo(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:contact.PeopleInfo)
}
inline PROTOBUF_NDEBUG_INLINE PeopleInfo::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : phone_{visibility, arena, from.phone_},
        name_(arena, from.name_),
        _cached_size_{0} {}

PeopleInfo::PeopleInfo(
    ::google::protobuf::Arena* arena,
    const PeopleInfo& from)
    : ::google::protobuf::Message(arena) {
  PeopleInfo* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.age_ = from._impl_.age_;

  // @@protoc_insertion_point(copy_constructor:contact.PeopleInfo)
}
inline PROTOBUF_NDEBUG_INLINE PeopleInfo::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : phone_{visibility, arena},
        name_(arena),
        _cached_size_{0} {}

inline void PeopleInfo::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.age_ = {};
}
PeopleInfo::~PeopleInfo() {
  // @@protoc_insertion_point(destructor:contact.PeopleInfo)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void PeopleInfo::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.name_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void PeopleInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:contact.PeopleInfo)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.phone_.Clear();
  _impl_.name_.ClearToEmpty();
  _impl_.age_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* PeopleInfo::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 1, 31, 2> PeopleInfo::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_PeopleInfo_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // string name = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(PeopleInfo, _impl_.name_)}},
    // int32 age = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(PeopleInfo, _impl_.age_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(PeopleInfo, _impl_.age_)}},
    // repeated .contact.PeopleInfo.Phone phone = 3;
    {::_pbi::TcParser::FastMtR1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(PeopleInfo, _impl_.phone_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string name = 1;
    {PROTOBUF_FIELD_OFFSET(PeopleInfo, _impl_.name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // int32 age = 2;
    {PROTOBUF_FIELD_OFFSET(PeopleInfo, _impl_.age_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // repeated .contact.PeopleInfo.Phone phone = 3;
    {PROTOBUF_FIELD_OFFSET(PeopleInfo, _impl_.phone_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::contact::PeopleInfo_Phone>()},
  }}, {{
    "\22\4\0\0\0\0\0\0"
    "contact.PeopleInfo"
    "name"
  }},
};

::uint8_t* PeopleInfo::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:contact.PeopleInfo)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    const std::string& _s = this->_internal_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "contact.PeopleInfo.name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // int32 age = 2;
  if (this->_internal_age() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_age(), target);
  }

  // repeated .contact.PeopleInfo.Phone phone = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_phone_size()); i < n; i++) {
    const auto& repfield = this->_internal_phone().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contact.PeopleInfo)
  return target;
}

::size_t PeopleInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contact.PeopleInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .contact.PeopleInfo.Phone phone = 3;
  total_size += 1UL * this->_internal_phone_size();
  for (const auto& msg : this->_internal_phone()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_name());
  }

  // int32 age = 2;
  if (this->_internal_age() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_age());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData PeopleInfo::_class_data_ = {
    PeopleInfo::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* PeopleInfo::GetClassData() const {
  return &_class_data_;
}

void PeopleInfo::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<PeopleInfo*>(&to_msg);
  auto& from = static_cast<const PeopleInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:contact.PeopleInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_phone()->MergeFrom(
      from._internal_phone());
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_age() != 0) {
    _this->_internal_set_age(from._internal_age());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void PeopleInfo::CopyFrom(const PeopleInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contact.PeopleInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool PeopleInfo::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* PeopleInfo::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void PeopleInfo::InternalSwap(PeopleInfo* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.phone_.InternalSwap(&other->_impl_.phone_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
        swap(_impl_.age_, other->_impl_.age_);
}

::google::protobuf::Metadata PeopleInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_contact_2eproto_getter, &descriptor_table_contact_2eproto_once,
      file_level_metadata_contact_2eproto[1]);
}
// ===================================================================

class Contact::_Internal {
 public:
};

Contact::Contact(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:contact.Contact)
}
inline PROTOBUF_NDEBUG_INLINE Contact::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : people_{visibility, arena, from.people_},
        _cached_size_{0} {}

Contact::Contact(
    ::google::protobuf::Arena* arena,
    const Contact& from)
    : ::google::protobuf::Message(arena) {
  Contact* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:contact.Contact)
}
inline PROTOBUF_NDEBUG_INLINE Contact::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : people_{visibility, arena},
        _cached_size_{0} {}

inline void Contact::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Contact::~Contact() {
  // @@protoc_insertion_point(destructor:contact.Contact)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Contact::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Contact::Clear() {
// @@protoc_insertion_point(message_clear_start:contact.Contact)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.people_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Contact::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> Contact::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Contact_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // repeated .contact.PeopleInfo people = 1;
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Contact, _impl_.people_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .contact.PeopleInfo people = 1;
    {PROTOBUF_FIELD_OFFSET(Contact, _impl_.people_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::contact::PeopleInfo>()},
  }}, {{
  }},
};

::uint8_t* Contact::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:contact.Contact)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .contact.PeopleInfo people = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_people_size()); i < n; i++) {
    const auto& repfield = this->_internal_people().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contact.Contact)
  return target;
}

::size_t Contact::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contact.Contact)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .contact.PeopleInfo people = 1;
  total_size += 1UL * this->_internal_people_size();
  for (const auto& msg : this->_internal_people()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Contact::_class_data_ = {
    Contact::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Contact::GetClassData() const {
  return &_class_data_;
}

void Contact::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Contact*>(&to_msg);
  auto& from = static_cast<const Contact&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:contact.Contact)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_people()->MergeFrom(
      from._internal_people());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Contact::CopyFrom(const Contact& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contact.Contact)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Contact::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Contact::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Contact::InternalSwap(Contact* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.people_.InternalSwap(&other->_impl_.people_);
}

::google::protobuf::Metadata Contact::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_contact_2eproto_getter, &descriptor_table_contact_2eproto_once,
      file_level_metadata_contact_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace contact
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
