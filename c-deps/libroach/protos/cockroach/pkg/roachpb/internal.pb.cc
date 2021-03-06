// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cockroach/pkg/roachpb/internal.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cockroach/pkg/roachpb/internal.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace cockroach {
namespace roachpb {
class InternalTimeSeriesDataDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<InternalTimeSeriesData>
     _instance;
} _InternalTimeSeriesData_default_instance_;
class InternalTimeSeriesSampleDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<InternalTimeSeriesSample>
     _instance;
} _InternalTimeSeriesSample_default_instance_;

namespace protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _InternalTimeSeriesData_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_InternalTimeSeriesData_default_instance_);_InternalTimeSeriesSample_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_InternalTimeSeriesSample_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InternalTimeSeriesData::kStartTimestampNanosFieldNumber;
const int InternalTimeSeriesData::kSampleDurationNanosFieldNumber;
const int InternalTimeSeriesData::kSamplesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InternalTimeSeriesData::InternalTimeSeriesData()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.roachpb.InternalTimeSeriesData)
}
InternalTimeSeriesData::InternalTimeSeriesData(const InternalTimeSeriesData& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      samples_(from.samples_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&start_timestamp_nanos_, &from.start_timestamp_nanos_,
    static_cast<size_t>(reinterpret_cast<char*>(&sample_duration_nanos_) -
    reinterpret_cast<char*>(&start_timestamp_nanos_)) + sizeof(sample_duration_nanos_));
  // @@protoc_insertion_point(copy_constructor:cockroach.roachpb.InternalTimeSeriesData)
}

void InternalTimeSeriesData::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&start_timestamp_nanos_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sample_duration_nanos_) -
      reinterpret_cast<char*>(&start_timestamp_nanos_)) + sizeof(sample_duration_nanos_));
}

InternalTimeSeriesData::~InternalTimeSeriesData() {
  // @@protoc_insertion_point(destructor:cockroach.roachpb.InternalTimeSeriesData)
  SharedDtor();
}

void InternalTimeSeriesData::SharedDtor() {
}

void InternalTimeSeriesData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const InternalTimeSeriesData& InternalTimeSeriesData::default_instance() {
  protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto::InitDefaults();
  return *internal_default_instance();
}

InternalTimeSeriesData* InternalTimeSeriesData::New(::google::protobuf::Arena* arena) const {
  InternalTimeSeriesData* n = new InternalTimeSeriesData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InternalTimeSeriesData::Clear() {
// @@protoc_insertion_point(message_clear_start:cockroach.roachpb.InternalTimeSeriesData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  samples_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&start_timestamp_nanos_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&sample_duration_nanos_) -
        reinterpret_cast<char*>(&start_timestamp_nanos_)) + sizeof(sample_duration_nanos_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool InternalTimeSeriesData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cockroach.roachpb.InternalTimeSeriesData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_start_timestamp_nanos();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &start_timestamp_nanos_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_sample_duration_nanos();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sample_duration_nanos_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_samples()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.roachpb.InternalTimeSeriesData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.roachpb.InternalTimeSeriesData)
  return false;
#undef DO_
}

void InternalTimeSeriesData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.roachpb.InternalTimeSeriesData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->start_timestamp_nanos(), output);
  }

  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sample_duration_nanos(), output);
  }

  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->samples_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->samples(static_cast<int>(i)), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cockroach.roachpb.InternalTimeSeriesData)
}

size_t InternalTimeSeriesData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cockroach.roachpb.InternalTimeSeriesData)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  {
    unsigned int count = static_cast<unsigned int>(this->samples_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->samples(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    if (has_start_timestamp_nanos()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->start_timestamp_nanos());
    }

    if (has_sample_duration_nanos()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->sample_duration_nanos());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InternalTimeSeriesData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const InternalTimeSeriesData*>(&from));
}

void InternalTimeSeriesData::MergeFrom(const InternalTimeSeriesData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cockroach.roachpb.InternalTimeSeriesData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  samples_.MergeFrom(from.samples_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      start_timestamp_nanos_ = from.start_timestamp_nanos_;
    }
    if (cached_has_bits & 0x00000002u) {
      sample_duration_nanos_ = from.sample_duration_nanos_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void InternalTimeSeriesData::CopyFrom(const InternalTimeSeriesData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cockroach.roachpb.InternalTimeSeriesData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InternalTimeSeriesData::IsInitialized() const {
  return true;
}

void InternalTimeSeriesData::Swap(InternalTimeSeriesData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InternalTimeSeriesData::InternalSwap(InternalTimeSeriesData* other) {
  using std::swap;
  samples_.InternalSwap(&other->samples_);
  swap(start_timestamp_nanos_, other->start_timestamp_nanos_);
  swap(sample_duration_nanos_, other->sample_duration_nanos_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string InternalTimeSeriesData::GetTypeName() const {
  return "cockroach.roachpb.InternalTimeSeriesData";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InternalTimeSeriesData

bool InternalTimeSeriesData::has_start_timestamp_nanos() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void InternalTimeSeriesData::set_has_start_timestamp_nanos() {
  _has_bits_[0] |= 0x00000001u;
}
void InternalTimeSeriesData::clear_has_start_timestamp_nanos() {
  _has_bits_[0] &= ~0x00000001u;
}
void InternalTimeSeriesData::clear_start_timestamp_nanos() {
  start_timestamp_nanos_ = GOOGLE_LONGLONG(0);
  clear_has_start_timestamp_nanos();
}
::google::protobuf::int64 InternalTimeSeriesData::start_timestamp_nanos() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.start_timestamp_nanos)
  return start_timestamp_nanos_;
}
void InternalTimeSeriesData::set_start_timestamp_nanos(::google::protobuf::int64 value) {
  set_has_start_timestamp_nanos();
  start_timestamp_nanos_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesData.start_timestamp_nanos)
}

bool InternalTimeSeriesData::has_sample_duration_nanos() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void InternalTimeSeriesData::set_has_sample_duration_nanos() {
  _has_bits_[0] |= 0x00000002u;
}
void InternalTimeSeriesData::clear_has_sample_duration_nanos() {
  _has_bits_[0] &= ~0x00000002u;
}
void InternalTimeSeriesData::clear_sample_duration_nanos() {
  sample_duration_nanos_ = GOOGLE_LONGLONG(0);
  clear_has_sample_duration_nanos();
}
::google::protobuf::int64 InternalTimeSeriesData::sample_duration_nanos() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.sample_duration_nanos)
  return sample_duration_nanos_;
}
void InternalTimeSeriesData::set_sample_duration_nanos(::google::protobuf::int64 value) {
  set_has_sample_duration_nanos();
  sample_duration_nanos_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesData.sample_duration_nanos)
}

int InternalTimeSeriesData::samples_size() const {
  return samples_.size();
}
void InternalTimeSeriesData::clear_samples() {
  samples_.Clear();
}
const ::cockroach::roachpb::InternalTimeSeriesSample& InternalTimeSeriesData::samples(int index) const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Get(index);
}
::cockroach::roachpb::InternalTimeSeriesSample* InternalTimeSeriesData::mutable_samples(int index) {
  // @@protoc_insertion_point(field_mutable:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Mutable(index);
}
::cockroach::roachpb::InternalTimeSeriesSample* InternalTimeSeriesData::add_samples() {
  // @@protoc_insertion_point(field_add:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Add();
}
::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >*
InternalTimeSeriesData::mutable_samples() {
  // @@protoc_insertion_point(field_mutable_list:cockroach.roachpb.InternalTimeSeriesData.samples)
  return &samples_;
}
const ::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >&
InternalTimeSeriesData::samples() const {
  // @@protoc_insertion_point(field_list:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InternalTimeSeriesSample::kOffsetFieldNumber;
const int InternalTimeSeriesSample::kSumFieldNumber;
const int InternalTimeSeriesSample::kCountFieldNumber;
const int InternalTimeSeriesSample::kMaxFieldNumber;
const int InternalTimeSeriesSample::kMinFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InternalTimeSeriesSample::InternalTimeSeriesSample()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.roachpb.InternalTimeSeriesSample)
}
InternalTimeSeriesSample::InternalTimeSeriesSample(const InternalTimeSeriesSample& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&offset_, &from.offset_,
    static_cast<size_t>(reinterpret_cast<char*>(&min_) -
    reinterpret_cast<char*>(&offset_)) + sizeof(min_));
  // @@protoc_insertion_point(copy_constructor:cockroach.roachpb.InternalTimeSeriesSample)
}

void InternalTimeSeriesSample::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&offset_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&min_) -
      reinterpret_cast<char*>(&offset_)) + sizeof(min_));
}

InternalTimeSeriesSample::~InternalTimeSeriesSample() {
  // @@protoc_insertion_point(destructor:cockroach.roachpb.InternalTimeSeriesSample)
  SharedDtor();
}

void InternalTimeSeriesSample::SharedDtor() {
}

void InternalTimeSeriesSample::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const InternalTimeSeriesSample& InternalTimeSeriesSample::default_instance() {
  protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto::InitDefaults();
  return *internal_default_instance();
}

InternalTimeSeriesSample* InternalTimeSeriesSample::New(::google::protobuf::Arena* arena) const {
  InternalTimeSeriesSample* n = new InternalTimeSeriesSample;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InternalTimeSeriesSample::Clear() {
// @@protoc_insertion_point(message_clear_start:cockroach.roachpb.InternalTimeSeriesSample)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 31u) {
    ::memset(&offset_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&min_) -
        reinterpret_cast<char*>(&offset_)) + sizeof(min_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool InternalTimeSeriesSample::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cockroach.roachpb.InternalTimeSeriesSample)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_offset();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &offset_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          set_has_count();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {
          set_has_sum();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sum_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double max = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {
          set_has_max();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double min = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(73u /* 73 & 0xFF */)) {
          set_has_min();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &min_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.roachpb.InternalTimeSeriesSample)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.roachpb.InternalTimeSeriesSample)
  return false;
#undef DO_
}

void InternalTimeSeriesSample::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.roachpb.InternalTimeSeriesSample)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->offset(), output);
  }

  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->count(), output);
  }

  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->sum(), output);
  }

  // optional double max = 8;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->max(), output);
  }

  // optional double min = 9;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->min(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cockroach.roachpb.InternalTimeSeriesSample)
}

size_t InternalTimeSeriesSample::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cockroach.roachpb.InternalTimeSeriesSample)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 31u) {
    if (has_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offset());
    }

    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->count());
    }

    if (has_sum()) {
      total_size += 1 + 8;
    }

    // optional double max = 8;
    if (has_max()) {
      total_size += 1 + 8;
    }

    // optional double min = 9;
    if (has_min()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InternalTimeSeriesSample::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const InternalTimeSeriesSample*>(&from));
}

void InternalTimeSeriesSample::MergeFrom(const InternalTimeSeriesSample& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cockroach.roachpb.InternalTimeSeriesSample)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      offset_ = from.offset_;
    }
    if (cached_has_bits & 0x00000002u) {
      count_ = from.count_;
    }
    if (cached_has_bits & 0x00000004u) {
      sum_ = from.sum_;
    }
    if (cached_has_bits & 0x00000008u) {
      max_ = from.max_;
    }
    if (cached_has_bits & 0x00000010u) {
      min_ = from.min_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void InternalTimeSeriesSample::CopyFrom(const InternalTimeSeriesSample& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cockroach.roachpb.InternalTimeSeriesSample)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InternalTimeSeriesSample::IsInitialized() const {
  return true;
}

void InternalTimeSeriesSample::Swap(InternalTimeSeriesSample* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InternalTimeSeriesSample::InternalSwap(InternalTimeSeriesSample* other) {
  using std::swap;
  swap(offset_, other->offset_);
  swap(count_, other->count_);
  swap(sum_, other->sum_);
  swap(max_, other->max_);
  swap(min_, other->min_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string InternalTimeSeriesSample::GetTypeName() const {
  return "cockroach.roachpb.InternalTimeSeriesSample";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InternalTimeSeriesSample

bool InternalTimeSeriesSample::has_offset() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void InternalTimeSeriesSample::set_has_offset() {
  _has_bits_[0] |= 0x00000001u;
}
void InternalTimeSeriesSample::clear_has_offset() {
  _has_bits_[0] &= ~0x00000001u;
}
void InternalTimeSeriesSample::clear_offset() {
  offset_ = 0;
  clear_has_offset();
}
::google::protobuf::int32 InternalTimeSeriesSample::offset() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.offset)
  return offset_;
}
void InternalTimeSeriesSample::set_offset(::google::protobuf::int32 value) {
  set_has_offset();
  offset_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.offset)
}

bool InternalTimeSeriesSample::has_sum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void InternalTimeSeriesSample::set_has_sum() {
  _has_bits_[0] |= 0x00000004u;
}
void InternalTimeSeriesSample::clear_has_sum() {
  _has_bits_[0] &= ~0x00000004u;
}
void InternalTimeSeriesSample::clear_sum() {
  sum_ = 0;
  clear_has_sum();
}
double InternalTimeSeriesSample::sum() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.sum)
  return sum_;
}
void InternalTimeSeriesSample::set_sum(double value) {
  set_has_sum();
  sum_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.sum)
}

bool InternalTimeSeriesSample::has_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void InternalTimeSeriesSample::set_has_count() {
  _has_bits_[0] |= 0x00000002u;
}
void InternalTimeSeriesSample::clear_has_count() {
  _has_bits_[0] &= ~0x00000002u;
}
void InternalTimeSeriesSample::clear_count() {
  count_ = 0u;
  clear_has_count();
}
::google::protobuf::uint32 InternalTimeSeriesSample::count() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.count)
  return count_;
}
void InternalTimeSeriesSample::set_count(::google::protobuf::uint32 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.count)
}

// optional double max = 8;
bool InternalTimeSeriesSample::has_max() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void InternalTimeSeriesSample::set_has_max() {
  _has_bits_[0] |= 0x00000008u;
}
void InternalTimeSeriesSample::clear_has_max() {
  _has_bits_[0] &= ~0x00000008u;
}
void InternalTimeSeriesSample::clear_max() {
  max_ = 0;
  clear_has_max();
}
double InternalTimeSeriesSample::max() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.max)
  return max_;
}
void InternalTimeSeriesSample::set_max(double value) {
  set_has_max();
  max_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.max)
}

// optional double min = 9;
bool InternalTimeSeriesSample::has_min() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void InternalTimeSeriesSample::set_has_min() {
  _has_bits_[0] |= 0x00000010u;
}
void InternalTimeSeriesSample::clear_has_min() {
  _has_bits_[0] &= ~0x00000010u;
}
void InternalTimeSeriesSample::clear_min() {
  min_ = 0;
  clear_has_min();
}
double InternalTimeSeriesSample::min() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.min)
  return min_;
}
void InternalTimeSeriesSample::set_min(double value) {
  set_has_min();
  min_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.min)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace roachpb
}  // namespace cockroach

// @@protoc_insertion_point(global_scope)
