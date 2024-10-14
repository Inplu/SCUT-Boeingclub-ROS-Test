// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boeingtest_msg:srv/Shiji.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__SRV__DETAIL__SHIJI__TRAITS_HPP_
#define BOEINGTEST_MSG__SRV__DETAIL__SHIJI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boeingtest_msg/srv/detail/shiji__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace boeingtest_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const Shiji_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: the
  {
    out << "the: ";
    rosidl_generator_traits::value_to_yaml(msg.the, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Shiji_Request & msg,
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

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: the
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "the: ";
    rosidl_generator_traits::value_to_yaml(msg.the, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Shiji_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::srv::Shiji_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::srv::Shiji_Request & msg)
{
  return boeingtest_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::srv::Shiji_Request>()
{
  return "boeingtest_msg::srv::Shiji_Request";
}

template<>
inline const char * name<boeingtest_msg::srv::Shiji_Request>()
{
  return "boeingtest_msg/srv/Shiji_Request";
}

template<>
struct has_fixed_size<boeingtest_msg::srv::Shiji_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boeingtest_msg::srv::Shiji_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boeingtest_msg::srv::Shiji_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace boeingtest_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const Shiji_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: factx
  {
    out << "factx: ";
    rosidl_generator_traits::value_to_yaml(msg.factx, out);
    out << ", ";
  }

  // member: facty
  {
    out << "facty: ";
    rosidl_generator_traits::value_to_yaml(msg.facty, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Shiji_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: factx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "factx: ";
    rosidl_generator_traits::value_to_yaml(msg.factx, out);
    out << "\n";
  }

  // member: facty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "facty: ";
    rosidl_generator_traits::value_to_yaml(msg.facty, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Shiji_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::srv::Shiji_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::srv::Shiji_Response & msg)
{
  return boeingtest_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::srv::Shiji_Response>()
{
  return "boeingtest_msg::srv::Shiji_Response";
}

template<>
inline const char * name<boeingtest_msg::srv::Shiji_Response>()
{
  return "boeingtest_msg/srv/Shiji_Response";
}

template<>
struct has_fixed_size<boeingtest_msg::srv::Shiji_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boeingtest_msg::srv::Shiji_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boeingtest_msg::srv::Shiji_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<boeingtest_msg::srv::Shiji>()
{
  return "boeingtest_msg::srv::Shiji";
}

template<>
inline const char * name<boeingtest_msg::srv::Shiji>()
{
  return "boeingtest_msg/srv/Shiji";
}

template<>
struct has_fixed_size<boeingtest_msg::srv::Shiji>
  : std::integral_constant<
    bool,
    has_fixed_size<boeingtest_msg::srv::Shiji_Request>::value &&
    has_fixed_size<boeingtest_msg::srv::Shiji_Response>::value
  >
{
};

template<>
struct has_bounded_size<boeingtest_msg::srv::Shiji>
  : std::integral_constant<
    bool,
    has_bounded_size<boeingtest_msg::srv::Shiji_Request>::value &&
    has_bounded_size<boeingtest_msg::srv::Shiji_Response>::value
  >
{
};

template<>
struct is_service<boeingtest_msg::srv::Shiji>
  : std::true_type
{
};

template<>
struct is_service_request<boeingtest_msg::srv::Shiji_Request>
  : std::true_type
{
};

template<>
struct is_service_response<boeingtest_msg::srv::Shiji_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BOEINGTEST_MSG__SRV__DETAIL__SHIJI__TRAITS_HPP_
