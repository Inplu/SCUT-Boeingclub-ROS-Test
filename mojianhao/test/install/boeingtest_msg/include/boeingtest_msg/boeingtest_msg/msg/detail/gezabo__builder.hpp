// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boeingtest_msg:msg/Gezabo.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__MSG__DETAIL__GEZABO__BUILDER_HPP_
#define BOEINGTEST_MSG__MSG__DETAIL__GEZABO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boeingtest_msg/msg/detail/gezabo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boeingtest_msg
{

namespace msg
{

namespace builder
{

class Init_Gezabo_meter
{
public:
  Init_Gezabo_meter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::boeingtest_msg::msg::Gezabo meter(::boeingtest_msg::msg::Gezabo::_meter_type arg)
  {
    msg_.meter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::msg::Gezabo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::msg::Gezabo>()
{
  return boeingtest_msg::msg::builder::Init_Gezabo_meter();
}

}  // namespace boeingtest_msg

#endif  // BOEINGTEST_MSG__MSG__DETAIL__GEZABO__BUILDER_HPP_
