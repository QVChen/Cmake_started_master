cmake_minimum_required(VERSION 3.5)
project(TEST_MACRO)
set(CMAKE_CXX_STANDARD 11)  
add_definitions(-D DEBUG_LAG)# 自定义 DEBUG 宏
file(GLOB SRC_LIST ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(app  ${SRC_LIST})
message(STATUS "message: ${SRC_LIST}")# 移除后日志