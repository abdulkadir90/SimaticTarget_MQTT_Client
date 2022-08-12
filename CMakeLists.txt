# CMakeList.txt : CMake project for SimaticTarget_MQTT_Client, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("SimaticTarget_MQTT_Client")

# Add source to this project's executable.
add_executable (SimaticTarget_MQTT_Client "SimaticTarget_MQTT_Client.cpp" "SimaticTarget_MQTT_Client.h" "SimTargetClientHandler.cpp" "SimTargetClientHandler.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SimaticTarget_MQTT_Client PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
