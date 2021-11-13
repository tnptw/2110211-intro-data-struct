cmake_minimum_required(VERSION 3.20)
project(d64_q2a_vector_block_swap)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(d64_q2a_vector_block_swap
        main.cpp
        student.h
        vector.h)
