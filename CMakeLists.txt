cmake_minimum_required(VERSION 3.24)
project(bluebase)

set(CMAKE_CXX_STANDARD 23)

add_executable(bluebase main.cpp)

target_include_directories(bluebase
        PUBLIC include)