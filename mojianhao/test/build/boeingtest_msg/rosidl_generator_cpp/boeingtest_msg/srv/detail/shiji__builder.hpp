// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boeingtest_msg:srv/Shiji.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__SRV__DETAIL__SHIJI__BUILDER_HPP_
#define BOEINGTEST_MSG__SRV__DETAIL__SHIJI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boeingtest_msg/srv/detail/shiji__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boeingtest_msg
{

namespace srv
{

namespace builder
{

class Init_Shiji_Request_the
{
public:
  explicit Init_Shiji_Request_the(::boeingtest_msg::srv::Shiji_Request & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::srv::Shiji_Request the(::boeingtest_msg::srv::Shiji_Request::_the_type arg)
  {
    msg_.the = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::srv::Shiji_Request msg_;
};

class Init_Shiji_Request_y
{
public:
  explicit Init_Shiji_Request_y(::boeingtest_msg::srv::Shiji_Request & msg)
  : msg_(msg)
  {}
  Init_Shiji_Request_the y(::boeingtest_msg::srv::Shiji_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Shiji_Request_the(msg_);
  }

private:
  ::boeingtest_msg::srv::Shiji_Request msg_;
};

class Init_Shiji_Request_x
{
public:
  explicit Init_Shiji_Request_x(::boeingtest_msg::srv::Shiji_Request & msg)
  : msg_(msg)
  {}
  Init_Shiji_Request_y x(::boeingtest_msg::srv::Shiji_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Shiji_Request_y(msg_);
  }

private:
  ::boeingtest_msg::srv::Shiji_Request msg_;
};

class Init_Shiji_Request_choice
{
public:
  Init_Shiji_Request_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shiji_Request_x choice(::boeingtest_msg::srv::Shiji_Request::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_Shiji_Request_x(msg_);
  }

private:
  ::boeingtest_msg::srv::Shiji_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::srv::Shiji_Request>()
{
  return boeingtest_msg::srv::builder::Init_Shiji_Request_choice();
}

}  // namespace boeingtest_msg


namespace boeingtest_msg
{

namespace srv
{

namespace builder
{

class Init_Shiji_Response_facty
{
public:
  explicit Init_Shiji_Response_facty(::boeingtest_msg::srv::Shiji_Response & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::srv::Shiji_Response facty(::boeingtest_msg::srv::Shiji_Response::_facty_type arg)
  {
    msg_.facty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::srv::Shiji_Response msg_;
};

class Init_Shiji_Response_factx
{
public:
  explicit Init_Shiji_Response_factx(::boeingtest_msg::srv::Shiji_Response & msg)
  : msg_(msg)
  {}
  Init_Shiji_Response_facty factx(::boeingtest_msg::srv::Shiji_Response::_factx_type arg)
  {
    msg_.factx = std::move(arg);
    return Init_Shiji_Response_facty(msg_);
  }

private:
  ::boeingtest_msg::srv::Shiji_Response msg_;
};

class Init_Shiji_Response_distance
{
public:
  Init_Shiji_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shiji_Response_factx distance(::boeingtest_msg::srv::Shiji_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Shiji_Response_factx(msg_);
  }

private:
  ::boeingtest_msg::srv::Shiji_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::srv::Shiji_Response>()
{
  return boeingtest_msg::srv::builder::Init_Shiji_Response_distance();
}

}  // namespace boeingtest_msg

#endif  // BOEINGTEST_MSG__SRV__DETAIL__SHIJI__BUILDER_HPP_
