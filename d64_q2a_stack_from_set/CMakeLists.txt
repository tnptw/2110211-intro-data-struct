cmake_minimum_required(VERSION 3.20)
project(d64_q2a_stack_from_set)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(d64_q2a_stack_from_set
        main.cpp
        stack.h
        student.h)
