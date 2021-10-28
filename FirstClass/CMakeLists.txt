cmake_minimum_required(VERSION 3.16)

project(FirstClass)

set(CMAKE_CXX_STANDARD 17)

add_executable(FirstLib
        src/main.cpp
        src/FirstClass.cpp

        )