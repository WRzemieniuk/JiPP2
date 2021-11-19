cmake_minimum_required(VERSION 3.16)

project(e1NoCopyingConstructor)
include_directories(include)

add_executable(konstruktorKopiujacy src/main.cpp src/Pojazd.cpp include/Pojazd.h)