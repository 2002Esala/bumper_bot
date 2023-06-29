cmake_minimum_required(VERSION 3.0.2)
project(bumperbot_examples)


find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  turtlesim
  tf2_ros
  geometry_msgs
)

catkin_python_setup()

catkin_package(
  CATKIN_DEPENDS
  turtlesim
  tf2_ros
  geometry_msgs
)


include_directories(
  ${catkin_INCLUDE_DIRS}
)

catkin_install_python(PROGRAMS
  nodes/simple_publisher.py
  nodes/simple_subscriber.py
  nodes/turtlesim_kinematics_node.py
  nodes/tf_examples_node.py
  nodes/simple_timer.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

add_executable(simple_cpp_publisher nodes/simple_publisher.cpp)
target_link_libraries(simple_cpp_publisher ${catkin_LIBRARIES})

add_executable(simple_cpp_subscriber nodes/simple_subscriber.cpp)
target_link_libraries(simple_cpp_subscriber ${catkin_LIBRARIES})


