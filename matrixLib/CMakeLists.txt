cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

#sciezka w ktorej maja byc wyszukiwane pliki naglowkowe
include_directories(include)

add_library(matrixLib STATIC
        src/matrixLib.cpp)