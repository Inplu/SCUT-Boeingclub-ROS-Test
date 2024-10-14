// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from boeingtest_msg:msg/Mingling.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__MSG__DETAIL__MINGLING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BOEINGTEST_MSG__MSG__DETAIL__MINGLING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "boeingtest_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "boeingtest_msg/msg/detail/mingling__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace boeingtest_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boeingtest_msg
cdr_serialize(
  const boeingtest_msg::msg::Mingling & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boeingtest_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  boeingtest_msg::msg::Mingling & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boeingtest_msg
get_serialized_size(
  const boeingtest_msg::msg::Mingling & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boeingtest_msg
max_serialized_size_Mingling(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace boeingtest_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boeingtest_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, msg, Mingling)();

#ifdef __cplusplus
}
#endif

#endif  // BOEINGTEST_MSG__MSG__DETAIL__MINGLING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
