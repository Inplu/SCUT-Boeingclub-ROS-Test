// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from boeingtest_msg:msg/Gezabo.idl
// generated code does not contain a copyright notice
#include "boeingtest_msg/msg/detail/gezabo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
boeingtest_msg__msg__Gezabo__init(boeingtest_msg__msg__Gezabo * msg)
{
  if (!msg) {
    return false;
  }
  // meter
  return true;
}

void
boeingtest_msg__msg__Gezabo__fini(boeingtest_msg__msg__Gezabo * msg)
{
  if (!msg) {
    return;
  }
  // meter
}

bool
boeingtest_msg__msg__Gezabo__are_equal(const boeingtest_msg__msg__Gezabo * lhs, const boeingtest_msg__msg__Gezabo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // meter
  if (lhs->meter != rhs->meter) {
    return false;
  }
  return true;
}

bool
boeingtest_msg__msg__Gezabo__copy(
  const boeingtest_msg__msg__Gezabo * input,
  boeingtest_msg__msg__Gezabo * output)
{
  if (!input || !output) {
    return false;
  }
  // meter
  output->meter = input->meter;
  return true;
}

boeingtest_msg__msg__Gezabo *
boeingtest_msg__msg__Gezabo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__msg__Gezabo * msg = (boeingtest_msg__msg__Gezabo *)allocator.allocate(sizeof(boeingtest_msg__msg__Gezabo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boeingtest_msg__msg__Gezabo));
  bool success = boeingtest_msg__msg__Gezabo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boeingtest_msg__msg__Gezabo__destroy(boeingtest_msg__msg__Gezabo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boeingtest_msg__msg__Gezabo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boeingtest_msg__msg__Gezabo__Sequence__init(boeingtest_msg__msg__Gezabo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__msg__Gezabo * data = NULL;

  if (size) {
    data = (boeingtest_msg__msg__Gezabo *)allocator.zero_allocate(size, sizeof(boeingtest_msg__msg__Gezabo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boeingtest_msg__msg__Gezabo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boeingtest_msg__msg__Gezabo__fini(&data[i - 1]);
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
boeingtest_msg__msg__Gezabo__Sequence__fini(boeingtest_msg__msg__Gezabo__Sequence * array)
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
      boeingtest_msg__msg__Gezabo__fini(&array->data[i]);
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

boeingtest_msg__msg__Gezabo__Sequence *
boeingtest_msg__msg__Gezabo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boeingtest_msg__msg__Gezabo__Sequence * array = (boeingtest_msg__msg__Gezabo__Sequence *)allocator.allocate(sizeof(boeingtest_msg__msg__Gezabo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boeingtest_msg__msg__Gezabo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boeingtest_msg__msg__Gezabo__Sequence__destroy(boeingtest_msg__msg__Gezabo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boeingtest_msg__msg__Gezabo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boeingtest_msg__msg__Gezabo__Sequence__are_equal(const boeingtest_msg__msg__Gezabo__Sequence * lhs, const boeingtest_msg__msg__Gezabo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boeingtest_msg__msg__Gezabo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boeingtest_msg__msg__Gezabo__Sequence__copy(
  const boeingtest_msg__msg__Gezabo__Sequence * input,
  boeingtest_msg__msg__Gezabo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boeingtest_msg__msg__Gezabo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boeingtest_msg__msg__Gezabo * data =
      (boeingtest_msg__msg__Gezabo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boeingtest_msg__msg__Gezabo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boeingtest_msg__msg__Gezabo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boeingtest_msg__msg__Gezabo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
