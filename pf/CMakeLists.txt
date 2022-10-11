cmake_minimum_required(VERSION 3.24)

target_include_directories(bluebase PUBLIC include)

target_sources(bluebase
        PUBLIC pf_manager.cpp)