cmake_minimum_required(VERSION 3.12)
project(helloWorld)

set(CMAKE_CXX_STANDARD 17)
include_directories(includes)
add_executable(helloWorld src/main.cpp src/add.cpp)