// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#include "message.pb.h"

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
namespace message {

inline constexpr GetVarifyRsp::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : email_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        code_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        error_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR GetVarifyRsp::GetVarifyRsp(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct GetVarifyRspDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetVarifyRspDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetVarifyRspDefaultTypeInternal() {}
  union {
    GetVarifyRsp _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetVarifyRspDefaultTypeInternal _GetVarifyRsp_default_instance_;

inline constexpr GetVarifyReq::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : email_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR GetVarifyReq::GetVarifyReq(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct GetVarifyReqDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetVarifyReqDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetVarifyReqDefaultTypeInternal() {}
  union {
    GetVarifyReq _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetVarifyReqDefaultTypeInternal _GetVarifyReq_default_instance_;
}  // namespace message
static ::_pb::Metadata file_level_metadata_message_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_message_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_message_2eproto = nullptr;
const ::uint32_t TableStruct_message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::message::GetVarifyReq, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::message::GetVarifyReq, _impl_.email_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::message::GetVarifyRsp, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::message::GetVarifyRsp, _impl_.error_),
    PROTOBUF_FIELD_OFFSET(::message::GetVarifyRsp, _impl_.email_),
    PROTOBUF_FIELD_OFFSET(::message::GetVarifyRsp, _impl_.code_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::message::GetVarifyReq)},
        {9, -1, -1, sizeof(::message::GetVarifyRsp)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::message::_GetVarifyReq_default_instance_._instance,
    &::message::_GetVarifyRsp_default_instance_._instance,
};
const char descriptor_table_protodef_message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\rmessage.proto\022\007message\"\035\n\014GetVarifyReq"
    "\022\r\n\005email\030\001 \001(\t\":\n\014GetVarifyRsp\022\r\n\005error"
    "\030\001 \001(\005\022\r\n\005email\030\002 \001(\t\022\014\n\004code\030\003 \001(\t2P\n\rV"
    "arifyService\022\?\n\rGetVarifyCode\022\025.message."
    "GetVarifyReq\032\025.message.GetVarifyRsp\"\000b\006p"
    "roto3"
};
static ::absl::once_flag descriptor_table_message_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_message_2eproto = {
    false,
    false,
    205,
    descriptor_table_protodef_message_2eproto,
    "message.proto",
    &descriptor_table_message_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_message_2eproto::offsets,
    file_level_metadata_message_2eproto,
    file_level_enum_descriptors_message_2eproto,
    file_level_service_descriptors_message_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_message_2eproto_getter() {
  return &descriptor_table_message_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_message_2eproto(&descriptor_table_message_2eproto);
namespace message {
// ===================================================================

class GetVarifyReq::_Internal {
 public:
};

GetVarifyReq::GetVarifyReq(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:message.GetVarifyReq)
}
inline PROTOBUF_NDEBUG_INLINE GetVarifyReq::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : email_(arena, from.email_),
        _cached_size_{0} {}

GetVarifyReq::GetVarifyReq(
    ::google::protobuf::Arena* arena,
    const GetVarifyReq& from)
    : ::google::protobuf::Message(arena) {
  GetVarifyReq* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:message.GetVarifyReq)
}
inline PROTOBUF_NDEBUG_INLINE GetVarifyReq::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : email_(arena),
        _cached_size_{0} {}

inline void GetVarifyReq::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
GetVarifyReq::~GetVarifyReq() {
  // @@protoc_insertion_point(destructor:message.GetVarifyReq)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void GetVarifyReq::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.email_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void GetVarifyReq::Clear() {
// @@protoc_insertion_point(message_clear_start:message.GetVarifyReq)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.email_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* GetVarifyReq::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 34, 2> GetVarifyReq::_table_ = {
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
    &_GetVarifyReq_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string email = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(GetVarifyReq, _impl_.email_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string email = 1;
    {PROTOBUF_FIELD_OFFSET(GetVarifyReq, _impl_.email_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\24\5\0\0\0\0\0\0"
    "message.GetVarifyReq"
    "email"
  }},
};

::uint8_t* GetVarifyReq::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.GetVarifyReq)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string email = 1;
  if (!this->_internal_email().empty()) {
    const std::string& _s = this->_internal_email();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "message.GetVarifyReq.email");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:message.GetVarifyReq)
  return target;
}

::size_t GetVarifyReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:message.GetVarifyReq)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string email = 1;
  if (!this->_internal_email().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_email());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData GetVarifyReq::_class_data_ = {
    GetVarifyReq::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* GetVarifyReq::GetClassData() const {
  return &_class_data_;
}

void GetVarifyReq::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<GetVarifyReq*>(&to_msg);
  auto& from = static_cast<const GetVarifyReq&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:message.GetVarifyReq)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_email().empty()) {
    _this->_internal_set_email(from._internal_email());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void GetVarifyReq::CopyFrom(const GetVarifyReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:message.GetVarifyReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool GetVarifyReq::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* GetVarifyReq::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void GetVarifyReq::InternalSwap(GetVarifyReq* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.email_, &other->_impl_.email_, arena);
}

::google::protobuf::Metadata GetVarifyReq::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_message_2eproto_getter, &descriptor_table_message_2eproto_once,
      file_level_metadata_message_2eproto[0]);
}
// ===================================================================

class GetVarifyRsp::_Internal {
 public:
};

GetVarifyRsp::GetVarifyRsp(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:message.GetVarifyRsp)
}
inline PROTOBUF_NDEBUG_INLINE GetVarifyRsp::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : email_(arena, from.email_),
        code_(arena, from.code_),
        _cached_size_{0} {}

GetVarifyRsp::GetVarifyRsp(
    ::google::protobuf::Arena* arena,
    const GetVarifyRsp& from)
    : ::google::protobuf::Message(arena) {
  GetVarifyRsp* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.error_ = from._impl_.error_;

  // @@protoc_insertion_point(copy_constructor:message.GetVarifyRsp)
}
inline PROTOBUF_NDEBUG_INLINE GetVarifyRsp::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : email_(arena),
        code_(arena),
        _cached_size_{0} {}

inline void GetVarifyRsp::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.error_ = {};
}
GetVarifyRsp::~GetVarifyRsp() {
  // @@protoc_insertion_point(destructor:message.GetVarifyRsp)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void GetVarifyRsp::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.email_.Destroy();
  _impl_.code_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void GetVarifyRsp::Clear() {
// @@protoc_insertion_point(message_clear_start:message.GetVarifyRsp)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.email_.ClearToEmpty();
  _impl_.code_.ClearToEmpty();
  _impl_.error_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* GetVarifyRsp::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 38, 2> GetVarifyRsp::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_GetVarifyRsp_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // int32 error = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(GetVarifyRsp, _impl_.error_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(GetVarifyRsp, _impl_.error_)}},
    // string email = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(GetVarifyRsp, _impl_.email_)}},
    // string code = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(GetVarifyRsp, _impl_.code_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 error = 1;
    {PROTOBUF_FIELD_OFFSET(GetVarifyRsp, _impl_.error_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // string email = 2;
    {PROTOBUF_FIELD_OFFSET(GetVarifyRsp, _impl_.email_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string code = 3;
    {PROTOBUF_FIELD_OFFSET(GetVarifyRsp, _impl_.code_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\24\0\5\4\0\0\0\0"
    "message.GetVarifyRsp"
    "email"
    "code"
  }},
};

::uint8_t* GetVarifyRsp::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.GetVarifyRsp)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 error = 1;
  if (this->_internal_error() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_error(), target);
  }

  // string email = 2;
  if (!this->_internal_email().empty()) {
    const std::string& _s = this->_internal_email();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "message.GetVarifyRsp.email");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string code = 3;
  if (!this->_internal_code().empty()) {
    const std::string& _s = this->_internal_code();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "message.GetVarifyRsp.code");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:message.GetVarifyRsp)
  return target;
}

::size_t GetVarifyRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:message.GetVarifyRsp)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string email = 2;
  if (!this->_internal_email().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_email());
  }

  // string code = 3;
  if (!this->_internal_code().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_code());
  }

  // int32 error = 1;
  if (this->_internal_error() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_error());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData GetVarifyRsp::_class_data_ = {
    GetVarifyRsp::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* GetVarifyRsp::GetClassData() const {
  return &_class_data_;
}

void GetVarifyRsp::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<GetVarifyRsp*>(&to_msg);
  auto& from = static_cast<const GetVarifyRsp&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:message.GetVarifyRsp)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_email().empty()) {
    _this->_internal_set_email(from._internal_email());
  }
  if (!from._internal_code().empty()) {
    _this->_internal_set_code(from._internal_code());
  }
  if (from._internal_error() != 0) {
    _this->_internal_set_error(from._internal_error());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void GetVarifyRsp::CopyFrom(const GetVarifyRsp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:message.GetVarifyRsp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool GetVarifyRsp::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* GetVarifyRsp::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void GetVarifyRsp::InternalSwap(GetVarifyRsp* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.email_, &other->_impl_.email_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.code_, &other->_impl_.code_, arena);
        swap(_impl_.error_, other->_impl_.error_);
}

::google::protobuf::Metadata GetVarifyRsp::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_message_2eproto_getter, &descriptor_table_message_2eproto_once,
      file_level_metadata_message_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace message
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
