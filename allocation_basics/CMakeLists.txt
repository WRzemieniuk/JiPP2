cmake_minimum_required(VERSION 3.16)

project(allocation_basics)

set(CMAKE_CXX_STANDARD 17)

add_executable(allocation_basics
        main.cpp ../lab5/src/Point.cpp ../lab5/include/Point.h ../lab6/funkcje_zaprzyjaznione/src/main.cpp)