cmake_minimum_required(VERSION 3.21)
project(sedgwik)

set(CMAKE_CXX_STANDARD 20)

add_executable(sedgwik main.cpp src/sorting/utils.hpp src/sorting/selection.hpp)
