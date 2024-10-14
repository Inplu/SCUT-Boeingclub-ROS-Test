// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boeingtest_msg:srv/Shiji.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__SRV__DETAIL__SHIJI__STRUCT_HPP_
#define BOEINGTEST_MSG__SRV__DETAIL__SHIJI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__srv__Shiji_Request __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__srv__Shiji_Request __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Shiji_Request_
{
  using Type = Shiji_Request_<ContainerAllocator>;

  explicit Shiji_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->the = 0.0f;
    }
  }

  explicit Shiji_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->the = 0.0f;
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
  using _the_type =
    float;
  _the_type the;

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
  Type & set__the(
    const float & _arg)
  {
    this->the = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::srv::Shiji_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::srv::Shiji_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::srv::Shiji_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::srv::Shiji_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::srv::Shiji_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::srv::Shiji_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::srv::Shiji_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::srv::Shiji_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::srv::Shiji_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::srv::Shiji_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__srv__Shiji_Request
    std::shared_ptr<boeingtest_msg::srv::Shiji_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__srv__Shiji_Request
    std::shared_ptr<boeingtest_msg::srv::Shiji_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shiji_Request_ & other) const
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
    if (this->the != other.the) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shiji_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shiji_Request_

// alias to use template instance with default allocator
using Shiji_Request =
  boeingtest_msg::srv::Shiji_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace boeingtest_msg


#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__srv__Shiji_Response __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__srv__Shiji_Response __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Shiji_Response_
{
  using Type = Shiji_Response_<ContainerAllocator>;

  explicit Shiji_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
      this->factx = 0.0f;
      this->facty = 0.0f;
    }
  }

  explicit Shiji_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
      this->factx = 0.0f;
      this->facty = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    double;
  _distance_type distance;
  using _factx_type =
    float;
  _factx_type factx;
  using _facty_type =
    float;
  _facty_type facty;

  // setters for named parameter idiom
  Type & set__distance(
    const double & _arg)
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
    boeingtest_msg::srv::Shiji_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::srv::Shiji_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::srv::Shiji_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::srv::Shiji_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::srv::Shiji_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::srv::Shiji_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::srv::Shiji_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::srv::Shiji_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::srv::Shiji_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::srv::Shiji_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__srv__Shiji_Response
    std::shared_ptr<boeingtest_msg::srv::Shiji_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__srv__Shiji_Response
    std::shared_ptr<boeingtest_msg::srv::Shiji_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shiji_Response_ & other) const
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
  bool operator!=(const Shiji_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shiji_Response_

// alias to use template instance with default allocator
using Shiji_Response =
  boeingtest_msg::srv::Shiji_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace boeingtest_msg

namespace boeingtest_msg
{

namespace srv
{

struct Shiji
{
  using Request = boeingtest_msg::srv::Shiji_Request;
  using Response = boeingtest_msg::srv::Shiji_Response;
};

}  // namespace srv

}  // namespace boeingtest_msg

#endif  // BOEINGTEST_MSG__SRV__DETAIL__SHIJI__STRUCT_HPP_
