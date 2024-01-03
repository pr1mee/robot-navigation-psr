// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robile_interfaces:msg/PositionLabelled.idl
// generated code does not contain a copyright notice

#ifndef ROBILE_INTERFACES__MSG__DETAIL__POSITION_LABELLED__STRUCT_HPP_
#define ROBILE_INTERFACES__MSG__DETAIL__POSITION_LABELLED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robile_interfaces__msg__PositionLabelled __attribute__((deprecated))
#else
# define DEPRECATED__robile_interfaces__msg__PositionLabelled __declspec(deprecated)
#endif

namespace robile_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionLabelled_
{
  using Type = PositionLabelled_<ContainerAllocator>;

  explicit PositionLabelled_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit PositionLabelled_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robile_interfaces::msg::PositionLabelled_<ContainerAllocator> *;
  using ConstRawPtr =
    const robile_interfaces::msg::PositionLabelled_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robile_interfaces::msg::PositionLabelled_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robile_interfaces::msg::PositionLabelled_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robile_interfaces::msg::PositionLabelled_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robile_interfaces::msg::PositionLabelled_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robile_interfaces::msg::PositionLabelled_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robile_interfaces::msg::PositionLabelled_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robile_interfaces::msg::PositionLabelled_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robile_interfaces::msg::PositionLabelled_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robile_interfaces__msg__PositionLabelled
    std::shared_ptr<robile_interfaces::msg::PositionLabelled_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robile_interfaces__msg__PositionLabelled
    std::shared_ptr<robile_interfaces::msg::PositionLabelled_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionLabelled_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionLabelled_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionLabelled_

// alias to use template instance with default allocator
using PositionLabelled =
  robile_interfaces::msg::PositionLabelled_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robile_interfaces

#endif  // ROBILE_INTERFACES__MSG__DETAIL__POSITION_LABELLED__STRUCT_HPP_
