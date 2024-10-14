# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_base02_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED base02_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(base02_FOUND FALSE)
  elseif(NOT base02_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(base02_FOUND FALSE)
  endif()
  return()
endif()
set(_base02_CONFIG_INCLUDED TRUE)

# output package information
if(NOT base02_FIND_QUIETLY)
  message(STATUS "Found base02: 0.0.0 (${base02_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'base02' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${base02_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(base02_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${base02_DIR}/${_extra}")
endforeach()
