# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_expand01_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED expand01_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(expand01_FOUND FALSE)
  elseif(NOT expand01_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(expand01_FOUND FALSE)
  endif()
  return()
endif()
set(_expand01_CONFIG_INCLUDED TRUE)

# output package information
if(NOT expand01_FIND_QUIETLY)
  message(STATUS "Found expand01: 0.0.0 (${expand01_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'expand01' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${expand01_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(expand01_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${expand01_DIR}/${_extra}")
endforeach()
