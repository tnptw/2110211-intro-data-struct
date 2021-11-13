cmake_minimum_required(VERSION 3.0.0)
project(d58_q1_erase_many VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(d58_q1_erase_many main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
