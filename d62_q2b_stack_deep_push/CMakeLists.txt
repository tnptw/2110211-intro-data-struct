cmake_minimum_required(VERSION 3.0.0)
project(d62_q2b_stack_deep_push VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(d62_q2b_stack_deep_push main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
