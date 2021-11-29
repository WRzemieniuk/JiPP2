cmake_minimum_required(VERSION 3.16)

project(dziedziczenie)

set(CMAKE_CXX_STANDARD 17)

add_executable(dziedziczenie
        src/main.cpp
        src/Figure.cpp
        include/Figure.h)