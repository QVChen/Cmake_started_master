cmake_minimum_required(VERSION 3.5) 
project(TEST)
set(CMAKE_CXX_STANDARD 11)   #指定C++标准  增加-std=c++11  
set(TEMP "hello,world")
file(GLOB SRC_1 ${PROJECT_SOURCE_DIR}/src1/*.cpp)
file(GLOB SRC_2 ${PROJECT_SOURCE_DIR}/src2/*.cpp)
set(SRC_1 ${SRC_1} ${SRC_2} ${TEMP})# 追加(拼接)
#list(APPEND SRC_1 ${SRC_1} ${SRC_2} ${TEMP})
message(STATUS "message: ${SRC_1}")