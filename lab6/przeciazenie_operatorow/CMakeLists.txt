cmake_minimum_required(VERSION 3.16)

project(przeciazenie_operatorow)

set(CMAKE_CXX_STANDARD 17)

add_executable(przciazenie_operatorow src/main.cpp src/Vector.cpp include/Vector.h src/Complex.cpp include/Complex.h src/Triangle.cpp include/Triangle.h)