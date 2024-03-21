cmake_minimum_required(VERSION 3.1...3.28)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS DEFAULT OFF)

project(
  blib
  VERSION 1.0)

# If you set any CMAKE_ variables, that can go here.
include(FetchContent)

include_directories(blib/include)
file(GLOB SRC_FILES blib/src/*.c)

add_library(blib ${SRC_FILES})

message(STATUS "TEST ALLOWED? ${BUILD_TESTS}")
if(BUILD_TESTS)
  # TODO
endif()