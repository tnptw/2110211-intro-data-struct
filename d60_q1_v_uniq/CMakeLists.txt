cmake_minimum_required(VERSION 3.0.0)
project(d60_q1_v_uniq VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(d60_q1_v_uniq main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
