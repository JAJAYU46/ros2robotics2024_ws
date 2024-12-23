// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scout_msgs:msg/ScoutRCState.idl
// generated code does not contain a copyright notice

#ifndef SCOUT_MSGS__MSG__DETAIL__SCOUT_RC_STATE__STRUCT_HPP_
#define SCOUT_MSGS__MSG__DETAIL__SCOUT_RC_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__scout_msgs__msg__ScoutRCState __attribute__((deprecated))
#else
# define DEPRECATED__scout_msgs__msg__ScoutRCState __declspec(deprecated)
#endif

namespace scout_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScoutRCState_
{
  using Type = ScoutRCState_<ContainerAllocator>;

  explicit ScoutRCState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->swa = 0;
      this->swb = 0;
      this->swc = 0;
      this->swd = 0;
      this->stick_right_v = 0;
      this->stick_right_h = 0;
      this->stick_left_v = 0;
      this->stick_left_h = 0;
      this->var_a = 0;
    }
  }

  explicit ScoutRCState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->swa = 0;
      this->swb = 0;
      this->swc = 0;
      this->swd = 0;
      this->stick_right_v = 0;
      this->stick_right_h = 0;
      this->stick_left_v = 0;
      this->stick_left_h = 0;
      this->var_a = 0;
    }
  }

  // field types and members
  using _swa_type =
    uint8_t;
  _swa_type swa;
  using _swb_type =
    uint8_t;
  _swb_type swb;
  using _swc_type =
    uint8_t;
  _swc_type swc;
  using _swd_type =
    uint8_t;
  _swd_type swd;
  using _stick_right_v_type =
    int8_t;
  _stick_right_v_type stick_right_v;
  using _stick_right_h_type =
    int8_t;
  _stick_right_h_type stick_right_h;
  using _stick_left_v_type =
    int8_t;
  _stick_left_v_type stick_left_v;
  using _stick_left_h_type =
    int8_t;
  _stick_left_h_type stick_left_h;
  using _var_a_type =
    int8_t;
  _var_a_type var_a;

  // setters for named parameter idiom
  Type & set__swa(
    const uint8_t & _arg)
  {
    this->swa = _arg;
    return *this;
  }
  Type & set__swb(
    const uint8_t & _arg)
  {
    this->swb = _arg;
    return *this;
  }
  Type & set__swc(
    const uint8_t & _arg)
  {
    this->swc = _arg;
    return *this;
  }
  Type & set__swd(
    const uint8_t & _arg)
  {
    this->swd = _arg;
    return *this;
  }
  Type & set__stick_right_v(
    const int8_t & _arg)
  {
    this->stick_right_v = _arg;
    return *this;
  }
  Type & set__stick_right_h(
    const int8_t & _arg)
  {
    this->stick_right_h = _arg;
    return *this;
  }
  Type & set__stick_left_v(
    const int8_t & _arg)
  {
    this->stick_left_v = _arg;
    return *this;
  }
  Type & set__stick_left_h(
    const int8_t & _arg)
  {
    this->stick_left_h = _arg;
    return *this;
  }
  Type & set__var_a(
    const int8_t & _arg)
  {
    this->var_a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scout_msgs::msg::ScoutRCState_<ContainerAllocator> *;
  using ConstRawPtr =
    const scout_msgs::msg::ScoutRCState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scout_msgs::msg::ScoutRCState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scout_msgs::msg::ScoutRCState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scout_msgs::msg::ScoutRCState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scout_msgs::msg::ScoutRCState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scout_msgs::msg::ScoutRCState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scout_msgs::msg::ScoutRCState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scout_msgs::msg::ScoutRCState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scout_msgs::msg::ScoutRCState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scout_msgs__msg__ScoutRCState
    std::shared_ptr<scout_msgs::msg::ScoutRCState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scout_msgs__msg__ScoutRCState
    std::shared_ptr<scout_msgs::msg::ScoutRCState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScoutRCState_ & other) const
  {
    if (this->swa != other.swa) {
      return false;
    }
    if (this->swb != other.swb) {
      return false;
    }
    if (this->swc != other.swc) {
      return false;
    }
    if (this->swd != other.swd) {
      return false;
    }
    if (this->stick_right_v != other.stick_right_v) {
      return false;
    }
    if (this->stick_right_h != other.stick_right_h) {
      return false;
    }
    if (this->stick_left_v != other.stick_left_v) {
      return false;
    }
    if (this->stick_left_h != other.stick_left_h) {
      return false;
    }
    if (this->var_a != other.var_a) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScoutRCState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScoutRCState_

// alias to use template instance with default allocator
using ScoutRCState =
  scout_msgs::msg::ScoutRCState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scout_msgs

#endif  // SCOUT_MSGS__MSG__DETAIL__SCOUT_RC_STATE__STRUCT_HPP_
