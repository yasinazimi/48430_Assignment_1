cmake_minimum_required(VERSION 3.5)
project(assignmnt1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES triangular.c)
add_executable(assignmnt1 ${SOURCE_FILES})