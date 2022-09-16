cmake_minimum_required (VERSION 2.8.11)
project (EXE_PROGRAM)

find_package(Eigen3 REQUIRED)
include_directories("/usr/local/include/eigen3/Eigen")

add_executable (EXE_PROGRAM main.cpp)
