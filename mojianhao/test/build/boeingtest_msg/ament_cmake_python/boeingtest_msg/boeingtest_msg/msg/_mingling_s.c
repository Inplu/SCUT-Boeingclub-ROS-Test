// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from boeingtest_msg:msg/Mingling.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "boeingtest_msg/msg/detail/mingling__struct.h"
#include "boeingtest_msg/msg/detail/mingling__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool boeingtest_msg__msg__mingling__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("boeingtest_msg.msg._mingling.Mingling", full_classname_dest, 37) == 0);
  }
  boeingtest_msg__msg__Mingling * ros_message = _ros_message;
  {  // choice
    PyObject * field = PyObject_GetAttrString(_pymsg, "choice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->choice = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // can_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * boeingtest_msg__msg__mingling__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Mingling */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("boeingtest_msg.msg._mingling");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Mingling");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  boeingtest_msg__msg__Mingling * ros_message = (boeingtest_msg__msg__Mingling *)raw_ros_message;
  {  // choice
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->choice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "choice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
