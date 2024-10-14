// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boeingtest_msg:msg/Mingling.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__MSG__DETAIL__MINGLING__BUILDER_HPP_
#define BOEINGTEST_MSG__MSG__DETAIL__MINGLING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boeingtest_msg/msg/detail/mingling__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boeingtest_msg
{

namespace msg
{

namespace builder
{

class Init_Mingling_can_y
{
public:
  explicit Init_Mingling_can_y(::boeingtest_msg::msg::Mingling & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::msg::Mingling can_y(::boeingtest_msg::msg::Mingling::_can_y_type arg)
  {
    msg_.can_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::msg::Mingling msg_;
};

class Init_Mingling_can_x
{
public:
  explicit Init_Mingling_can_x(::boeingtest_msg::msg::Mingling & msg)
  : msg_(msg)
  {}
  Init_Mingling_can_y can_x(::boeingtest_msg::msg::Mingling::_can_x_type arg)
  {
    msg_.can_x = std::move(arg);
    return Init_Mingling_can_y(msg_);
  }

private:
  ::boeingtest_msg::msg::Mingling msg_;
};

class Init_Mingling_choice
{
public:
  Init_Mingling_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mingling_can_x choice(::boeingtest_msg::msg::Mingling::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_Mingling_can_x(msg_);
  }

private:
  ::boeingtest_msg::msg::Mingling msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::msg::Mingling>()
{
  return boeingtest_msg::msg::builder::Init_Mingling_choice();
}

}  // namespace boeingtest_msg

#endif  // BOEINGTEST_MSG__MSG__DETAIL__MINGLING__BUILDER_HPP_
