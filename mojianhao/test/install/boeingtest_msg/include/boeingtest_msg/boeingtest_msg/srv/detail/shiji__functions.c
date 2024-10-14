// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from boeingtest_msg:srv/Shiji.idl
// generated code does not contain a copyright notice
#include "boeingtest_msg/srv/detail/shiji__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
boeingtest_msg__srv__Shiji_Request__init(boeingtest_msg__srv__Shiji_Request * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // x
  // y
  // the
  return true;
}

void
boeingtest_msg__srv__Shiji_Request__fini(boeingtest_msg__srv__Shiji_Request * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // x
  // y
  // the
}

bool
boeingtest_msg__srv__Shiji_Request__are_equal(const boeingtest_msg__srv__Shiji_Request * lhs, const boeingtest_msg__srv__Shiji_Request * rhs)
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
  // the
  if (lhs->the != rhs->the) {
    return false;
  }
  return true;
}

bool
boeingtest_msg__srv__Shiji_Request__copy(
  const boeingtest_msg__srv__Shiji_Request * input,
  boeingtest_msg__srv__Shiji_Request * output)
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
  // the
  output->the = input->the;
  return true;
}

boeingtest_msg__srv__Shiji_Request *
boeingtest_msg__srv__Shiji_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__srv__Shiji_Request * msg = (boeingtest_msg__srv__Shiji_Request *)allocator.allocate(sizeof(boeingtest_msg__srv__Shiji_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__srv__Shiji_Request));
  bool success = boeingtest_msg__srv__Shiji_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__srv__Shiji_Request__destroy(boeingtest_msg__srv__Shiji_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__srv__Shiji_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__srv__Shiji_Request__Sequence__init(boeingtest_msg__srv__Shiji_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__srv__Shiji_Request * data = NULL;

  if (size) {
    data = (boeingtest_msg__srv__Shiji_Request *)allocator.zero_allocate(size, sizeof(boeingtest_msg__srv__Shiji_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__srv__Shiji_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__srv__Shiji_Request__fini(&data[i - 1]);
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
boeingtest_msg__srv__Shiji_Request__Sequence__fini(boeingtest_msg__srv__Shiji_Request__Sequence * array)
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
      boeingtest_msg__srv__Shiji_Request__fini(&array->data[i]);
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

boeingtest_msg__srv__Shiji_Request__Sequence *
boeingtest_msg__srv__Shiji_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__srv__Shiji_Request__Sequence * array = (boeingtest_msg__srv__Shiji_Request__Sequence *)allocator.allocate(sizeof(boeingtest_msg__srv__Shiji_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__srv__Shiji_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__srv__Shiji_Request__Sequence__destroy(boeingtest_msg__srv__Shiji_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__srv__Shiji_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__srv__Shiji_Request__Sequence__are_equal(const boeingtest_msg__srv__Shiji_Request__Sequence * lhs, const boeingtest_msg__srv__Shiji_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__srv__Shiji_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__srv__Shiji_Request__Sequence__copy(
  const boeingtest_msg__srv__Shiji_Request__Sequence * input,
  boeingtest_msg__srv__Shiji_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__srv__Shiji_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__srv__Shiji_Request * data =
      (boeingtest_msg__srv__Shiji_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__srv__Shiji_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__srv__Shiji_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__srv__Shiji_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
boeingtest_msg__srv__Shiji_Response__init(boeingtest_msg__srv__Shiji_Response * msg)
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
boeingtest_msg__srv__Shiji_Response__fini(boeingtest_msg__srv__Shiji_Response * msg)
{
  if (!msg) {
    return;
  }
  // distance
  // factx
  // facty
}

bool
boeingtest_msg__srv__Shiji_Response__are_equal(const boeingtest_msg__srv__Shiji_Response * lhs, const boeingtest_msg__srv__Shiji_Response * rhs)
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
boeingtest_msg__srv__Shiji_Response__copy(
  const boeingtest_msg__srv__Shiji_Response * input,
  boeingtest_msg__srv__Shiji_Response * output)
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

boeingtest_msg__srv__Shiji_Response *
boeingtest_msg__srv__Shiji_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__srv__Shiji_Response * msg = (boeingtest_msg__srv__Shiji_Response *)allocator.allocate(sizeof(boeingtest_msg__srv__Shiji_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__srv__Shiji_Response));
  bool success = boeingtest_msg__srv__Shiji_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__srv__Shiji_Response__destroy(boeingtest_msg__srv__Shiji_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__srv__Shiji_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__srv__Shiji_Response__Sequence__init(boeingtest_msg__srv__Shiji_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__srv__Shiji_Response * data = NULL;

  if (size) {
    data = (boeingtest_msg__srv__Shiji_Response *)allocator.zero_allocate(size, sizeof(boeingtest_msg__srv__Shiji_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__srv__Shiji_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__srv__Shiji_Response__fini(&data[i - 1]);
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
boeingtest_msg__srv__Shiji_Response__Sequence__fini(boeingtest_msg__srv__Shiji_Response__Sequence * array)
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
      boeingtest_msg__srv__Shiji_Response__fini(&array->data[i]);
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

boeingtest_msg__srv__Shiji_Response__Sequence *
boeingtest_msg__srv__Shiji_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__srv__Shiji_Response__Sequence * array = (boeingtest_msg__srv__Shiji_Response__Sequence *)allocator.allocate(sizeof(boeingtest_msg__srv__Shiji_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__srv__Shiji_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__srv__Shiji_Response__Sequence__destroy(boeingtest_msg__srv__Shiji_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__srv__Shiji_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__srv__Shiji_Response__Sequence__are_equal(const boeingtest_msg__srv__Shiji_Response__Sequence * lhs, const boeingtest_msg__srv__Shiji_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__srv__Shiji_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__srv__Shiji_Response__Sequence__copy(
  const boeingtest_msg__srv__Shiji_Response__Sequence * input,
  boeingtest_msg__srv__Shiji_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__srv__Shiji_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__srv__Shiji_Response * data =
      (boeingtest_msg__srv__Shiji_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__srv__Shiji_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__srv__Shiji_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__srv__Shiji_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
