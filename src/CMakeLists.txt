cmake_minimum_required(VERSION 3.10)
project(PongGame)

set(CMAKE_CXX_STANDARD 11)

#include_directories(include)

set(SOURCE_FILES main.cpp)

add_executable(PongGame ${SOURCE_FILES})