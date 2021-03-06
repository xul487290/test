// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef PROTOBUF_msg_2eproto__INCLUDED
#define PROTOBUF_msg_2eproto__INCLUDED

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
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace proto3_proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_msg_2eproto();
void protobuf_AssignDesc_msg_2eproto();
void protobuf_ShutdownFile_msg_2eproto();

class Message;
class MessageArray;

enum Message_Humour {
  Message_Humour_UNKNOWN = 0,
  Message_Humour_PUNS = 1,
  Message_Humour_SLAPSTICK = 2,
  Message_Humour_BILL_BAILEY = 3,
  Message_Humour_Message_Humour_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Message_Humour_Message_Humour_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Message_Humour_IsValid(int value);
const Message_Humour Message_Humour_Humour_MIN = Message_Humour_UNKNOWN;
const Message_Humour Message_Humour_Humour_MAX = Message_Humour_BILL_BAILEY;
const int Message_Humour_Humour_ARRAYSIZE = Message_Humour_Humour_MAX + 1;

const ::google::protobuf::EnumDescriptor* Message_Humour_descriptor();
inline const ::std::string& Message_Humour_Name(Message_Humour value) {
  return ::google::protobuf::internal::NameOfEnum(
    Message_Humour_descriptor(), value);
}
inline bool Message_Humour_Parse(
    const ::std::string& name, Message_Humour* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Message_Humour>(
    Message_Humour_descriptor(), name, value);
}
// ===================================================================

class Message : public ::google::protobuf::Message {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Message& default_instance();

  void Swap(Message* other);

  // implements Message ----------------------------------------------

  inline Message* New() const { return New(NULL); }

  Message* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
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
  void InternalSwap(Message* other);
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

  typedef Message_Humour Humour;
  static const Humour UNKNOWN = Message_Humour_UNKNOWN;
  static const Humour PUNS = Message_Humour_PUNS;
  static const Humour SLAPSTICK = Message_Humour_SLAPSTICK;
  static const Humour BILL_BAILEY = Message_Humour_BILL_BAILEY;
  static inline bool Humour_IsValid(int value) {
    return Message_Humour_IsValid(value);
  }
  static const Humour Humour_MIN =
    Message_Humour_Humour_MIN;
  static const Humour Humour_MAX =
    Message_Humour_Humour_MAX;
  static const int Humour_ARRAYSIZE =
    Message_Humour_Humour_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Humour_descriptor() {
    return Message_Humour_descriptor();
  }
  static inline const ::std::string& Humour_Name(Humour value) {
    return Message_Humour_Name(value);
  }
  static inline bool Humour_Parse(const ::std::string& name,
      Humour* value) {
    return Message_Humour_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string name = 1;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional .proto3_proto.Message.Humour hilarity = 2;
  inline void clear_hilarity();
  static const int kHilarityFieldNumber = 2;
  inline ::proto3_proto::Message_Humour hilarity() const;
  inline void set_hilarity(::proto3_proto::Message_Humour value);

  // optional uint32 height_in_cm = 3;
  inline void clear_height_in_cm();
  static const int kHeightInCmFieldNumber = 3;
  inline ::google::protobuf::uint32 height_in_cm() const;
  inline void set_height_in_cm(::google::protobuf::uint32 value);

  // optional bytes data = 4;
  inline void clear_data();
  static const int kDataFieldNumber = 4;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // optional int64 result_count = 7;
  inline void clear_result_count();
  static const int kResultCountFieldNumber = 7;
  inline ::google::protobuf::int64 result_count() const;
  inline void set_result_count(::google::protobuf::int64 value);

  // optional bool true_scotsman = 8;
  inline void clear_true_scotsman();
  static const int kTrueScotsmanFieldNumber = 8;
  inline bool true_scotsman() const;
  inline void set_true_scotsman(bool value);

  // optional float score = 9;
  inline void clear_score();
  static const int kScoreFieldNumber = 9;
  inline float score() const;
  inline void set_score(float value);

  // repeated uint64 key = 5 [packed = true];
  inline int key_size() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 5;
  inline ::google::protobuf::uint64 key(int index) const;
  inline void set_key(int index, ::google::protobuf::uint64 value);
  inline void add_key(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      key() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_key();

  // @@protoc_insertion_point(class_scope:proto3_proto.Message)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  int hilarity_;
  ::google::protobuf::uint32 height_in_cm_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::int64 result_count_;
  bool true_scotsman_;
  float score_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > key_;
  mutable int _key_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_msg_2eproto();
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();

  void InitAsDefaultInstance();
  static Message* default_instance_;
};
// -------------------------------------------------------------------

class MessageArray : public ::google::protobuf::Message {
 public:
  MessageArray();
  virtual ~MessageArray();

  MessageArray(const MessageArray& from);

  inline MessageArray& operator=(const MessageArray& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MessageArray& default_instance();

  void Swap(MessageArray* other);

  // implements Message ----------------------------------------------

  inline MessageArray* New() const { return New(NULL); }

  MessageArray* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageArray& from);
  void MergeFrom(const MessageArray& from);
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
  void InternalSwap(MessageArray* other);
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

  // map<string, .proto3_proto.Message> msg_map = 1;
  inline int msg_map_size() const;
  inline void clear_msg_map();
  static const int kMsgMapFieldNumber = 1;
  inline const ::google::protobuf::Map< ::std::string, ::proto3_proto::Message >&
      msg_map() const;
  inline ::google::protobuf::Map< ::std::string, ::proto3_proto::Message >*
      mutable_msg_map();

  // @@protoc_insertion_point(class_scope:proto3_proto.MessageArray)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  typedef ::google::protobuf::internal::MapEntry<
      ::std::string, ::proto3_proto::Message,
      ::google::protobuf::FieldDescriptor::TYPE_STRING,
      ::google::protobuf::FieldDescriptor::TYPE_MESSAGE, 0>
      MessageArray_MsgMapEntry;
  ::google::protobuf::internal::MapField< ::std::string, ::proto3_proto::Message,::google::protobuf::FieldDescriptor::TYPE_STRING, ::google::protobuf::FieldDescriptor::TYPE_MESSAGE, 0 > msg_map_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_msg_2eproto();
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();

  void InitAsDefaultInstance();
  static MessageArray* default_instance_;
};
// ===================================================================


// ===================================================================

// Message

// optional string name = 1;
inline void Message::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Message::name() const {
  // @@protoc_insertion_point(field_get:proto3_proto.Message.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto3_proto.Message.name)
}
inline void Message::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto3_proto.Message.name)
}
inline void Message::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto3_proto.Message.name)
}
inline ::std::string* Message::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:proto3_proto.Message.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Message::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:proto3_proto.Message.name)
}

// optional .proto3_proto.Message.Humour hilarity = 2;
inline void Message::clear_hilarity() {
  hilarity_ = 0;
}
inline ::proto3_proto::Message_Humour Message::hilarity() const {
  // @@protoc_insertion_point(field_get:proto3_proto.Message.hilarity)
  return static_cast< ::proto3_proto::Message_Humour >(hilarity_);
}
inline void Message::set_hilarity(::proto3_proto::Message_Humour value) {
  
  hilarity_ = value;
  // @@protoc_insertion_point(field_set:proto3_proto.Message.hilarity)
}

// optional uint32 height_in_cm = 3;
inline void Message::clear_height_in_cm() {
  height_in_cm_ = 0u;
}
inline ::google::protobuf::uint32 Message::height_in_cm() const {
  // @@protoc_insertion_point(field_get:proto3_proto.Message.height_in_cm)
  return height_in_cm_;
}
inline void Message::set_height_in_cm(::google::protobuf::uint32 value) {
  
  height_in_cm_ = value;
  // @@protoc_insertion_point(field_set:proto3_proto.Message.height_in_cm)
}

// optional bytes data = 4;
inline void Message::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Message::data() const {
  // @@protoc_insertion_point(field_get:proto3_proto.Message.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto3_proto.Message.data)
}
inline void Message::set_data(const char* value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto3_proto.Message.data)
}
inline void Message::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto3_proto.Message.data)
}
inline ::std::string* Message::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:proto3_proto.Message.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Message::release_data() {
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:proto3_proto.Message.data)
}

// optional int64 result_count = 7;
inline void Message::clear_result_count() {
  result_count_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Message::result_count() const {
  // @@protoc_insertion_point(field_get:proto3_proto.Message.result_count)
  return result_count_;
}
inline void Message::set_result_count(::google::protobuf::int64 value) {
  
  result_count_ = value;
  // @@protoc_insertion_point(field_set:proto3_proto.Message.result_count)
}

// optional bool true_scotsman = 8;
inline void Message::clear_true_scotsman() {
  true_scotsman_ = false;
}
inline bool Message::true_scotsman() const {
  // @@protoc_insertion_point(field_get:proto3_proto.Message.true_scotsman)
  return true_scotsman_;
}
inline void Message::set_true_scotsman(bool value) {
  
  true_scotsman_ = value;
  // @@protoc_insertion_point(field_set:proto3_proto.Message.true_scotsman)
}

// optional float score = 9;
inline void Message::clear_score() {
  score_ = 0;
}
inline float Message::score() const {
  // @@protoc_insertion_point(field_get:proto3_proto.Message.score)
  return score_;
}
inline void Message::set_score(float value) {
  
  score_ = value;
  // @@protoc_insertion_point(field_set:proto3_proto.Message.score)
}

// repeated uint64 key = 5 [packed = true];
inline int Message::key_size() const {
  return key_.size();
}
inline void Message::clear_key() {
  key_.Clear();
}
inline ::google::protobuf::uint64 Message::key(int index) const {
  // @@protoc_insertion_point(field_get:proto3_proto.Message.key)
  return key_.Get(index);
}
inline void Message::set_key(int index, ::google::protobuf::uint64 value) {
  key_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto3_proto.Message.key)
}
inline void Message::add_key(::google::protobuf::uint64 value) {
  key_.Add(value);
  // @@protoc_insertion_point(field_add:proto3_proto.Message.key)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
Message::key() const {
  // @@protoc_insertion_point(field_list:proto3_proto.Message.key)
  return key_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
Message::mutable_key() {
  // @@protoc_insertion_point(field_mutable_list:proto3_proto.Message.key)
  return &key_;
}

// -------------------------------------------------------------------

// MessageArray

// map<string, .proto3_proto.Message> msg_map = 1;
inline int MessageArray::msg_map_size() const {
  return msg_map_.size();
}
inline void MessageArray::clear_msg_map() {
  msg_map_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::proto3_proto::Message >&
MessageArray::msg_map() const {
  // @@protoc_insertion_point(field_map:proto3_proto.MessageArray.msg_map)
  return msg_map_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::proto3_proto::Message >*
MessageArray::mutable_msg_map() {
  // @@protoc_insertion_point(field_mutable_map:proto3_proto.MessageArray.msg_map)
  return msg_map_.MutableMap();
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto3_proto

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::proto3_proto::Message_Humour> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto3_proto::Message_Humour>() {
  return ::proto3_proto::Message_Humour_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_2eproto__INCLUDED
