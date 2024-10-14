// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boeingtest_msg:action/Meilei.idl
// generated code does not contain a copyright notice

#ifndef BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__STRUCT_H_
#define BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Meilei in the package boeingtest_msg.
typedef struct boeingtest_msg__action__Meilei_Goal
{
  int32_t choice;
  float x;
  float y;
  float ang;
} boeingtest_msg__action__Meilei_Goal;

// Struct for a sequence of boeingtest_msg__action__Meilei_Goal.
typedef struct boeingtest_msg__action__Meilei_Goal__Sequence
{
  boeingtest_msg__action__Meilei_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__action__Meilei_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Meilei in the package boeingtest_msg.
typedef struct boeingtest_msg__action__Meilei_Result
{
  float turtle_x;
  float turtle_y;
} boeingtest_msg__action__Meilei_Result;

// Struct for a sequence of boeingtest_msg__action__Meilei_Result.
typedef struct boeingtest_msg__action__Meilei_Result__Sequence
{
  boeingtest_msg__action__Meilei_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__action__Meilei_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Meilei in the package boeingtest_msg.
typedef struct boeingtest_msg__action__Meilei_Feedback
{
  float distance;
  float factx;
  float facty;
} boeingtest_msg__action__Meilei_Feedback;

// Struct for a sequence of boeingtest_msg__action__Meilei_Feedback.
typedef struct boeingtest_msg__action__Meilei_Feedback__Sequence
{
  boeingtest_msg__action__Meilei_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__action__Meilei_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "boeingtest_msg/action/detail/meilei__struct.h"

/// Struct defined in action/Meilei in the package boeingtest_msg.
typedef struct boeingtest_msg__action__Meilei_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  boeingtest_msg__action__Meilei_Goal goal;
} boeingtest_msg__action__Meilei_SendGoal_Request;

// Struct for a sequence of boeingtest_msg__action__Meilei_SendGoal_Request.
typedef struct boeingtest_msg__action__Meilei_SendGoal_Request__Sequence
{
  boeingtest_msg__action__Meilei_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__action__Meilei_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Meilei in the package boeingtest_msg.
typedef struct boeingtest_msg__action__Meilei_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} boeingtest_msg__action__Meilei_SendGoal_Response;

// Struct for a sequence of boeingtest_msg__action__Meilei_SendGoal_Response.
typedef struct boeingtest_msg__action__Meilei_SendGoal_Response__Sequence
{
  boeingtest_msg__action__Meilei_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__action__Meilei_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Meilei in the package boeingtest_msg.
typedef struct boeingtest_msg__action__Meilei_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} boeingtest_msg__action__Meilei_GetResult_Request;

// Struct for a sequence of boeingtest_msg__action__Meilei_GetResult_Request.
typedef struct boeingtest_msg__action__Meilei_GetResult_Request__Sequence
{
  boeingtest_msg__action__Meilei_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__action__Meilei_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.h"

/// Struct defined in action/Meilei in the package boeingtest_msg.
typedef struct boeingtest_msg__action__Meilei_GetResult_Response
{
  int8_t status;
  boeingtest_msg__action__Meilei_Result result;
} boeingtest_msg__action__Meilei_GetResult_Response;

// Struct for a sequence of boeingtest_msg__action__Meilei_GetResult_Response.
typedef struct boeingtest_msg__action__Meilei_GetResult_Response__Sequence
{
  boeingtest_msg__action__Meilei_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__action__Meilei_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.h"

/// Struct defined in action/Meilei in the package boeingtest_msg.
typedef struct boeingtest_msg__action__Meilei_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  boeingtest_msg__action__Meilei_Feedback feedback;
} boeingtest_msg__action__Meilei_FeedbackMessage;

// Struct for a sequence of boeingtest_msg__action__Meilei_FeedbackMessage.
typedef struct boeingtest_msg__action__Meilei_FeedbackMessage__Sequence
{
  boeingtest_msg__action__Meilei_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boeingtest_msg__action__Meilei_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOEINGTEST_MSG__ACTION__DETAIL__MEILEI__STRUCT_H_
