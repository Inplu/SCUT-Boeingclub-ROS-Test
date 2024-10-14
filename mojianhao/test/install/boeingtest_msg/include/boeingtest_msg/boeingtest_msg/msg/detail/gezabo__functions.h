// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from boeingtest_msg:msg/Gezabo.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__MSG__DETAIL__GEZABO__FUNCTIONS_H_
#define BOEINGTEST_MSG__MSG__DETAIL__GEZABO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "boeingtest_msg/msg/rosidl_generator_c__visibility_control.h"

#include "boeingtest_msg/msg/detail/gezabo__struct.h"

/// Initialize msg/Gezabo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * boeingtest_msg__msg__Gezabo
 * )) before or use
 * boeingtest_msg__msg__Gezabo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
bool
boeingtest_msg__msg__Gezabo__init(boeingtest_msg__msg__Gezabo * msg);

/// Finalize msg/Gezabo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
void
boeingtest_msg__msg__Gezabo__fini(boeingtest_msg__msg__Gezabo * msg);

/// Create msg/Gezabo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * boeingtest_msg__msg__Gezabo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
boeingtest_msg__msg__Gezabo *
boeingtest_msg__msg__Gezabo__create();

/// Destroy msg/Gezabo message.
/**
 * It calls
 * boeingtest_msg__msg__Gezabo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
void
boeingtest_msg__msg__Gezabo__destroy(boeingtest_msg__msg__Gezabo * msg);

/// Check for msg/Gezabo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
bool
boeingtest_msg__msg__Gezabo__are_equal(const boeingtest_msg__msg__Gezabo * lhs, const boeingtest_msg__msg__Gezabo * rhs);

/// Copy a msg/Gezabo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
bool
boeingtest_msg__msg__Gezabo__copy(
  const boeingtest_msg__msg__Gezabo * input,
  boeingtest_msg__msg__Gezabo * output);

/// Initialize array of msg/Gezabo messages.
/**
 * It allocates the memory for the number of elements and calls
 * boeingtest_msg__msg__Gezabo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
bool
boeingtest_msg__msg__Gezabo__Sequence__init(boeingtest_msg__msg__Gezabo__Sequence * array, size_t size);

/// Finalize array of msg/Gezabo messages.
/**
 * It calls
 * boeingtest_msg__msg__Gezabo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
void
boeingtest_msg__msg__Gezabo__Sequence__fini(boeingtest_msg__msg__Gezabo__Sequence * array);

/// Create array of msg/Gezabo messages.
/**
 * It allocates the memory for the array and calls
 * boeingtest_msg__msg__Gezabo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
boeingtest_msg__msg__Gezabo__Sequence *
boeingtest_msg__msg__Gezabo__Sequence__create(size_t size);

/// Destroy array of msg/Gezabo messages.
/**
 * It calls
 * boeingtest_msg__msg__Gezabo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
void
boeingtest_msg__msg__Gezabo__Sequence__destroy(boeingtest_msg__msg__Gezabo__Sequence * array);

/// Check for msg/Gezabo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
bool
boeingtest_msg__msg__Gezabo__Sequence__are_equal(const boeingtest_msg__msg__Gezabo__Sequence * lhs, const boeingtest_msg__msg__Gezabo__Sequence * rhs);

/// Copy an array of msg/Gezabo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_boeingtest_msg
bool
boeingtest_msg__msg__Gezabo__Sequence__copy(
  const boeingtest_msg__msg__Gezabo__Sequence * input,
  boeingtest_msg__msg__Gezabo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOEINGTEST_MSG__MSG__DETAIL__GEZABO__FUNCTIONS_H_
