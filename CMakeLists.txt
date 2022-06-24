cmake_minimum_required(VERSION 3.22)
project(postmodern_lab2 C CXX)

set(CMAKE_C_STANDART 99)
set(CMAKE_CXX_STANDART 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()
add_subdirectory(googletest)
add_library(postmodern_lab2 STATIC Sorter/Sorter.h Sorter/Sorter.cpp)
add_subdirectory(SorterTests)
