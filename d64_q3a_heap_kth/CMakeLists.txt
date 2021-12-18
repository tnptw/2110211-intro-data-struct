cmake_minimum_required(VERSION 3.21)
project(d64_q3a_heap_kth)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(d64_q3a_heap_kth
        main.cpp
        priority_queue.h
        student.h)
