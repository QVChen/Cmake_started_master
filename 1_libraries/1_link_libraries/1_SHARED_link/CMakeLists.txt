cmake_minimum_required(VERSION 3.5)  #指定使用的 cmake 的最低版本
project(test_linklibrary)   #定义工程名称
set(CMAKE_CXX_STANDARD 11)   #指定C++标准  增加-std=c++11  
include_directories(${PROJECT_SOURCE_DIR}/include)#头文件下目录
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp) #将指定目录/src/下搜索到的满足条件.cpp的所有文件名生成一个列表，并将其存储到变量SRC_LIST中
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)# 设置动态库/静态库生成路径
add_library(calc SHARED ${SRC_LIST})# 生成动态库
#add_library(calc STATIC ${SRC_LIST})# 生成静态库