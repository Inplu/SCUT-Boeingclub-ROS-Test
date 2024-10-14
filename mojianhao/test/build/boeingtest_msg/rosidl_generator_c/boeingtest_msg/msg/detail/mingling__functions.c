// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from boeingtest_msg:msg/Mingling.idl
// generated code does not contain a copyright notice
#include "boeingtest_msg/msg/detail/mingling__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
boeingtest_msg__msg__Mingling__init(boeingtest_msg__msg__Mingling * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // can_x
  // can_y
  return true;
}

void
boeingtest_msg__msg__Mingling__fini(boeingtest_msg__msg__Mingling * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // can_x
  // can_y
}

bool
boeingtest_msg__msg__Mingling__are_equal(const boeingtest_msg__msg__Mingling * lhs, const boeingtest_msg__msg__Mingling * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // choice
  if (lhs->choice != rhs->choice) {
    return false;
  }
  // can_x
  if (lhs->can_x != rhs->can_x) {
    return false;
  }
  // can_y
  if (lhs->can_y != rhs->can_y) {
    return false;
  }
  return true;
}

bool
boeingtest_msg__msg__Mingling__copy(
  const boeingtest_msg__msg__Mingling * input,
  boeingtest_msg__msg__Mingling * output)
{
  if (!input || !output) {
    return false;
  }
  // choice
  output->choice = input->choice;
  // can_x
  output->can_x = input->can_x;
  // can_y
  output->can_y = input->can_y;
  return true;
}

boeingtest_msg__msg__Mingling *
boeingtest_msg__msg__Mingling__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__msg__Mingling * msg = (boeingtest_msg__msg__Mingling *)allocator.allocate(sizeof(boeingtest_msg__msg__Mingling), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__msg__Mingling));
  bool success = boeingtest_msg__msg__Mingling__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__msg__Mingling__destroy(boeingtest_msg__msg__Mingling * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__msg__Mingling__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__msg__Mingling__Sequence__init(boeingtest_msg__msg__Mingling__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__msg__Mingling * data = NULL;

  if (size) {
    data = (boeingtest_msg__msg__Mingling *)allocator.zero_allocate(size, sizeof(boeingtest_msg__msg__Mingling), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__msg__Mingling__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__msg__Mingling__fini(&data[i - 1]);
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
boeingtest_msg__msg__Mingling__Sequence__fini(boeingtest_msg__msg__Mingling__Sequence * array)
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
      boeingtest_msg__msg__Mingling__fini(&array->data[i]);
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

boeingtest_msg__msg__Mingling__Sequence *
boeingtest_msg__msg__Mingling__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__msg__Mingling__Sequence * array = (boeingtest_msg__msg__Mingling__Sequence *)allocator.allocate(sizeof(boeingtest_msg__msg__Mingling__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__msg__Mingling__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__msg__Mingling__Sequence__destroy(boeingtest_msg__msg__Mingling__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__msg__Mingling__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__msg__Mingling__Sequence__are_equal(const boeingtest_msg__msg__Mingling__Sequence * lhs, const boeingtest_msg__msg__Mingling__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__msg__Mingling__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__msg__Mingling__Sequence__copy(
  const boeingtest_msg__msg__Mingling__Sequence * input,
  boeingtest_msg__msg__Mingling__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__msg__Mingling);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__msg__Mingling * data =
      (boeingtest_msg__msg__Mingling *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__msg__Mingling__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__msg__Mingling__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__msg__Mingling__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
