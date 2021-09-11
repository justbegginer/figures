cmake_minimum_required(VERSION 3.17)
project(A1)

set(CMAKE_CXX_STANDARD 14)

add_executable(A1 main.cpp base_types.h shape.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h Triangle.cpp Triangle.h)