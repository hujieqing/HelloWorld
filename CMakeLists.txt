cmake_minimum_required(VERSION 3.12)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

include_directories(includes)

add_executable(HelloWorld
        includes/add.h
        src/add.cpp
        src/main.cpp
        CMakeLists.txt)
