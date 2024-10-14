// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boeingtest_msg:action/Meilei.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__STRUCT_HPP_
#define BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__action__Meilei_Goal __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__action__Meilei_Goal __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Meilei_Goal_
{
  using Type = Meilei_Goal_<ContainerAllocator>;

  explicit Meilei_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->ang = 0.0f;
    }
  }

  explicit Meilei_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->ang = 0.0f;
    }
  }

  // field types and members
  using _choice_type =
    int32_t;
  _choice_type choice;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _ang_type =
    float;
  _ang_type ang;

  // setters for named parameter idiom
  Type & set__choice(
    const int32_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__ang(
    const float & _arg)
  {
    this->ang = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::action::Meilei_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::action::Meilei_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__action__Meilei_Goal
    std::shared_ptr<boeingtest_msg::action::Meilei_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__action__Meilei_Goal
    std::shared_ptr<boeingtest_msg::action::Meilei_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Meilei_Goal_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->ang != other.ang) {
      return false;
    }
    return true;
  }
  bool operator!=(const Meilei_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Meilei_Goal_

// alias to use template instance with default allocator
using Meilei_Goal =
  boeingtest_msg::action::Meilei_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace boeingtest_msg


#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__action__Meilei_Result __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__action__Meilei_Result __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Meilei_Result_
{
  using Type = Meilei_Result_<ContainerAllocator>;

  explicit Meilei_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_x = 0.0f;
      this->turtle_y = 0.0f;
    }
  }

  explicit Meilei_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_x = 0.0f;
      this->turtle_y = 0.0f;
    }
  }

  // field types and members
  using _turtle_x_type =
    float;
  _turtle_x_type turtle_x;
  using _turtle_y_type =
    float;
  _turtle_y_type turtle_y;

  // setters for named parameter idiom
  Type & set__turtle_x(
    const float & _arg)
  {
    this->turtle_x = _arg;
    return *this;
  }
  Type & set__turtle_y(
    const float & _arg)
  {
    this->turtle_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::action::Meilei_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::action::Meilei_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__action__Meilei_Result
    std::shared_ptr<boeingtest_msg::action::Meilei_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__action__Meilei_Result
    std::shared_ptr<boeingtest_msg::action::Meilei_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Meilei_Result_ & other) const
  {
    if (this->turtle_x != other.turtle_x) {
      return false;
    }
    if (this->turtle_y != other.turtle_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Meilei_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Meilei_Result_

// alias to use template instance with default allocator
using Meilei_Result =
  boeingtest_msg::action::Meilei_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace boeingtest_msg


#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__action__Meilei_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__action__Meilei_Feedback __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Meilei_Feedback_
{
  using Type = Meilei_Feedback_<ContainerAllocator>;

  explicit Meilei_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->factx = 0.0f;
      this->facty = 0.0f;
    }
  }

  explicit Meilei_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->factx = 0.0f;
      this->facty = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;
  using _factx_type =
    float;
  _factx_type factx;
  using _facty_type =
    float;
  _facty_type facty;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__factx(
    const float & _arg)
  {
    this->factx = _arg;
    return *this;
  }
  Type & set__facty(
    const float & _arg)
  {
    this->facty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__action__Meilei_Feedback
    std::shared_ptr<boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__action__Meilei_Feedback
    std::shared_ptr<boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Meilei_Feedback_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->factx != other.factx) {
      return false;
    }
    if (this->facty != other.facty) {
      return false;
    }
    return true;
  }
  bool operator!=(const Meilei_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Meilei_Feedback_

// alias to use template instance with default allocator
using Meilei_Feedback =
  boeingtest_msg::action::Meilei_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace boeingtest_msg


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "boeingtest_msg/action/detail/meilei__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__action__Meilei_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__action__Meilei_SendGoal_Request __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Meilei_SendGoal_Request_
{
  using Type = Meilei_SendGoal_Request_<ContainerAllocator>;

  explicit Meilei_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Meilei_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    boeingtest_msg::action::Meilei_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const boeingtest_msg::action::Meilei_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__action__Meilei_SendGoal_Request
    std::shared_ptr<boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__action__Meilei_SendGoal_Request
    std::shared_ptr<boeingtest_msg::action::Meilei_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Meilei_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Meilei_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Meilei_SendGoal_Request_

// alias to use template instance with default allocator
using Meilei_SendGoal_Request =
  boeingtest_msg::action::Meilei_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace boeingtest_msg


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__action__Meilei_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__action__Meilei_SendGoal_Response __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Meilei_SendGoal_Response_
{
  using Type = Meilei_SendGoal_Response_<ContainerAllocator>;

  explicit Meilei_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Meilei_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__action__Meilei_SendGoal_Response
    std::shared_ptr<boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__action__Meilei_SendGoal_Response
    std::shared_ptr<boeingtest_msg::action::Meilei_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Meilei_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Meilei_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Meilei_SendGoal_Response_

// alias to use template instance with default allocator
using Meilei_SendGoal_Response =
  boeingtest_msg::action::Meilei_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace boeingtest_msg

namespace boeingtest_msg
{

namespace action
{

struct Meilei_SendGoal
{
  using Request = boeingtest_msg::action::Meilei_SendGoal_Request;
  using Response = boeingtest_msg::action::Meilei_SendGoal_Response;
};

}  // namespace action

}  // namespace boeingtest_msg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__action__Meilei_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__action__Meilei_GetResult_Request __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Meilei_GetResult_Request_
{
  using Type = Meilei_GetResult_Request_<ContainerAllocator>;

  explicit Meilei_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Meilei_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__action__Meilei_GetResult_Request
    std::shared_ptr<boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__action__Meilei_GetResult_Request
    std::shared_ptr<boeingtest_msg::action::Meilei_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Meilei_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Meilei_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Meilei_GetResult_Request_

// alias to use template instance with default allocator
using Meilei_GetResult_Request =
  boeingtest_msg::action::Meilei_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace boeingtest_msg


// Include directives for member types
// Member 'result'
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__action__Meilei_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__action__Meilei_GetResult_Response __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Meilei_GetResult_Response_
{
  using Type = Meilei_GetResult_Response_<ContainerAllocator>;

  explicit Meilei_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Meilei_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    boeingtest_msg::action::Meilei_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const boeingtest_msg::action::Meilei_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__action__Meilei_GetResult_Response
    std::shared_ptr<boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__action__Meilei_GetResult_Response
    std::shared_ptr<boeingtest_msg::action::Meilei_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Meilei_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Meilei_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Meilei_GetResult_Response_

// alias to use template instance with default allocator
using Meilei_GetResult_Response =
  boeingtest_msg::action::Meilei_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace boeingtest_msg

namespace boeingtest_msg
{

namespace action
{

struct Meilei_GetResult
{
  using Request = boeingtest_msg::action::Meilei_GetResult_Request;
  using Response = boeingtest_msg::action::Meilei_GetResult_Response;
};

}  // namespace action

}  // namespace boeingtest_msg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__action__Meilei_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__action__Meilei_FeedbackMessage __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Meilei_FeedbackMessage_
{
  using Type = Meilei_FeedbackMessage_<ContainerAllocator>;

  explicit Meilei_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Meilei_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const boeingtest_msg::action::Meilei_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__action__Meilei_FeedbackMessage
    std::shared_ptr<boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__action__Meilei_FeedbackMessage
    std::shared_ptr<boeingtest_msg::action::Meilei_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Meilei_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Meilei_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Meilei_FeedbackMessage_

// alias to use template instance with default allocator
using Meilei_FeedbackMessage =
  boeingtest_msg::action::Meilei_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace boeingtest_msg

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace boeingtest_msg
{

namespace action
{

struct Meilei
{
  /// The goal message defined in the action definition.
  using Goal = boeingtest_msg::action::Meilei_Goal;
  /// The result message defined in the action definition.
  using Result = boeingtest_msg::action::Meilei_Result;
  /// The feedback message defined in the action definition.
  using Feedback = boeingtest_msg::action::Meilei_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = boeingtest_msg::action::Meilei_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = boeingtest_msg::action::Meilei_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = boeingtest_msg::action::Meilei_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Meilei Meilei;

}  // namespace action

}  // namespace boeingtest_msg

#endif  // BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__STRUCT_HPP_
