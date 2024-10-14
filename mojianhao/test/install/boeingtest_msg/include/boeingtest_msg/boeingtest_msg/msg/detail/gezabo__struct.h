// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boeingtest_msg:msg/Gezabo.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__MSG__DETAIL__GEZABO__STRUCT_H_
#define BOEINGTEST_MSG__MSG__DETAIL__GEZABO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Gezabo in the package boeingtest_msg.
typedef struct boeingtest_msg__msg__Gezabo
{
  float meter;
} boeingtest_msg__msg__Gezabo;

// Struct for a sequence of boeingtest_msg__msg__Gezabo.
typedef struct boeingtest_msg__msg__Gezabo__Sequence
{
  boeingtest_msg__msg__Gezabo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__msg__Gezabo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOEINGTEST_MSG__MSG__DETAIL__GEZABO__STRUCT_H_
