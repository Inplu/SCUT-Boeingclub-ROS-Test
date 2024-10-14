// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from boeingtest_msg:msg/Gezabo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "boeingtest_msg/msg/detail/gezabo__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace boeingtest_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Gezabo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) boeingtest_msg::msg::Gezabo(_init);
}

void Gezabo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<boeingtest_msg::msg::Gezabo *>(message_memory);
  typed_message->~Gezabo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Gezabo_message_member_array[1] = {
  {
    "meter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boeingtest_msg::msg::Gezabo, meter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Gezabo_message_members = {
  "boeingtest_msg::msg",  // message namespace
  "Gezabo",  // message name
  1,  // number of fields
  sizeof(boeingtest_msg::msg::Gezabo),
  Gezabo_message_member_array,  // message members
  Gezabo_init_function,  // function to initialize message memory (memory has to be allocated)
  Gezabo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Gezabo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Gezabo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace boeingtest_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boeingtest_msg::msg::Gezabo>()
{
  return &::boeingtest_msg::msg::rosidl_typesupport_introspection_cpp::Gezabo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, msg, Gezabo)() {
  return &::boeingtest_msg::msg::rosidl_typesupport_introspection_cpp::Gezabo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
