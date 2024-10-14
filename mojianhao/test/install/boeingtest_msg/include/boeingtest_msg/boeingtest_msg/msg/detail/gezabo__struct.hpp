// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boeingtest_msg:msg/Gezabo.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__MSG__DETAIL__GEZABO__STRUCT_HPP_
#define BOEINGTEST_MSG__MSG__DETAIL__GEZABO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__boeingtest_msg__msg__Gezabo __attribute__((deprecated))
#else
# define DEPRECATED__boeingtest_msg__msg__Gezabo __declspec(deprecated)
#endif

namespace boeingtest_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gezabo_
{
  using Type = Gezabo_<ContainerAllocator>;

  explicit Gezabo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meter = 0.0f;
    }
  }

  explicit Gezabo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meter = 0.0f;
    }
  }

  // field types and members
  using _meter_type =
    float;
  _meter_type meter;

  // setters for named parameter idiom
  Type & set__meter(
    const float & _arg)
  {
    this->meter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boeingtest_msg::msg::Gezabo_<ContainerAllocator> *;
  using ConstRawPtr =
    const boeingtest_msg::msg::Gezabo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boeingtest_msg::msg::Gezabo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boeingtest_msg::msg::Gezabo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::msg::Gezabo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::msg::Gezabo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boeingtest_msg::msg::Gezabo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boeingtest_msg::msg::Gezabo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boeingtest_msg::msg::Gezabo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boeingtest_msg::msg::Gezabo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boeingtest_msg__msg__Gezabo
    std::shared_ptr<boeingtest_msg::msg::Gezabo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boeingtest_msg__msg__Gezabo
    std::shared_ptr<boeingtest_msg::msg::Gezabo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gezabo_ & other) const
  {
    if (this->meter != other.meter) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gezabo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gezabo_

// alias to use template instance with default allocator
using Gezabo =
  boeingtest_msg::msg::Gezabo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace boeingtest_msg

#endif  // BOEINGTEST_MSG__MSG__DETAIL__GEZABO__STRUCT_HPP_
