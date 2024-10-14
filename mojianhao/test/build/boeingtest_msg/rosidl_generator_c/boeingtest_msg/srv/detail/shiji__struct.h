// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boeingtest_msg:srv/Shiji.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__SRV__DETAIL__SHIJI__STRUCT_H_
#define BOEINGTEST_MSG__SRV__DETAIL__SHIJI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Shiji in the package boeingtest_msg.
typedef struct boeingtest_msg__srv__Shiji_Request
{
  int32_t choice;
  float x;
  float y;
  float the;
} boeingtest_msg__srv__Shiji_Request;

// Struct for a sequence of boeingtest_msg__srv__Shiji_Request.
typedef struct boeingtest_msg__srv__Shiji_Request__Sequence
{
  boeingtest_msg__srv__Shiji_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__srv__Shiji_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Shiji in the package boeingtest_msg.
typedef struct boeingtest_msg__srv__Shiji_Response
{
  double distance;
  float factx;
  float facty;
} boeingtest_msg__srv__Shiji_Response;

// Struct for a sequence of boeingtest_msg__srv__Shiji_Response.
typedef struct boeingtest_msg__srv__Shiji_Response__Sequence
{
  boeingtest_msg__srv__Shiji_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__srv__Shiji_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOEINGTEST_MSG__SRV__DETAIL__SHIJI__STRUCT_H_
