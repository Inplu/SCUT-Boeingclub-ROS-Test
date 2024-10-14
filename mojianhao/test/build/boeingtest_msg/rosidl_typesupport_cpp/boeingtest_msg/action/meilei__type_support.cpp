// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from boeingtest_msg:action/Meilei.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "boeingtest_msg/action/detail/meilei__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_Goal_type_support_ids_t;

static const _Meilei_Goal_type_support_ids_t _Meilei_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_Goal_type_support_symbol_names_t _Meilei_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_Goal)),
  }
};

typedef struct _Meilei_Goal_type_support_data_t
{
  void * data[2];
} _Meilei_Goal_type_support_data_t;

static _Meilei_Goal_type_support_data_t _Meilei_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_Goal_message_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Meilei_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Meilei_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Meilei_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boeingtest_msg::action::Meilei_Goal>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, boeingtest_msg, action, Meilei_Goal)() {
  return get_message_type_support_handle<boeingtest_msg::action::Meilei_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_Result_type_support_ids_t;

static const _Meilei_Result_type_support_ids_t _Meilei_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_Result_type_support_symbol_names_t _Meilei_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_Result)),
  }
};

typedef struct _Meilei_Result_type_support_data_t
{
  void * data[2];
} _Meilei_Result_type_support_data_t;

static _Meilei_Result_type_support_data_t _Meilei_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_Result_message_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Meilei_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Meilei_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Meilei_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boeingtest_msg::action::Meilei_Result>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, boeingtest_msg, action, Meilei_Result)() {
  return get_message_type_support_handle<boeingtest_msg::action::Meilei_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_Feedback_type_support_ids_t;

static const _Meilei_Feedback_type_support_ids_t _Meilei_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_Feedback_type_support_symbol_names_t _Meilei_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_Feedback)),
  }
};

typedef struct _Meilei_Feedback_type_support_data_t
{
  void * data[2];
} _Meilei_Feedback_type_support_data_t;

static _Meilei_Feedback_type_support_data_t _Meilei_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_Feedback_message_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Meilei_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Meilei_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Meilei_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boeingtest_msg::action::Meilei_Feedback>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, boeingtest_msg, action, Meilei_Feedback)() {
  return get_message_type_support_handle<boeingtest_msg::action::Meilei_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_SendGoal_Request_type_support_ids_t;

static const _Meilei_SendGoal_Request_type_support_ids_t _Meilei_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_SendGoal_Request_type_support_symbol_names_t _Meilei_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_SendGoal_Request)),
  }
};

typedef struct _Meilei_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Meilei_SendGoal_Request_type_support_data_t;

static _Meilei_SendGoal_Request_type_support_data_t _Meilei_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_SendGoal_Request_message_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Meilei_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Meilei_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Meilei_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boeingtest_msg::action::Meilei_SendGoal_Request>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, boeingtest_msg, action, Meilei_SendGoal_Request)() {
  return get_message_type_support_handle<boeingtest_msg::action::Meilei_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_SendGoal_Response_type_support_ids_t;

static const _Meilei_SendGoal_Response_type_support_ids_t _Meilei_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_SendGoal_Response_type_support_symbol_names_t _Meilei_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_SendGoal_Response)),
  }
};

typedef struct _Meilei_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Meilei_SendGoal_Response_type_support_data_t;

static _Meilei_SendGoal_Response_type_support_data_t _Meilei_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_SendGoal_Response_message_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Meilei_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Meilei_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Meilei_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boeingtest_msg::action::Meilei_SendGoal_Response>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, boeingtest_msg, action, Meilei_SendGoal_Response)() {
  return get_message_type_support_handle<boeingtest_msg::action::Meilei_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_SendGoal_type_support_ids_t;

static const _Meilei_SendGoal_type_support_ids_t _Meilei_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_SendGoal_type_support_symbol_names_t _Meilei_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_SendGoal)),
  }
};

typedef struct _Meilei_SendGoal_type_support_data_t
{
  void * data[2];
} _Meilei_SendGoal_type_support_data_t;

static _Meilei_SendGoal_type_support_data_t _Meilei_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_SendGoal_service_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Meilei_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Meilei_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Meilei_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<boeingtest_msg::action::Meilei_SendGoal>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_GetResult_Request_type_support_ids_t;

static const _Meilei_GetResult_Request_type_support_ids_t _Meilei_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_GetResult_Request_type_support_symbol_names_t _Meilei_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_GetResult_Request)),
  }
};

typedef struct _Meilei_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Meilei_GetResult_Request_type_support_data_t;

static _Meilei_GetResult_Request_type_support_data_t _Meilei_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_GetResult_Request_message_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Meilei_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Meilei_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Meilei_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boeingtest_msg::action::Meilei_GetResult_Request>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, boeingtest_msg, action, Meilei_GetResult_Request)() {
  return get_message_type_support_handle<boeingtest_msg::action::Meilei_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_GetResult_Response_type_support_ids_t;

static const _Meilei_GetResult_Response_type_support_ids_t _Meilei_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_GetResult_Response_type_support_symbol_names_t _Meilei_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_GetResult_Response)),
  }
};

typedef struct _Meilei_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Meilei_GetResult_Response_type_support_data_t;

static _Meilei_GetResult_Response_type_support_data_t _Meilei_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_GetResult_Response_message_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Meilei_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Meilei_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Meilei_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boeingtest_msg::action::Meilei_GetResult_Response>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, boeingtest_msg, action, Meilei_GetResult_Response)() {
  return get_message_type_support_handle<boeingtest_msg::action::Meilei_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_GetResult_type_support_ids_t;

static const _Meilei_GetResult_type_support_ids_t _Meilei_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_GetResult_type_support_symbol_names_t _Meilei_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_GetResult)),
  }
};

typedef struct _Meilei_GetResult_type_support_data_t
{
  void * data[2];
} _Meilei_GetResult_type_support_data_t;

static _Meilei_GetResult_type_support_data_t _Meilei_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_GetResult_service_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Meilei_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Meilei_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Meilei_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<boeingtest_msg::action::Meilei_GetResult>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Meilei_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Meilei_FeedbackMessage_type_support_ids_t;

static const _Meilei_FeedbackMessage_type_support_ids_t _Meilei_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Meilei_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Meilei_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Meilei_FeedbackMessage_type_support_symbol_names_t _Meilei_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boeingtest_msg, action, Meilei_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boeingtest_msg, action, Meilei_FeedbackMessage)),
  }
};

typedef struct _Meilei_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Meilei_FeedbackMessage_type_support_data_t;

static _Meilei_FeedbackMessage_type_support_data_t _Meilei_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Meilei_FeedbackMessage_message_typesupport_map = {
  2,
  "boeingtest_msg",
  &_Meilei_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Meilei_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Meilei_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Meilei_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Meilei_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boeingtest_msg::action::Meilei_FeedbackMessage>()
{
  return &::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, boeingtest_msg, action, Meilei_FeedbackMessage)() {
  return get_message_type_support_handle<boeingtest_msg::action::Meilei_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "boeingtest_msg/action/detail/meilei__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace boeingtest_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Meilei_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace boeingtest_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<boeingtest_msg::action::Meilei>()
{
  using ::boeingtest_msg::action::rosidl_typesupport_cpp::Meilei_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Meilei_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::boeingtest_msg::action::Meilei::Impl::SendGoalService>();
  Meilei_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::boeingtest_msg::action::Meilei::Impl::GetResultService>();
  Meilei_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::boeingtest_msg::action::Meilei::Impl::CancelGoalService>();
  Meilei_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::boeingtest_msg::action::Meilei::Impl::FeedbackMessage>();
  Meilei_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::boeingtest_msg::action::Meilei::Impl::GoalStatusMessage>();
  return &Meilei_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
