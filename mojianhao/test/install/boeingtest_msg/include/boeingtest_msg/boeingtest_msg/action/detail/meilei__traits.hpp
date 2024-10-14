// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boeingtest_msg:action/Meilei.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__TRAITS_HPP_
#define BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boeingtest_msg/action/detail/meilei__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace boeingtest_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Meilei_Goal & msg,
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

  // member: ang
  {
    out << "ang: ";
    rosidl_generator_traits::value_to_yaml(msg.ang, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Meilei_Goal & msg,
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

  // member: ang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang: ";
    rosidl_generator_traits::value_to_yaml(msg.ang, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Meilei_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::action::Meilei_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::action::Meilei_Goal & msg)
{
  return boeingtest_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_Goal>()
{
  return "boeingtest_msg::action::Meilei_Goal";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_Goal>()
{
  return "boeingtest_msg/action/Meilei_Goal";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boeingtest_msg::action::Meilei_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace boeingtest_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Meilei_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_x
  {
    out << "turtle_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_x, out);
    out << ", ";
  }

  // member: turtle_y
  {
    out << "turtle_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Meilei_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_x, out);
    out << "\n";
  }

  // member: turtle_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Meilei_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::action::Meilei_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::action::Meilei_Result & msg)
{
  return boeingtest_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_Result>()
{
  return "boeingtest_msg::action::Meilei_Result";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_Result>()
{
  return "boeingtest_msg/action/Meilei_Result";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boeingtest_msg::action::Meilei_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace boeingtest_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Meilei_Feedback & msg,
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
  const Meilei_Feedback & msg,
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

inline std::string to_yaml(const Meilei_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::action::Meilei_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::action::Meilei_Feedback & msg)
{
  return boeingtest_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_Feedback>()
{
  return "boeingtest_msg::action::Meilei_Feedback";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_Feedback>()
{
  return "boeingtest_msg/action/Meilei_Feedback";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boeingtest_msg::action::Meilei_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "boeingtest_msg/action/detail/meilei__traits.hpp"

namespace boeingtest_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Meilei_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Meilei_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Meilei_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::action::Meilei_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::action::Meilei_SendGoal_Request & msg)
{
  return boeingtest_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_SendGoal_Request>()
{
  return "boeingtest_msg::action::Meilei_SendGoal_Request";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_SendGoal_Request>()
{
  return "boeingtest_msg/action/Meilei_SendGoal_Request";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<boeingtest_msg::action::Meilei_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<boeingtest_msg::action::Meilei_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<boeingtest_msg::action::Meilei_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace boeingtest_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Meilei_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Meilei_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Meilei_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::action::Meilei_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::action::Meilei_SendGoal_Response & msg)
{
  return boeingtest_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_SendGoal_Response>()
{
  return "boeingtest_msg::action::Meilei_SendGoal_Response";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_SendGoal_Response>()
{
  return "boeingtest_msg/action/Meilei_SendGoal_Response";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<boeingtest_msg::action::Meilei_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_SendGoal>()
{
  return "boeingtest_msg::action::Meilei_SendGoal";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_SendGoal>()
{
  return "boeingtest_msg/action/Meilei_SendGoal";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<boeingtest_msg::action::Meilei_SendGoal_Request>::value &&
    has_fixed_size<boeingtest_msg::action::Meilei_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<boeingtest_msg::action::Meilei_SendGoal_Request>::value &&
    has_bounded_size<boeingtest_msg::action::Meilei_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<boeingtest_msg::action::Meilei_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<boeingtest_msg::action::Meilei_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<boeingtest_msg::action::Meilei_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace boeingtest_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Meilei_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Meilei_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Meilei_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::action::Meilei_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::action::Meilei_GetResult_Request & msg)
{
  return boeingtest_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_GetResult_Request>()
{
  return "boeingtest_msg::action::Meilei_GetResult_Request";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_GetResult_Request>()
{
  return "boeingtest_msg/action/Meilei_GetResult_Request";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<boeingtest_msg::action::Meilei_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "boeingtest_msg/action/detail/meilei__traits.hpp"

namespace boeingtest_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Meilei_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Meilei_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Meilei_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::action::Meilei_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::action::Meilei_GetResult_Response & msg)
{
  return boeingtest_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_GetResult_Response>()
{
  return "boeingtest_msg::action::Meilei_GetResult_Response";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_GetResult_Response>()
{
  return "boeingtest_msg/action/Meilei_GetResult_Response";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<boeingtest_msg::action::Meilei_Result>::value> {};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<boeingtest_msg::action::Meilei_Result>::value> {};

template<>
struct is_message<boeingtest_msg::action::Meilei_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_GetResult>()
{
  return "boeingtest_msg::action::Meilei_GetResult";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_GetResult>()
{
  return "boeingtest_msg/action/Meilei_GetResult";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<boeingtest_msg::action::Meilei_GetResult_Request>::value &&
    has_fixed_size<boeingtest_msg::action::Meilei_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<boeingtest_msg::action::Meilei_GetResult_Request>::value &&
    has_bounded_size<boeingtest_msg::action::Meilei_GetResult_Response>::value
  >
{
};

template<>
struct is_service<boeingtest_msg::action::Meilei_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<boeingtest_msg::action::Meilei_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<boeingtest_msg::action::Meilei_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "boeingtest_msg/action/detail/meilei__traits.hpp"

namespace boeingtest_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Meilei_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Meilei_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Meilei_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_generator_traits
{

[[deprecated("use boeingtest_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boeingtest_msg::action::Meilei_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  boeingtest_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boeingtest_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const boeingtest_msg::action::Meilei_FeedbackMessage & msg)
{
  return boeingtest_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<boeingtest_msg::action::Meilei_FeedbackMessage>()
{
  return "boeingtest_msg::action::Meilei_FeedbackMessage";
}

template<>
inline const char * name<boeingtest_msg::action::Meilei_FeedbackMessage>()
{
  return "boeingtest_msg/action/Meilei_FeedbackMessage";
}

template<>
struct has_fixed_size<boeingtest_msg::action::Meilei_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<boeingtest_msg::action::Meilei_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<boeingtest_msg::action::Meilei_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<boeingtest_msg::action::Meilei_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<boeingtest_msg::action::Meilei_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<boeingtest_msg::action::Meilei>
  : std::true_type
{
};

template<>
struct is_action_goal<boeingtest_msg::action::Meilei_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<boeingtest_msg::action::Meilei_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<boeingtest_msg::action::Meilei_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__TRAITS_HPP_
