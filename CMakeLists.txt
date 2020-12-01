cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Attribute_Recognition)
set(CMAKE_CXX_STANDARD 14)

message("GCC Version: " ${CMAKE_CXX_COMPILER_VERSION})
set(Torch_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../libtorch/share/cmake/Torch")



find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS} -Wall -Wsign-compare -std=c++14")

set(SOURCES Network.cpp Network.h Standard.h)

add_executable(attr-recog ${SOURCES} main.cpp)
target_link_libraries(attr-recog "${TORCH_LIBRARIES}")
set_property(TARGET attr-recog PROPERTY CXX_STANDARD 14)