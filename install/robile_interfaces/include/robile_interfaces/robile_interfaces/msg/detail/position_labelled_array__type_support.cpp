// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robile_interfaces:msg/PositionLabelledArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robile_interfaces/msg/detail/position_labelled_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robile_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PositionLabelledArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robile_interfaces::msg::PositionLabelledArray(_init);
}

void PositionLabelledArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robile_interfaces::msg::PositionLabelledArray *>(message_memory);
  typed_message->~PositionLabelledArray();
}

size_t size_function__PositionLabelledArray__positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robile_interfaces::msg::PositionLabelled> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PositionLabelledArray__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robile_interfaces::msg::PositionLabelled> *>(untyped_member);
  return &member[index];
}

void * get_function__PositionLabelledArray__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robile_interfaces::msg::PositionLabelled> *>(untyped_member);
  return &member[index];
}

void fetch_function__PositionLabelledArray__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robile_interfaces::msg::PositionLabelled *>(
    get_const_function__PositionLabelledArray__positions(untyped_member, index));
  auto & value = *reinterpret_cast<robile_interfaces::msg::PositionLabelled *>(untyped_value);
  value = item;
}

void assign_function__PositionLabelledArray__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robile_interfaces::msg::PositionLabelled *>(
    get_function__PositionLabelledArray__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const robile_interfaces::msg::PositionLabelled *>(untyped_value);
  item = value;
}

void resize_function__PositionLabelledArray__positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robile_interfaces::msg::PositionLabelled> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PositionLabelledArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robile_interfaces::msg::PositionLabelledArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robile_interfaces::msg::PositionLabelled>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robile_interfaces::msg::PositionLabelledArray, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__PositionLabelledArray__positions,  // size() function pointer
    get_const_function__PositionLabelledArray__positions,  // get_const(index) function pointer
    get_function__PositionLabelledArray__positions,  // get(index) function pointer
    fetch_function__PositionLabelledArray__positions,  // fetch(index, &value) function pointer
    assign_function__PositionLabelledArray__positions,  // assign(index, value) function pointer
    resize_function__PositionLabelledArray__positions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PositionLabelledArray_message_members = {
  "robile_interfaces::msg",  // message namespace
  "PositionLabelledArray",  // message name
  2,  // number of fields
  sizeof(robile_interfaces::msg::PositionLabelledArray),
  PositionLabelledArray_message_member_array,  // message members
  PositionLabelledArray_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionLabelledArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PositionLabelledArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PositionLabelledArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robile_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robile_interfaces::msg::PositionLabelledArray>()
{
  return &::robile_interfaces::msg::rosidl_typesupport_introspection_cpp::PositionLabelledArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robile_interfaces, msg, PositionLabelledArray)() {
  return &::robile_interfaces::msg::rosidl_typesupport_introspection_cpp::PositionLabelledArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
