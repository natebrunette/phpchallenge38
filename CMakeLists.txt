cmake_minimum_required(VERSION 3.3)
project(challenge38)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp integer.cpp integer.h)
add_executable(challenge38 ${SOURCE_FILES})
