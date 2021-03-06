// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorMagnetic.proto

#include "SensorMagnetic.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_vector3d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_vector3d_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector3d;
}  // namespace protobuf_vector3d_2eproto
namespace sensor_msgs {
namespace msgs {
class MagneticDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Magnetic>
      _instance;
} _Magnetic_default_instance_;
}  // namespace msgs
}  // namespace sensor_msgs
namespace protobuf_SensorMagnetic_2eproto {
static void InitDefaultsMagnetic() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sensor_msgs::msgs::_Magnetic_default_instance_;
    new (ptr) ::sensor_msgs::msgs::Magnetic();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sensor_msgs::msgs::Magnetic::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Magnetic =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsMagnetic}, {
      &protobuf_vector3d_2eproto::scc_info_Vector3d.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Magnetic.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sensor_msgs::msgs::Magnetic, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sensor_msgs::msgs::Magnetic, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sensor_msgs::msgs::Magnetic, magnetic_field_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sensor_msgs::msgs::Magnetic, magnetic_field_covariance_),
  0,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::sensor_msgs::msgs::Magnetic)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::sensor_msgs::msgs::_Magnetic_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "SensorMagnetic.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024SensorMagnetic.proto\022\020sensor_msgs.msgs"
      "\032\016vector3d.proto\"`\n\010Magnetic\022-\n\016magnetic"
      "_field\030\001 \002(\0132\025.gazebo.msgs.Vector3d\022%\n\031m"
      "agnetic_field_covariance\030\002 \003(\002B\002\020\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 154);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SensorMagnetic.proto", &protobuf_RegisterTypes);
  ::protobuf_vector3d_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_SensorMagnetic_2eproto
namespace sensor_msgs {
namespace msgs {

// ===================================================================

void Magnetic::InitAsDefaultInstance() {
  ::sensor_msgs::msgs::_Magnetic_default_instance_._instance.get_mutable()->magnetic_field_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
}
void Magnetic::clear_magnetic_field() {
  if (magnetic_field_ != NULL) magnetic_field_->Clear();
  clear_has_magnetic_field();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Magnetic::kMagneticFieldFieldNumber;
const int Magnetic::kMagneticFieldCovarianceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Magnetic::Magnetic()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_SensorMagnetic_2eproto::scc_info_Magnetic.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:sensor_msgs.msgs.Magnetic)
}
Magnetic::Magnetic(const Magnetic& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      magnetic_field_covariance_(from.magnetic_field_covariance_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_magnetic_field()) {
    magnetic_field_ = new ::gazebo::msgs::Vector3d(*from.magnetic_field_);
  } else {
    magnetic_field_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:sensor_msgs.msgs.Magnetic)
}

void Magnetic::SharedCtor() {
  magnetic_field_ = NULL;
}

Magnetic::~Magnetic() {
  // @@protoc_insertion_point(destructor:sensor_msgs.msgs.Magnetic)
  SharedDtor();
}

void Magnetic::SharedDtor() {
  if (this != internal_default_instance()) delete magnetic_field_;
}

void Magnetic::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Magnetic::descriptor() {
  ::protobuf_SensorMagnetic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SensorMagnetic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Magnetic& Magnetic::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_SensorMagnetic_2eproto::scc_info_Magnetic.base);
  return *internal_default_instance();
}


void Magnetic::Clear() {
// @@protoc_insertion_point(message_clear_start:sensor_msgs.msgs.Magnetic)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  magnetic_field_covariance_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(magnetic_field_ != NULL);
    magnetic_field_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Magnetic::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sensor_msgs.msgs.Magnetic)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Vector3d magnetic_field = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_magnetic_field()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float magnetic_field_covariance = 2 [packed = true];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_magnetic_field_covariance())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 18u, input, this->mutable_magnetic_field_covariance())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sensor_msgs.msgs.Magnetic)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sensor_msgs.msgs.Magnetic)
  return false;
#undef DO_
}

void Magnetic::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sensor_msgs.msgs.Magnetic)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Vector3d magnetic_field = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_magnetic_field(), output);
  }

  // repeated float magnetic_field_covariance = 2 [packed = true];
  if (this->magnetic_field_covariance_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _magnetic_field_covariance_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->magnetic_field_covariance().data(), this->magnetic_field_covariance_size(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sensor_msgs.msgs.Magnetic)
}

::google::protobuf::uint8* Magnetic::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:sensor_msgs.msgs.Magnetic)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Vector3d magnetic_field = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_magnetic_field(), deterministic, target);
  }

  // repeated float magnetic_field_covariance = 2 [packed = true];
  if (this->magnetic_field_covariance_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _magnetic_field_covariance_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->magnetic_field_covariance_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sensor_msgs.msgs.Magnetic)
  return target;
}

size_t Magnetic::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sensor_msgs.msgs.Magnetic)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required .gazebo.msgs.Vector3d magnetic_field = 1;
  if (has_magnetic_field()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *magnetic_field_);
  }
  // repeated float magnetic_field_covariance = 2 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->magnetic_field_covariance_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _magnetic_field_covariance_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Magnetic::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sensor_msgs.msgs.Magnetic)
  GOOGLE_DCHECK_NE(&from, this);
  const Magnetic* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Magnetic>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sensor_msgs.msgs.Magnetic)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sensor_msgs.msgs.Magnetic)
    MergeFrom(*source);
  }
}

void Magnetic::MergeFrom(const Magnetic& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sensor_msgs.msgs.Magnetic)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  magnetic_field_covariance_.MergeFrom(from.magnetic_field_covariance_);
  if (from.has_magnetic_field()) {
    mutable_magnetic_field()->::gazebo::msgs::Vector3d::MergeFrom(from.magnetic_field());
  }
}

void Magnetic::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sensor_msgs.msgs.Magnetic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Magnetic::CopyFrom(const Magnetic& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sensor_msgs.msgs.Magnetic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Magnetic::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (has_magnetic_field()) {
    if (!this->magnetic_field_->IsInitialized()) return false;
  }
  return true;
}

void Magnetic::Swap(Magnetic* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Magnetic::InternalSwap(Magnetic* other) {
  using std::swap;
  magnetic_field_covariance_.InternalSwap(&other->magnetic_field_covariance_);
  swap(magnetic_field_, other->magnetic_field_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Magnetic::GetMetadata() const {
  protobuf_SensorMagnetic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SensorMagnetic_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace sensor_msgs
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::sensor_msgs::msgs::Magnetic* Arena::CreateMaybeMessage< ::sensor_msgs::msgs::Magnetic >(Arena* arena) {
  return Arena::CreateInternal< ::sensor_msgs::msgs::Magnetic >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
