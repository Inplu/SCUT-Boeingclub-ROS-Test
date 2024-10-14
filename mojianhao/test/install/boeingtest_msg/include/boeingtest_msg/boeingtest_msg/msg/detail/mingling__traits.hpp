// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boeingtest_msg:msg/Mingling.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__MSG__DETAIL__MINGLING__TRAITS_HPP_
#define BOEINGTEST_MSG__MSG__DETAIL__MINGLING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boeingtest_msg/msg/detail/mingling__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace boeingtest_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mingling & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: can_x
  {
    out << "can_x: ";
    rosidl_generator_traits::value_to_yaml(msg.can_x, out);
    out << ", ";
  }

  // member: can_y
  {
    out << "can_y: ";
    rosidl_generator_traits::value_to_yaml(msg.can_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mingling & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << "\n";
  }

  // member: can_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_x: ";
    rosidl_generator_traits::value_to_yaml(msg.can_x, out);
    out << "\n";
  }

  // member: can_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_y: ";
    rosidl_generator_traits::value_to_yaml(msg.can_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mingling & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::msg::Mingling & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::msg::Mingling & msg)
{
  return boeingtest_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::msg::Mingling>()
{
  return "boeingtest_msg::msg::Mingling";
}

template<>
inline const char * name<boeingtest_msg::msg::Mingling>()
{
  return "boeingtest_msg/msg/Mingling";
}

template<>
struct has_fixed_size<boeingtest_msg::msg::Mingling>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boeingtest_msg::msg::Mingling>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boeingtest_msg::msg::Mingling>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOEINGTEST_MSG__MSG__DETAIL__MINGLING__TRAITS_HPP_
