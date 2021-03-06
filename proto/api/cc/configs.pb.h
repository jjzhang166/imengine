// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: configs.proto

#ifndef PROTOBUF_configs_2eproto__INCLUDED
#define PROTOBUF_configs_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace zproto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_configs_2eproto();
void protobuf_InitDefaults_configs_2eproto();
void protobuf_AssignDesc_configs_2eproto();
void protobuf_ShutdownFile_configs_2eproto();

class EditParameterReq;
class GetParametersReq;
class GetParametersRsp;
class Parameter;
class ParameterChangedNotify;

// ===================================================================

class Parameter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.Parameter) */ {
 public:
  Parameter();
  virtual ~Parameter();

  Parameter(const Parameter& from);

  inline Parameter& operator=(const Parameter& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Parameter& default_instance();

  static const Parameter* internal_default_instance();

  void Swap(Parameter* other);

  // implements Message ----------------------------------------------

  inline Parameter* New() const { return New(NULL); }

  Parameter* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Parameter* other);
  void UnsafeMergeFrom(const Parameter& from);
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

  // optional string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:zproto.Parameter)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_configs_2eproto_impl();
  friend void  protobuf_AddDesc_configs_2eproto_impl();
  friend void protobuf_AssignDesc_configs_2eproto();
  friend void protobuf_ShutdownFile_configs_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Parameter> Parameter_default_instance_;

// -------------------------------------------------------------------

class GetParametersReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.GetParametersReq) */ {
 public:
  GetParametersReq();
  virtual ~GetParametersReq();

  GetParametersReq(const GetParametersReq& from);

  inline GetParametersReq& operator=(const GetParametersReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetParametersReq& default_instance();

  static const GetParametersReq* internal_default_instance();

  void Swap(GetParametersReq* other);

  // implements Message ----------------------------------------------

  inline GetParametersReq* New() const { return New(NULL); }

  GetParametersReq* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GetParametersReq* other);
  void UnsafeMergeFrom(const GetParametersReq& from);
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

  // @@protoc_insertion_point(class_scope:zproto.GetParametersReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_configs_2eproto_impl();
  friend void  protobuf_AddDesc_configs_2eproto_impl();
  friend void protobuf_AssignDesc_configs_2eproto();
  friend void protobuf_ShutdownFile_configs_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<GetParametersReq> GetParametersReq_default_instance_;

// -------------------------------------------------------------------

class GetParametersRsp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.GetParametersRsp) */ {
 public:
  GetParametersRsp();
  virtual ~GetParametersRsp();

  GetParametersRsp(const GetParametersRsp& from);

  inline GetParametersRsp& operator=(const GetParametersRsp& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetParametersRsp& default_instance();

  static const GetParametersRsp* internal_default_instance();

  void Swap(GetParametersRsp* other);

  // implements Message ----------------------------------------------

  inline GetParametersRsp* New() const { return New(NULL); }

  GetParametersRsp* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GetParametersRsp* other);
  void UnsafeMergeFrom(const GetParametersRsp& from);
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

  // repeated .zproto.Parameter parameters = 1;
  int parameters_size() const;
  void clear_parameters();
  static const int kParametersFieldNumber = 1;
  const ::zproto::Parameter& parameters(int index) const;
  ::zproto::Parameter* mutable_parameters(int index);
  ::zproto::Parameter* add_parameters();
  ::google::protobuf::RepeatedPtrField< ::zproto::Parameter >*
      mutable_parameters();
  const ::google::protobuf::RepeatedPtrField< ::zproto::Parameter >&
      parameters() const;

  // @@protoc_insertion_point(class_scope:zproto.GetParametersRsp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::zproto::Parameter > parameters_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_configs_2eproto_impl();
  friend void  protobuf_AddDesc_configs_2eproto_impl();
  friend void protobuf_AssignDesc_configs_2eproto();
  friend void protobuf_ShutdownFile_configs_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<GetParametersRsp> GetParametersRsp_default_instance_;

// -------------------------------------------------------------------

class EditParameterReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.EditParameterReq) */ {
 public:
  EditParameterReq();
  virtual ~EditParameterReq();

  EditParameterReq(const EditParameterReq& from);

  inline EditParameterReq& operator=(const EditParameterReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EditParameterReq& default_instance();

  static const EditParameterReq* internal_default_instance();

  void Swap(EditParameterReq* other);

  // implements Message ----------------------------------------------

  inline EditParameterReq* New() const { return New(NULL); }

  EditParameterReq* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(EditParameterReq* other);
  void UnsafeMergeFrom(const EditParameterReq& from);
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

  // optional string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:zproto.EditParameterReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_configs_2eproto_impl();
  friend void  protobuf_AddDesc_configs_2eproto_impl();
  friend void protobuf_AssignDesc_configs_2eproto();
  friend void protobuf_ShutdownFile_configs_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<EditParameterReq> EditParameterReq_default_instance_;

// -------------------------------------------------------------------

class ParameterChangedNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.ParameterChangedNotify) */ {
 public:
  ParameterChangedNotify();
  virtual ~ParameterChangedNotify();

  ParameterChangedNotify(const ParameterChangedNotify& from);

  inline ParameterChangedNotify& operator=(const ParameterChangedNotify& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ParameterChangedNotify& default_instance();

  static const ParameterChangedNotify* internal_default_instance();

  void Swap(ParameterChangedNotify* other);

  // implements Message ----------------------------------------------

  inline ParameterChangedNotify* New() const { return New(NULL); }

  ParameterChangedNotify* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ParameterChangedNotify* other);
  void UnsafeMergeFrom(const ParameterChangedNotify& from);
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

  // optional string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:zproto.ParameterChangedNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_configs_2eproto_impl();
  friend void  protobuf_AddDesc_configs_2eproto_impl();
  friend void protobuf_AssignDesc_configs_2eproto();
  friend void protobuf_ShutdownFile_configs_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ParameterChangedNotify> ParameterChangedNotify_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Parameter

// optional string key = 1;
inline void Parameter::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::key() const {
  // @@protoc_insertion_point(field_get:zproto.Parameter.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.Parameter.key)
}
inline void Parameter::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.Parameter.key)
}
inline void Parameter::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.Parameter.key)
}
inline ::std::string* Parameter::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:zproto.Parameter.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_key() {
  // @@protoc_insertion_point(field_release:zproto.Parameter.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:zproto.Parameter.key)
}

// optional string value = 2;
inline void Parameter::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::value() const {
  // @@protoc_insertion_point(field_get:zproto.Parameter.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.Parameter.value)
}
inline void Parameter::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.Parameter.value)
}
inline void Parameter::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.Parameter.value)
}
inline ::std::string* Parameter::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:zproto.Parameter.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_value() {
  // @@protoc_insertion_point(field_release:zproto.Parameter.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:zproto.Parameter.value)
}

inline const Parameter* Parameter::internal_default_instance() {
  return &Parameter_default_instance_.get();
}
// -------------------------------------------------------------------

// GetParametersReq

inline const GetParametersReq* GetParametersReq::internal_default_instance() {
  return &GetParametersReq_default_instance_.get();
}
// -------------------------------------------------------------------

// GetParametersRsp

// repeated .zproto.Parameter parameters = 1;
inline int GetParametersRsp::parameters_size() const {
  return parameters_.size();
}
inline void GetParametersRsp::clear_parameters() {
  parameters_.Clear();
}
inline const ::zproto::Parameter& GetParametersRsp::parameters(int index) const {
  // @@protoc_insertion_point(field_get:zproto.GetParametersRsp.parameters)
  return parameters_.Get(index);
}
inline ::zproto::Parameter* GetParametersRsp::mutable_parameters(int index) {
  // @@protoc_insertion_point(field_mutable:zproto.GetParametersRsp.parameters)
  return parameters_.Mutable(index);
}
inline ::zproto::Parameter* GetParametersRsp::add_parameters() {
  // @@protoc_insertion_point(field_add:zproto.GetParametersRsp.parameters)
  return parameters_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::zproto::Parameter >*
GetParametersRsp::mutable_parameters() {
  // @@protoc_insertion_point(field_mutable_list:zproto.GetParametersRsp.parameters)
  return &parameters_;
}
inline const ::google::protobuf::RepeatedPtrField< ::zproto::Parameter >&
GetParametersRsp::parameters() const {
  // @@protoc_insertion_point(field_list:zproto.GetParametersRsp.parameters)
  return parameters_;
}

inline const GetParametersRsp* GetParametersRsp::internal_default_instance() {
  return &GetParametersRsp_default_instance_.get();
}
// -------------------------------------------------------------------

// EditParameterReq

// optional string key = 1;
inline void EditParameterReq::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EditParameterReq::key() const {
  // @@protoc_insertion_point(field_get:zproto.EditParameterReq.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EditParameterReq::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.EditParameterReq.key)
}
inline void EditParameterReq::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.EditParameterReq.key)
}
inline void EditParameterReq::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.EditParameterReq.key)
}
inline ::std::string* EditParameterReq::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:zproto.EditParameterReq.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EditParameterReq::release_key() {
  // @@protoc_insertion_point(field_release:zproto.EditParameterReq.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EditParameterReq::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:zproto.EditParameterReq.key)
}

// optional string value = 2;
inline void EditParameterReq::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EditParameterReq::value() const {
  // @@protoc_insertion_point(field_get:zproto.EditParameterReq.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EditParameterReq::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.EditParameterReq.value)
}
inline void EditParameterReq::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.EditParameterReq.value)
}
inline void EditParameterReq::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.EditParameterReq.value)
}
inline ::std::string* EditParameterReq::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:zproto.EditParameterReq.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EditParameterReq::release_value() {
  // @@protoc_insertion_point(field_release:zproto.EditParameterReq.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EditParameterReq::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:zproto.EditParameterReq.value)
}

inline const EditParameterReq* EditParameterReq::internal_default_instance() {
  return &EditParameterReq_default_instance_.get();
}
// -------------------------------------------------------------------

// ParameterChangedNotify

// optional string key = 1;
inline void ParameterChangedNotify::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ParameterChangedNotify::key() const {
  // @@protoc_insertion_point(field_get:zproto.ParameterChangedNotify.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParameterChangedNotify::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.ParameterChangedNotify.key)
}
inline void ParameterChangedNotify::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.ParameterChangedNotify.key)
}
inline void ParameterChangedNotify::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.ParameterChangedNotify.key)
}
inline ::std::string* ParameterChangedNotify::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:zproto.ParameterChangedNotify.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ParameterChangedNotify::release_key() {
  // @@protoc_insertion_point(field_release:zproto.ParameterChangedNotify.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParameterChangedNotify::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:zproto.ParameterChangedNotify.key)
}

// optional string value = 2;
inline void ParameterChangedNotify::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ParameterChangedNotify::value() const {
  // @@protoc_insertion_point(field_get:zproto.ParameterChangedNotify.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParameterChangedNotify::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.ParameterChangedNotify.value)
}
inline void ParameterChangedNotify::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.ParameterChangedNotify.value)
}
inline void ParameterChangedNotify::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.ParameterChangedNotify.value)
}
inline ::std::string* ParameterChangedNotify::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:zproto.ParameterChangedNotify.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ParameterChangedNotify::release_value() {
  // @@protoc_insertion_point(field_release:zproto.ParameterChangedNotify.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParameterChangedNotify::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:zproto.ParameterChangedNotify.value)
}

inline const ParameterChangedNotify* ParameterChangedNotify::internal_default_instance() {
  return &ParameterChangedNotify_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_configs_2eproto__INCLUDED
