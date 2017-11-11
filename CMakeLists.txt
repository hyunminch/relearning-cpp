cmake_minimum_required(VERSION 3.8)
project(relearning_cpp)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        src/main.cpp
        src/vector.cpp
        src/vector.h
        src/node.h)

add_executable(relearning_cpp ${SOURCE_FILES})