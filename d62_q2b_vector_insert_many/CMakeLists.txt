cmake_minimum_required(VERSION 3.21)
project(d62_q2b_vector_insert_many)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(d62_q2b_vector_insert_many
        main.cpp
        student.h
        vector.h)
