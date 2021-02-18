cmake_minimum_required(VERSION 3.17)
project(figures)

set(CMAKE_CXX_STANDARD 14)

add_executable(figures main.cpp base_types.h shape.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h)