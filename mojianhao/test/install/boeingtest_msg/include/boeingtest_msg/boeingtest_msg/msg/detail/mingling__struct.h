// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boeingtest_msg:msg/Mingling.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__MSG__DETAIL__MINGLING__STRUCT_H_
#define BOEINGTEST_MSG__MSG__DETAIL__MINGLING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Mingling in the package boeingtest_msg.
typedef struct boeingtest_msg__msg__Mingling
{
  int32_t choice;
  float can_x;
  float can_y;
} boeingtest_msg__msg__Mingling;

// Struct for a sequence of boeingtest_msg__msg__Mingling.
typedef struct boeingtest_msg__msg__Mingling__Sequence
{
  boeingtest_msg__msg__Mingling * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__msg__Mingling__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOEINGTEST_MSG__MSG__DETAIL__MINGLING__STRUCT_H_
