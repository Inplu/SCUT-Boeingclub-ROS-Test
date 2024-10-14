cmake_minimum_required(VERSION 3.8)
project(expand01)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(turtlesim REQUIRED)
find_package(boeingtest_msg REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2 REQUIRED)

add_executable(controller src/controller.cpp)
add_executable(pub_meilei src/pub_meilei.cpp)
add_executable(gazebo src/gazebo.cpp)
# add_executable(controller_py src/controller.py.cpp)
target_include_directories(controller PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(controller PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  controller
  "rclcpp"
  "turtlesim"
  "boeingtest_msg"
  "geometry_msgs"
  "rclcpp_action"
)
ament_target_dependencies(
  pub_meilei
  "rclcpp"
  "turtlesim"
  "boeingtest_msg"
  "geometry_msgs"
  "rclcpp_action"
)
ament_target_dependencies(
  gazebo
  "rclcpp"
  "turtlesim"
  "boeingtest_msg"
  "geometry_msgs"
)
# ament_target_dependencies(
#   controller_py
#   "rclcpp"
#   "turtlesim"
#   "nav_msgs"
#   "boeingtest_msg"
#   "geometry_msgs"
#   "tf2"
# )
install(TARGETS controller
 pub_meilei
 gazebo
#  controller_py
  DESTINATION lib/${PROJECT_NAME})
install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
