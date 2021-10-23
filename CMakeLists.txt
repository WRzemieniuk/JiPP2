cmake_minimum_required(VERSION 3.16)


#project(allocation_basics)
#
#add_subdirectory(allocation_basics)
#
#
#add_executable(allocation
#            allocation_basics/main.cpp)




project(simpleCalc)
add_subdirectory(simpleCalc)
add_executable(simpleCalc
        simpleCalc/src/main.cpp
        simpleCalc/src/calc.cpp)