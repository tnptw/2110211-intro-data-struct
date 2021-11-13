cmake_minimum_required(VERSION 3.0.0)
project(d59_q2_queue_equality VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(d59_q2_queue_equality main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
