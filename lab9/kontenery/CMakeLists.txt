cmake_minimum_required(VERSION 3.16)

project(kontenery)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(kontenery
        src/main.cpp
        src/Line.cpp
        src/Stop.cpp
        )