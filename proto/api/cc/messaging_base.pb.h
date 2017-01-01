// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messaging_base.proto

#ifndef PROTOBUF_messaging_5fbase_2eproto__INCLUDED
#define PROTOBUF_messaging_5fbase_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "peers.pb.h"
#include "group_base.pb.h"
// @@protoc_insertion_point(includes)

namespace zproto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_messaging_5fbase_2eproto();
void protobuf_AssignDesc_messaging_5fbase_2eproto();
void protobuf_ShutdownFile_messaging_5fbase_2eproto();

class InstantMessage;
class MessageContainer;

enum MessageType {
  TEXT = 0,
  AUDIO = 1,
  VIDEO = 2,
  MessageType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MessageType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MessageType_IsValid(int value);
const MessageType MessageType_MIN = TEXT;
const MessageType MessageType_MAX = VIDEO;
const int MessageType_ARRAYSIZE = MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageType_descriptor();
inline const ::std::string& MessageType_Name(MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageType_descriptor(), value);
}
inline bool MessageType_Parse(
    const ::std::string& name, MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageType>(
    MessageType_descriptor(), name, value);
}
enum MessageState {
  SENT = 0,
  RECEIVED = 1,
  READ = 2,
  MessageState_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MessageState_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MessageState_IsValid(int value);
const MessageState MessageState_MIN = SENT;
const MessageState MessageState_MAX = READ;
const int MessageState_ARRAYSIZE = MessageState_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageState_descriptor();
inline const ::std::string& MessageState_Name(MessageState value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageState_descriptor(), value);
}
inline bool MessageState_Parse(
    const ::std::string& name, MessageState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageState>(
    MessageState_descriptor(), name, value);
}
enum ListLoadMode {
  FORWARD = 0,
  BACKWARD = 1,
  BOTH = 2,
  ListLoadMode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ListLoadMode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ListLoadMode_IsValid(int value);
const ListLoadMode ListLoadMode_MIN = FORWARD;
const ListLoadMode ListLoadMode_MAX = BOTH;
const int ListLoadMode_ARRAYSIZE = ListLoadMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* ListLoadMode_descriptor();
inline const ::std::string& ListLoadMode_Name(ListLoadMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    ListLoadMode_descriptor(), value);
}
inline bool ListLoadMode_Parse(
    const ::std::string& name, ListLoadMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ListLoadMode>(
    ListLoadMode_descriptor(), name, value);
}
// ===================================================================

class InstantMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.InstantMessage) */ {
 public:
  InstantMessage();
  virtual ~InstantMessage();

  InstantMessage(const InstantMessage& from);

  inline InstantMessage& operator=(const InstantMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const InstantMessage& default_instance();

  void Swap(InstantMessage* other);

  // implements Message ----------------------------------------------

  inline InstantMessage* New() const { return New(NULL); }

  InstantMessage* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(InstantMessage* other);
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

  // optional .zproto.MessageType message_type = 1;
  void clear_message_type();
  static const int kMessageTypeFieldNumber = 1;
  ::zproto::MessageType message_type() const;
  void set_message_type(::zproto::MessageType value);

  // optional bytes message_data = 2;
  void clear_message_data();
  static const int kMessageDataFieldNumber = 2;
  const ::std::string& message_data() const;
  void set_message_data(const ::std::string& value);
  void set_message_data(const char* value);
  void set_message_data(const void* value, size_t size);
  ::std::string* mutable_message_data();
  ::std::string* release_message_data();
  void set_allocated_message_data(::std::string* message_data);

  // @@protoc_insertion_point(class_scope:zproto.InstantMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr message_data_;
  int message_type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_messaging_5fbase_2eproto();
  friend void protobuf_AssignDesc_messaging_5fbase_2eproto();
  friend void protobuf_ShutdownFile_messaging_5fbase_2eproto();

  void InitAsDefaultInstance();
  static InstantMessage* default_instance_;
};
// -------------------------------------------------------------------

class MessageContainer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.MessageContainer) */ {
 public:
  MessageContainer();
  virtual ~MessageContainer();

  MessageContainer(const MessageContainer& from);

  inline MessageContainer& operator=(const MessageContainer& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MessageContainer& default_instance();

  void Swap(MessageContainer* other);

  // implements Message ----------------------------------------------

  inline MessageContainer* New() const { return New(NULL); }

  MessageContainer* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MessageContainer* other);
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

  // optional string sender_uid = 1;
  void clear_sender_uid();
  static const int kSenderUidFieldNumber = 1;
  const ::std::string& sender_uid() const;
  void set_sender_uid(const ::std::string& value);
  void set_sender_uid(const char* value);
  void set_sender_uid(const char* value, size_t size);
  ::std::string* mutable_sender_uid();
  ::std::string* release_sender_uid();
  void set_allocated_sender_uid(::std::string* sender_uid);

  // optional int64 rid = 2;
  void clear_rid();
  static const int kRidFieldNumber = 2;
  ::google::protobuf::int64 rid() const;
  void set_rid(::google::protobuf::int64 value);

  // optional int64 date = 3;
  void clear_date();
  static const int kDateFieldNumber = 3;
  ::google::protobuf::int64 date() const;
  void set_date(::google::protobuf::int64 value);

  // optional .zproto.InstantMessage message = 5;
  bool has_message() const;
  void clear_message();
  static const int kMessageFieldNumber = 5;
  const ::zproto::InstantMessage& message() const;
  ::zproto::InstantMessage* mutable_message();
  ::zproto::InstantMessage* release_message();
  void set_allocated_message(::zproto::InstantMessage* message);

  // optional .zproto.MessageState state = 6;
  void clear_state();
  static const int kStateFieldNumber = 6;
  ::zproto::MessageState state() const;
  void set_state(::zproto::MessageState value);

  // @@protoc_insertion_point(class_scope:zproto.MessageContainer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr sender_uid_;
  ::google::protobuf::int64 rid_;
  ::google::protobuf::int64 date_;
  ::zproto::InstantMessage* message_;
  int state_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_messaging_5fbase_2eproto();
  friend void protobuf_AssignDesc_messaging_5fbase_2eproto();
  friend void protobuf_ShutdownFile_messaging_5fbase_2eproto();

  void InitAsDefaultInstance();
  static MessageContainer* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// InstantMessage

// optional .zproto.MessageType message_type = 1;
inline void InstantMessage::clear_message_type() {
  message_type_ = 0;
}
inline ::zproto::MessageType InstantMessage::message_type() const {
  // @@protoc_insertion_point(field_get:zproto.InstantMessage.message_type)
  return static_cast< ::zproto::MessageType >(message_type_);
}
inline void InstantMessage::set_message_type(::zproto::MessageType value) {
  
  message_type_ = value;
  // @@protoc_insertion_point(field_set:zproto.InstantMessage.message_type)
}

// optional bytes message_data = 2;
inline void InstantMessage::clear_message_data() {
  message_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& InstantMessage::message_data() const {
  // @@protoc_insertion_point(field_get:zproto.InstantMessage.message_data)
  return message_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InstantMessage::set_message_data(const ::std::string& value) {
  
  message_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.InstantMessage.message_data)
}
inline void InstantMessage::set_message_data(const char* value) {
  
  message_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.InstantMessage.message_data)
}
inline void InstantMessage::set_message_data(const void* value, size_t size) {
  
  message_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.InstantMessage.message_data)
}
inline ::std::string* InstantMessage::mutable_message_data() {
  
  // @@protoc_insertion_point(field_mutable:zproto.InstantMessage.message_data)
  return message_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InstantMessage::release_message_data() {
  // @@protoc_insertion_point(field_release:zproto.InstantMessage.message_data)
  
  return message_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InstantMessage::set_allocated_message_data(::std::string* message_data) {
  if (message_data != NULL) {
    
  } else {
    
  }
  message_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message_data);
  // @@protoc_insertion_point(field_set_allocated:zproto.InstantMessage.message_data)
}

// -------------------------------------------------------------------

// MessageContainer

// optional string sender_uid = 1;
inline void MessageContainer::clear_sender_uid() {
  sender_uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MessageContainer::sender_uid() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.sender_uid)
  return sender_uid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageContainer::set_sender_uid(const ::std::string& value) {
  
  sender_uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.MessageContainer.sender_uid)
}
inline void MessageContainer::set_sender_uid(const char* value) {
  
  sender_uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.MessageContainer.sender_uid)
}
inline void MessageContainer::set_sender_uid(const char* value, size_t size) {
  
  sender_uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.MessageContainer.sender_uid)
}
inline ::std::string* MessageContainer::mutable_sender_uid() {
  
  // @@protoc_insertion_point(field_mutable:zproto.MessageContainer.sender_uid)
  return sender_uid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageContainer::release_sender_uid() {
  // @@protoc_insertion_point(field_release:zproto.MessageContainer.sender_uid)
  
  return sender_uid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageContainer::set_allocated_sender_uid(::std::string* sender_uid) {
  if (sender_uid != NULL) {
    
  } else {
    
  }
  sender_uid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sender_uid);
  // @@protoc_insertion_point(field_set_allocated:zproto.MessageContainer.sender_uid)
}

// optional int64 rid = 2;
inline void MessageContainer::clear_rid() {
  rid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MessageContainer::rid() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.rid)
  return rid_;
}
inline void MessageContainer::set_rid(::google::protobuf::int64 value) {
  
  rid_ = value;
  // @@protoc_insertion_point(field_set:zproto.MessageContainer.rid)
}

// optional int64 date = 3;
inline void MessageContainer::clear_date() {
  date_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MessageContainer::date() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.date)
  return date_;
}
inline void MessageContainer::set_date(::google::protobuf::int64 value) {
  
  date_ = value;
  // @@protoc_insertion_point(field_set:zproto.MessageContainer.date)
}

// optional .zproto.InstantMessage message = 5;
inline bool MessageContainer::has_message() const {
  return !_is_default_instance_ && message_ != NULL;
}
inline void MessageContainer::clear_message() {
  if (GetArenaNoVirtual() == NULL && message_ != NULL) delete message_;
  message_ = NULL;
}
inline const ::zproto::InstantMessage& MessageContainer::message() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.message)
  return message_ != NULL ? *message_ : *default_instance_->message_;
}
inline ::zproto::InstantMessage* MessageContainer::mutable_message() {
  
  if (message_ == NULL) {
    message_ = new ::zproto::InstantMessage;
  }
  // @@protoc_insertion_point(field_mutable:zproto.MessageContainer.message)
  return message_;
}
inline ::zproto::InstantMessage* MessageContainer::release_message() {
  // @@protoc_insertion_point(field_release:zproto.MessageContainer.message)
  
  ::zproto::InstantMessage* temp = message_;
  message_ = NULL;
  return temp;
}
inline void MessageContainer::set_allocated_message(::zproto::InstantMessage* message) {
  delete message_;
  message_ = message;
  if (message) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:zproto.MessageContainer.message)
}

// optional .zproto.MessageState state = 6;
inline void MessageContainer::clear_state() {
  state_ = 0;
}
inline ::zproto::MessageState MessageContainer::state() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.state)
  return static_cast< ::zproto::MessageState >(state_);
}
inline void MessageContainer::set_state(::zproto::MessageState value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:zproto.MessageContainer.state)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::zproto::MessageType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::zproto::MessageType>() {
  return ::zproto::MessageType_descriptor();
}
template <> struct is_proto_enum< ::zproto::MessageState> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::zproto::MessageState>() {
  return ::zproto::MessageState_descriptor();
}
template <> struct is_proto_enum< ::zproto::ListLoadMode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::zproto::ListLoadMode>() {
  return ::zproto::ListLoadMode_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_messaging_5fbase_2eproto__INCLUDED
