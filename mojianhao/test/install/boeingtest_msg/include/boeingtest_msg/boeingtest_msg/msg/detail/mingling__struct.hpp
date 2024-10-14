// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boeingtest_msg:msg/Mingling.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__MSG__DETAIL__MINGLING__STRUCT_HPP_
#define BOEINGTEST_MSG__MSG__DETAIL__MINGLING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__msg__Mingling __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__msg__Mingling __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mingling_
{
  using Type = Mingling_<ContainerAllocator>;

  explicit Mingling_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0l;
      this->can_x = 0.0f;
      this->can_y = 0.0f;
    }
  }

  explicit Mingling_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0l;
      this->can_x = 0.0f;
      this->can_y = 0.0f;
    }
  }

  // field types and members
  using _choice_type =
    int32_t;
  _choice_type choice;
  using _can_x_type =
    float;
  _can_x_type can_x;
  using _can_y_type =
    float;
  _can_y_type can_y;

  // setters for named parameter idiom
  Type & set__choice(
    const int32_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__can_x(
    const float & _arg)
  {
    this->can_x = _arg;
    return *this;
  }
  Type & set__can_y(
    const float & _arg)
  {
    this->can_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::msg::Mingling_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::msg::Mingling_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::msg::Mingling_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::msg::Mingling_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::msg::Mingling_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::msg::Mingling_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::msg::Mingling_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::msg::Mingling_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::msg::Mingling_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::msg::Mingling_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__msg__Mingling
    std::shared_ptr<boeingtest_msg::msg::Mingling_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__msg__Mingling
    std::shared_ptr<boeingtest_msg::msg::Mingling_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mingling_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->can_x != other.can_x) {
      return false;
    }
    if (this->can_y != other.can_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mingling_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mingling_

// alias to use template instance with default allocator
using Mingling =
  boeingtest_msg::msg::Mingling_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace boeingtest_msg

#endif  // BOEINGTEST_MSG__MSG__DETAIL__MINGLING__STRUCT_HPP_
