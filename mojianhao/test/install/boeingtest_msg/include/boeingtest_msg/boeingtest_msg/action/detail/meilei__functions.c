// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from boeingtest_msg:action/Meilei.idl
// generated code does not contain a copyright notice
#include "boeingtest_msg/action/detail/meilei__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
boeingtest_msg__action__Meilei_Goal__init(boeingtest_msg__action__Meilei_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // x
  // y
  // ang
  return true;
}

void
boeingtest_msg__action__Meilei_Goal__fini(boeingtest_msg__action__Meilei_Goal * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // x
  // y
  // ang
}

bool
boeingtest_msg__action__Meilei_Goal__are_equal(const boeingtest_msg__action__Meilei_Goal * lhs, const boeingtest_msg__action__Meilei_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // choice
  if (lhs->choice != rhs->choice) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // ang
  if (lhs->ang != rhs->ang) {
    return false;
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_Goal__copy(
  const boeingtest_msg__action__Meilei_Goal * input,
  boeingtest_msg__action__Meilei_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // choice
  output->choice = input->choice;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // ang
  output->ang = input->ang;
  return true;
}

boeingtest_msg__action__Meilei_Goal *
boeingtest_msg__action__Meilei_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_Goal * msg = (boeingtest_msg__action__Meilei_Goal *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__action__Meilei_Goal));
  bool success = boeingtest_msg__action__Meilei_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__action__Meilei_Goal__destroy(boeingtest_msg__action__Meilei_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__action__Meilei_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__action__Meilei_Goal__Sequence__init(boeingtest_msg__action__Meilei_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_Goal * data = NULL;

  if (size) {
    data = (boeingtest_msg__action__Meilei_Goal *)allocator.zero_allocate(size, sizeof(boeingtest_msg__action__Meilei_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__action__Meilei_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__action__Meilei_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
boeingtest_msg__action__Meilei_Goal__Sequence__fini(boeingtest_msg__action__Meilei_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      boeingtest_msg__action__Meilei_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

boeingtest_msg__action__Meilei_Goal__Sequence *
boeingtest_msg__action__Meilei_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_Goal__Sequence * array = (boeingtest_msg__action__Meilei_Goal__Sequence *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__action__Meilei_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__action__Meilei_Goal__Sequence__destroy(boeingtest_msg__action__Meilei_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__action__Meilei_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__action__Meilei_Goal__Sequence__are_equal(const boeingtest_msg__action__Meilei_Goal__Sequence * lhs, const boeingtest_msg__action__Meilei_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__action__Meilei_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_Goal__Sequence__copy(
  const boeingtest_msg__action__Meilei_Goal__Sequence * input,
  boeingtest_msg__action__Meilei_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__action__Meilei_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__action__Meilei_Goal * data =
      (boeingtest_msg__action__Meilei_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__action__Meilei_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__action__Meilei_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__action__Meilei_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
boeingtest_msg__action__Meilei_Result__init(boeingtest_msg__action__Meilei_Result * msg)
{
  if (!msg) {
    return false;
  }
  // turtle_x
  // turtle_y
  return true;
}

void
boeingtest_msg__action__Meilei_Result__fini(boeingtest_msg__action__Meilei_Result * msg)
{
  if (!msg) {
    return;
  }
  // turtle_x
  // turtle_y
}

bool
boeingtest_msg__action__Meilei_Result__are_equal(const boeingtest_msg__action__Meilei_Result * lhs, const boeingtest_msg__action__Meilei_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtle_x
  if (lhs->turtle_x != rhs->turtle_x) {
    return false;
  }
  // turtle_y
  if (lhs->turtle_y != rhs->turtle_y) {
    return false;
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_Result__copy(
  const boeingtest_msg__action__Meilei_Result * input,
  boeingtest_msg__action__Meilei_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // turtle_x
  output->turtle_x = input->turtle_x;
  // turtle_y
  output->turtle_y = input->turtle_y;
  return true;
}

boeingtest_msg__action__Meilei_Result *
boeingtest_msg__action__Meilei_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_Result * msg = (boeingtest_msg__action__Meilei_Result *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__action__Meilei_Result));
  bool success = boeingtest_msg__action__Meilei_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__action__Meilei_Result__destroy(boeingtest_msg__action__Meilei_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__action__Meilei_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__action__Meilei_Result__Sequence__init(boeingtest_msg__action__Meilei_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_Result * data = NULL;

  if (size) {
    data = (boeingtest_msg__action__Meilei_Result *)allocator.zero_allocate(size, sizeof(boeingtest_msg__action__Meilei_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__action__Meilei_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__action__Meilei_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
boeingtest_msg__action__Meilei_Result__Sequence__fini(boeingtest_msg__action__Meilei_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      boeingtest_msg__action__Meilei_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

boeingtest_msg__action__Meilei_Result__Sequence *
boeingtest_msg__action__Meilei_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_Result__Sequence * array = (boeingtest_msg__action__Meilei_Result__Sequence *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__action__Meilei_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__action__Meilei_Result__Sequence__destroy(boeingtest_msg__action__Meilei_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__action__Meilei_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__action__Meilei_Result__Sequence__are_equal(const boeingtest_msg__action__Meilei_Result__Sequence * lhs, const boeingtest_msg__action__Meilei_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__action__Meilei_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_Result__Sequence__copy(
  const boeingtest_msg__action__Meilei_Result__Sequence * input,
  boeingtest_msg__action__Meilei_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__action__Meilei_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__action__Meilei_Result * data =
      (boeingtest_msg__action__Meilei_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__action__Meilei_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__action__Meilei_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__action__Meilei_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
boeingtest_msg__action__Meilei_Feedback__init(boeingtest_msg__action__Meilei_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  // factx
  // facty
  return true;
}

void
boeingtest_msg__action__Meilei_Feedback__fini(boeingtest_msg__action__Meilei_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance
  // factx
  // facty
}

bool
boeingtest_msg__action__Meilei_Feedback__are_equal(const boeingtest_msg__action__Meilei_Feedback * lhs, const boeingtest_msg__action__Meilei_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // factx
  if (lhs->factx != rhs->factx) {
    return false;
  }
  // facty
  if (lhs->facty != rhs->facty) {
    return false;
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_Feedback__copy(
  const boeingtest_msg__action__Meilei_Feedback * input,
  boeingtest_msg__action__Meilei_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  // factx
  output->factx = input->factx;
  // facty
  output->facty = input->facty;
  return true;
}

boeingtest_msg__action__Meilei_Feedback *
boeingtest_msg__action__Meilei_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_Feedback * msg = (boeingtest_msg__action__Meilei_Feedback *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__action__Meilei_Feedback));
  bool success = boeingtest_msg__action__Meilei_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__action__Meilei_Feedback__destroy(boeingtest_msg__action__Meilei_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__action__Meilei_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__action__Meilei_Feedback__Sequence__init(boeingtest_msg__action__Meilei_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_Feedback * data = NULL;

  if (size) {
    data = (boeingtest_msg__action__Meilei_Feedback *)allocator.zero_allocate(size, sizeof(boeingtest_msg__action__Meilei_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__action__Meilei_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__action__Meilei_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
boeingtest_msg__action__Meilei_Feedback__Sequence__fini(boeingtest_msg__action__Meilei_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      boeingtest_msg__action__Meilei_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

boeingtest_msg__action__Meilei_Feedback__Sequence *
boeingtest_msg__action__Meilei_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_Feedback__Sequence * array = (boeingtest_msg__action__Meilei_Feedback__Sequence *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__action__Meilei_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__action__Meilei_Feedback__Sequence__destroy(boeingtest_msg__action__Meilei_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__action__Meilei_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__action__Meilei_Feedback__Sequence__are_equal(const boeingtest_msg__action__Meilei_Feedback__Sequence * lhs, const boeingtest_msg__action__Meilei_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__action__Meilei_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_Feedback__Sequence__copy(
  const boeingtest_msg__action__Meilei_Feedback__Sequence * input,
  boeingtest_msg__action__Meilei_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__action__Meilei_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__action__Meilei_Feedback * data =
      (boeingtest_msg__action__Meilei_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__action__Meilei_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__action__Meilei_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__action__Meilei_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "boeingtest_msg/action/detail/meilei__functions.h"

bool
boeingtest_msg__action__Meilei_SendGoal_Request__init(boeingtest_msg__action__Meilei_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    boeingtest_msg__action__Meilei_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!boeingtest_msg__action__Meilei_Goal__init(&msg->goal)) {
    boeingtest_msg__action__Meilei_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
boeingtest_msg__action__Meilei_SendGoal_Request__fini(boeingtest_msg__action__Meilei_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  boeingtest_msg__action__Meilei_Goal__fini(&msg->goal);
}

bool
boeingtest_msg__action__Meilei_SendGoal_Request__are_equal(const boeingtest_msg__action__Meilei_SendGoal_Request * lhs, const boeingtest_msg__action__Meilei_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!boeingtest_msg__action__Meilei_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_SendGoal_Request__copy(
  const boeingtest_msg__action__Meilei_SendGoal_Request * input,
  boeingtest_msg__action__Meilei_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!boeingtest_msg__action__Meilei_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

boeingtest_msg__action__Meilei_SendGoal_Request *
boeingtest_msg__action__Meilei_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_SendGoal_Request * msg = (boeingtest_msg__action__Meilei_SendGoal_Request *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__action__Meilei_SendGoal_Request));
  bool success = boeingtest_msg__action__Meilei_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__action__Meilei_SendGoal_Request__destroy(boeingtest_msg__action__Meilei_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__action__Meilei_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__action__Meilei_SendGoal_Request__Sequence__init(boeingtest_msg__action__Meilei_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_SendGoal_Request * data = NULL;

  if (size) {
    data = (boeingtest_msg__action__Meilei_SendGoal_Request *)allocator.zero_allocate(size, sizeof(boeingtest_msg__action__Meilei_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__action__Meilei_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__action__Meilei_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
boeingtest_msg__action__Meilei_SendGoal_Request__Sequence__fini(boeingtest_msg__action__Meilei_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      boeingtest_msg__action__Meilei_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

boeingtest_msg__action__Meilei_SendGoal_Request__Sequence *
boeingtest_msg__action__Meilei_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_SendGoal_Request__Sequence * array = (boeingtest_msg__action__Meilei_SendGoal_Request__Sequence *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__action__Meilei_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__action__Meilei_SendGoal_Request__Sequence__destroy(boeingtest_msg__action__Meilei_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__action__Meilei_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__action__Meilei_SendGoal_Request__Sequence__are_equal(const boeingtest_msg__action__Meilei_SendGoal_Request__Sequence * lhs, const boeingtest_msg__action__Meilei_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__action__Meilei_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_SendGoal_Request__Sequence__copy(
  const boeingtest_msg__action__Meilei_SendGoal_Request__Sequence * input,
  boeingtest_msg__action__Meilei_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__action__Meilei_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__action__Meilei_SendGoal_Request * data =
      (boeingtest_msg__action__Meilei_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__action__Meilei_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__action__Meilei_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__action__Meilei_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
boeingtest_msg__action__Meilei_SendGoal_Response__init(boeingtest_msg__action__Meilei_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    boeingtest_msg__action__Meilei_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
boeingtest_msg__action__Meilei_SendGoal_Response__fini(boeingtest_msg__action__Meilei_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
boeingtest_msg__action__Meilei_SendGoal_Response__are_equal(const boeingtest_msg__action__Meilei_SendGoal_Response * lhs, const boeingtest_msg__action__Meilei_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_SendGoal_Response__copy(
  const boeingtest_msg__action__Meilei_SendGoal_Response * input,
  boeingtest_msg__action__Meilei_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

boeingtest_msg__action__Meilei_SendGoal_Response *
boeingtest_msg__action__Meilei_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_SendGoal_Response * msg = (boeingtest_msg__action__Meilei_SendGoal_Response *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__action__Meilei_SendGoal_Response));
  bool success = boeingtest_msg__action__Meilei_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__action__Meilei_SendGoal_Response__destroy(boeingtest_msg__action__Meilei_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__action__Meilei_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__action__Meilei_SendGoal_Response__Sequence__init(boeingtest_msg__action__Meilei_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_SendGoal_Response * data = NULL;

  if (size) {
    data = (boeingtest_msg__action__Meilei_SendGoal_Response *)allocator.zero_allocate(size, sizeof(boeingtest_msg__action__Meilei_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__action__Meilei_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__action__Meilei_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
boeingtest_msg__action__Meilei_SendGoal_Response__Sequence__fini(boeingtest_msg__action__Meilei_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      boeingtest_msg__action__Meilei_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

boeingtest_msg__action__Meilei_SendGoal_Response__Sequence *
boeingtest_msg__action__Meilei_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_SendGoal_Response__Sequence * array = (boeingtest_msg__action__Meilei_SendGoal_Response__Sequence *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__action__Meilei_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__action__Meilei_SendGoal_Response__Sequence__destroy(boeingtest_msg__action__Meilei_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__action__Meilei_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__action__Meilei_SendGoal_Response__Sequence__are_equal(const boeingtest_msg__action__Meilei_SendGoal_Response__Sequence * lhs, const boeingtest_msg__action__Meilei_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__action__Meilei_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_SendGoal_Response__Sequence__copy(
  const boeingtest_msg__action__Meilei_SendGoal_Response__Sequence * input,
  boeingtest_msg__action__Meilei_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__action__Meilei_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__action__Meilei_SendGoal_Response * data =
      (boeingtest_msg__action__Meilei_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__action__Meilei_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__action__Meilei_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__action__Meilei_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
boeingtest_msg__action__Meilei_GetResult_Request__init(boeingtest_msg__action__Meilei_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    boeingtest_msg__action__Meilei_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
boeingtest_msg__action__Meilei_GetResult_Request__fini(boeingtest_msg__action__Meilei_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
boeingtest_msg__action__Meilei_GetResult_Request__are_equal(const boeingtest_msg__action__Meilei_GetResult_Request * lhs, const boeingtest_msg__action__Meilei_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_GetResult_Request__copy(
  const boeingtest_msg__action__Meilei_GetResult_Request * input,
  boeingtest_msg__action__Meilei_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

boeingtest_msg__action__Meilei_GetResult_Request *
boeingtest_msg__action__Meilei_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_GetResult_Request * msg = (boeingtest_msg__action__Meilei_GetResult_Request *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__action__Meilei_GetResult_Request));
  bool success = boeingtest_msg__action__Meilei_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__action__Meilei_GetResult_Request__destroy(boeingtest_msg__action__Meilei_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__action__Meilei_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__action__Meilei_GetResult_Request__Sequence__init(boeingtest_msg__action__Meilei_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_GetResult_Request * data = NULL;

  if (size) {
    data = (boeingtest_msg__action__Meilei_GetResult_Request *)allocator.zero_allocate(size, sizeof(boeingtest_msg__action__Meilei_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__action__Meilei_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__action__Meilei_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
boeingtest_msg__action__Meilei_GetResult_Request__Sequence__fini(boeingtest_msg__action__Meilei_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      boeingtest_msg__action__Meilei_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

boeingtest_msg__action__Meilei_GetResult_Request__Sequence *
boeingtest_msg__action__Meilei_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_GetResult_Request__Sequence * array = (boeingtest_msg__action__Meilei_GetResult_Request__Sequence *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__action__Meilei_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__action__Meilei_GetResult_Request__Sequence__destroy(boeingtest_msg__action__Meilei_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__action__Meilei_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__action__Meilei_GetResult_Request__Sequence__are_equal(const boeingtest_msg__action__Meilei_GetResult_Request__Sequence * lhs, const boeingtest_msg__action__Meilei_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__action__Meilei_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_GetResult_Request__Sequence__copy(
  const boeingtest_msg__action__Meilei_GetResult_Request__Sequence * input,
  boeingtest_msg__action__Meilei_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__action__Meilei_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__action__Meilei_GetResult_Request * data =
      (boeingtest_msg__action__Meilei_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__action__Meilei_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__action__Meilei_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__action__Meilei_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "boeingtest_msg/action/detail/meilei__functions.h"

bool
boeingtest_msg__action__Meilei_GetResult_Response__init(boeingtest_msg__action__Meilei_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!boeingtest_msg__action__Meilei_Result__init(&msg->result)) {
    boeingtest_msg__action__Meilei_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
boeingtest_msg__action__Meilei_GetResult_Response__fini(boeingtest_msg__action__Meilei_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  boeingtest_msg__action__Meilei_Result__fini(&msg->result);
}

bool
boeingtest_msg__action__Meilei_GetResult_Response__are_equal(const boeingtest_msg__action__Meilei_GetResult_Response * lhs, const boeingtest_msg__action__Meilei_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!boeingtest_msg__action__Meilei_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_GetResult_Response__copy(
  const boeingtest_msg__action__Meilei_GetResult_Response * input,
  boeingtest_msg__action__Meilei_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!boeingtest_msg__action__Meilei_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

boeingtest_msg__action__Meilei_GetResult_Response *
boeingtest_msg__action__Meilei_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_GetResult_Response * msg = (boeingtest_msg__action__Meilei_GetResult_Response *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__action__Meilei_GetResult_Response));
  bool success = boeingtest_msg__action__Meilei_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__action__Meilei_GetResult_Response__destroy(boeingtest_msg__action__Meilei_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__action__Meilei_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__action__Meilei_GetResult_Response__Sequence__init(boeingtest_msg__action__Meilei_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_GetResult_Response * data = NULL;

  if (size) {
    data = (boeingtest_msg__action__Meilei_GetResult_Response *)allocator.zero_allocate(size, sizeof(boeingtest_msg__action__Meilei_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__action__Meilei_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__action__Meilei_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
boeingtest_msg__action__Meilei_GetResult_Response__Sequence__fini(boeingtest_msg__action__Meilei_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      boeingtest_msg__action__Meilei_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

boeingtest_msg__action__Meilei_GetResult_Response__Sequence *
boeingtest_msg__action__Meilei_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_GetResult_Response__Sequence * array = (boeingtest_msg__action__Meilei_GetResult_Response__Sequence *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__action__Meilei_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__action__Meilei_GetResult_Response__Sequence__destroy(boeingtest_msg__action__Meilei_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__action__Meilei_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__action__Meilei_GetResult_Response__Sequence__are_equal(const boeingtest_msg__action__Meilei_GetResult_Response__Sequence * lhs, const boeingtest_msg__action__Meilei_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__action__Meilei_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_GetResult_Response__Sequence__copy(
  const boeingtest_msg__action__Meilei_GetResult_Response__Sequence * input,
  boeingtest_msg__action__Meilei_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__action__Meilei_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__action__Meilei_GetResult_Response * data =
      (boeingtest_msg__action__Meilei_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__action__Meilei_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__action__Meilei_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__action__Meilei_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "boeingtest_msg/action/detail/meilei__functions.h"

bool
boeingtest_msg__action__Meilei_FeedbackMessage__init(boeingtest_msg__action__Meilei_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    boeingtest_msg__action__Meilei_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!boeingtest_msg__action__Meilei_Feedback__init(&msg->feedback)) {
    boeingtest_msg__action__Meilei_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
boeingtest_msg__action__Meilei_FeedbackMessage__fini(boeingtest_msg__action__Meilei_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  boeingtest_msg__action__Meilei_Feedback__fini(&msg->feedback);
}

bool
boeingtest_msg__action__Meilei_FeedbackMessage__are_equal(const boeingtest_msg__action__Meilei_FeedbackMessage * lhs, const boeingtest_msg__action__Meilei_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!boeingtest_msg__action__Meilei_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_FeedbackMessage__copy(
  const boeingtest_msg__action__Meilei_FeedbackMessage * input,
  boeingtest_msg__action__Meilei_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!boeingtest_msg__action__Meilei_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

boeingtest_msg__action__Meilei_FeedbackMessage *
boeingtest_msg__action__Meilei_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_FeedbackMessage * msg = (boeingtest_msg__action__Meilei_FeedbackMessage *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__action__Meilei_FeedbackMessage));
  bool success = boeingtest_msg__action__Meilei_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__action__Meilei_FeedbackMessage__destroy(boeingtest_msg__action__Meilei_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__action__Meilei_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__action__Meilei_FeedbackMessage__Sequence__init(boeingtest_msg__action__Meilei_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_FeedbackMessage * data = NULL;

  if (size) {
    data = (boeingtest_msg__action__Meilei_FeedbackMessage *)allocator.zero_allocate(size, sizeof(boeingtest_msg__action__Meilei_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__action__Meilei_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__action__Meilei_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
boeingtest_msg__action__Meilei_FeedbackMessage__Sequence__fini(boeingtest_msg__action__Meilei_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      boeingtest_msg__action__Meilei_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

boeingtest_msg__action__Meilei_FeedbackMessage__Sequence *
boeingtest_msg__action__Meilei_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__action__Meilei_FeedbackMessage__Sequence * array = (boeingtest_msg__action__Meilei_FeedbackMessage__Sequence *)allocator.allocate(sizeof(boeingtest_msg__action__Meilei_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__action__Meilei_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__action__Meilei_FeedbackMessage__Sequence__destroy(boeingtest_msg__action__Meilei_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__action__Meilei_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__action__Meilei_FeedbackMessage__Sequence__are_equal(const boeingtest_msg__action__Meilei_FeedbackMessage__Sequence * lhs, const boeingtest_msg__action__Meilei_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__action__Meilei_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__action__Meilei_FeedbackMessage__Sequence__copy(
  const boeingtest_msg__action__Meilei_FeedbackMessage__Sequence * input,
  boeingtest_msg__action__Meilei_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__action__Meilei_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__action__Meilei_FeedbackMessage * data =
      (boeingtest_msg__action__Meilei_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__action__Meilei_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__action__Meilei_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__action__Meilei_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
