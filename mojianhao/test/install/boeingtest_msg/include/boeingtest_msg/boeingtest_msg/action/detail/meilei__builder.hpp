// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boeingtest_msg:action/Meilei.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__BUILDER_HPP_
#define BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boeingtest_msg/action/detail/meilei__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boeingtest_msg
{

namespace action
{

namespace builder
{

class Init_Meilei_Goal_ang
{
public:
  explicit Init_Meilei_Goal_ang(::boeingtest_msg::action::Meilei_Goal & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::action::Meilei_Goal ang(::boeingtest_msg::action::Meilei_Goal::_ang_type arg)
  {
    msg_.ang = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_Goal msg_;
};

class Init_Meilei_Goal_y
{
public:
  explicit Init_Meilei_Goal_y(::boeingtest_msg::action::Meilei_Goal & msg)
  : msg_(msg)
  {}
  Init_Meilei_Goal_ang y(::boeingtest_msg::action::Meilei_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Meilei_Goal_ang(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_Goal msg_;
};

class Init_Meilei_Goal_x
{
public:
  explicit Init_Meilei_Goal_x(::boeingtest_msg::action::Meilei_Goal & msg)
  : msg_(msg)
  {}
  Init_Meilei_Goal_y x(::boeingtest_msg::action::Meilei_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Meilei_Goal_y(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_Goal msg_;
};

class Init_Meilei_Goal_choice
{
public:
  Init_Meilei_Goal_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Meilei_Goal_x choice(::boeingtest_msg::action::Meilei_Goal::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_Meilei_Goal_x(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::action::Meilei_Goal>()
{
  return boeingtest_msg::action::builder::Init_Meilei_Goal_choice();
}

}  // namespace boeingtest_msg


namespace boeingtest_msg
{

namespace action
{

namespace builder
{

class Init_Meilei_Result_turtle_y
{
public:
  explicit Init_Meilei_Result_turtle_y(::boeingtest_msg::action::Meilei_Result & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::action::Meilei_Result turtle_y(::boeingtest_msg::action::Meilei_Result::_turtle_y_type arg)
  {
    msg_.turtle_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_Result msg_;
};

class Init_Meilei_Result_turtle_x
{
public:
  Init_Meilei_Result_turtle_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Meilei_Result_turtle_y turtle_x(::boeingtest_msg::action::Meilei_Result::_turtle_x_type arg)
  {
    msg_.turtle_x = std::move(arg);
    return Init_Meilei_Result_turtle_y(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::action::Meilei_Result>()
{
  return boeingtest_msg::action::builder::Init_Meilei_Result_turtle_x();
}

}  // namespace boeingtest_msg


namespace boeingtest_msg
{

namespace action
{

namespace builder
{

class Init_Meilei_Feedback_facty
{
public:
  explicit Init_Meilei_Feedback_facty(::boeingtest_msg::action::Meilei_Feedback & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::action::Meilei_Feedback facty(::boeingtest_msg::action::Meilei_Feedback::_facty_type arg)
  {
    msg_.facty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_Feedback msg_;
};

class Init_Meilei_Feedback_factx
{
public:
  explicit Init_Meilei_Feedback_factx(::boeingtest_msg::action::Meilei_Feedback & msg)
  : msg_(msg)
  {}
  Init_Meilei_Feedback_facty factx(::boeingtest_msg::action::Meilei_Feedback::_factx_type arg)
  {
    msg_.factx = std::move(arg);
    return Init_Meilei_Feedback_facty(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_Feedback msg_;
};

class Init_Meilei_Feedback_distance
{
public:
  Init_Meilei_Feedback_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Meilei_Feedback_factx distance(::boeingtest_msg::action::Meilei_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Meilei_Feedback_factx(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::action::Meilei_Feedback>()
{
  return boeingtest_msg::action::builder::Init_Meilei_Feedback_distance();
}

}  // namespace boeingtest_msg


namespace boeingtest_msg
{

namespace action
{

namespace builder
{

class Init_Meilei_SendGoal_Request_goal
{
public:
  explicit Init_Meilei_SendGoal_Request_goal(::boeingtest_msg::action::Meilei_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::action::Meilei_SendGoal_Request goal(::boeingtest_msg::action::Meilei_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_SendGoal_Request msg_;
};

class Init_Meilei_SendGoal_Request_goal_id
{
public:
  Init_Meilei_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Meilei_SendGoal_Request_goal goal_id(::boeingtest_msg::action::Meilei_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Meilei_SendGoal_Request_goal(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::action::Meilei_SendGoal_Request>()
{
  return boeingtest_msg::action::builder::Init_Meilei_SendGoal_Request_goal_id();
}

}  // namespace boeingtest_msg


namespace boeingtest_msg
{

namespace action
{

namespace builder
{

class Init_Meilei_SendGoal_Response_stamp
{
public:
  explicit Init_Meilei_SendGoal_Response_stamp(::boeingtest_msg::action::Meilei_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::action::Meilei_SendGoal_Response stamp(::boeingtest_msg::action::Meilei_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_SendGoal_Response msg_;
};

class Init_Meilei_SendGoal_Response_accepted
{
public:
  Init_Meilei_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Meilei_SendGoal_Response_stamp accepted(::boeingtest_msg::action::Meilei_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Meilei_SendGoal_Response_stamp(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::action::Meilei_SendGoal_Response>()
{
  return boeingtest_msg::action::builder::Init_Meilei_SendGoal_Response_accepted();
}

}  // namespace boeingtest_msg


namespace boeingtest_msg
{

namespace action
{

namespace builder
{

class Init_Meilei_GetResult_Request_goal_id
{
public:
  Init_Meilei_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::boeingtest_msg::action::Meilei_GetResult_Request goal_id(::boeingtest_msg::action::Meilei_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::action::Meilei_GetResult_Request>()
{
  return boeingtest_msg::action::builder::Init_Meilei_GetResult_Request_goal_id();
}

}  // namespace boeingtest_msg


namespace boeingtest_msg
{

namespace action
{

namespace builder
{

class Init_Meilei_GetResult_Response_result
{
public:
  explicit Init_Meilei_GetResult_Response_result(::boeingtest_msg::action::Meilei_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::action::Meilei_GetResult_Response result(::boeingtest_msg::action::Meilei_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_GetResult_Response msg_;
};

class Init_Meilei_GetResult_Response_status
{
public:
  Init_Meilei_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Meilei_GetResult_Response_result status(::boeingtest_msg::action::Meilei_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Meilei_GetResult_Response_result(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::action::Meilei_GetResult_Response>()
{
  return boeingtest_msg::action::builder::Init_Meilei_GetResult_Response_status();
}

}  // namespace boeingtest_msg


namespace boeingtest_msg
{

namespace action
{

namespace builder
{

class Init_Meilei_FeedbackMessage_feedback
{
public:
  explicit Init_Meilei_FeedbackMessage_feedback(::boeingtest_msg::action::Meilei_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::boeingtest_msg::action::Meilei_FeedbackMessage feedback(::boeingtest_msg::action::Meilei_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_FeedbackMessage msg_;
};

class Init_Meilei_FeedbackMessage_goal_id
{
public:
  Init_Meilei_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Meilei_FeedbackMessage_feedback goal_id(::boeingtest_msg::action::Meilei_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Meilei_FeedbackMessage_feedback(msg_);
  }

private:
  ::boeingtest_msg::action::Meilei_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::boeingtest_msg::action::Meilei_FeedbackMessage>()
{
  return boeingtest_msg::action::builder::Init_Meilei_FeedbackMessage_goal_id();
}

}  // namespace boeingtest_msg

#endif  // BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__BUILDER_HPP_
