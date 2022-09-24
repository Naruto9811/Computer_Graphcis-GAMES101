cmake_minimum_required(VERSION 3.19)
set (CMAKE_CXX_STANDARD 11)

project (EXE_PROGRAM)

find_package(Eigen3 REQUIRED)
include_directories("/usr/local/Cellar/eigen/3.4.0_1/include/eigen3/Eigen")

add_executable (EXE_PROGRAM test.cpp)
