cmake_minimum_required(VERSION 3.0.2)
project(bumperbot_arduino)


find_package(catkin REQUIRED COMPONENTS
  rospy
  std_msgs
)



catkin_package(

)

include_directories(

  ${catkin_INCLUDE_DIRS}
)

catkin_install_python(PROGRAMS
  nodes/arduino_publisher.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
