cmake_minimum_required(VERSION 3.0.0)
project(d63_q2b_stack_reserve VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(d63_q2b_stack_reserve main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
