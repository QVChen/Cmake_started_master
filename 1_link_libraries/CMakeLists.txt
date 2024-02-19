cmake_minimum_required(VERSION 3.5)  #指定使用的 cmake 的最低版本
project(test_linklibrary)   #定义工程名称
set(CMAKE_CXX_STANDARD 11)   #指定C++标准  增加-std=c++11  
set(HOME /home/qc/workspace_cmake/1_link_libraries/build)  #定义一个变量HOME用于存储一个绝对路径
set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin/)  #将拼接好的路径值设置给EXECUTABLE_OUTPUT_PATH
include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp) #将指定目录下搜索到的满足条件的所有文件名生成一个列表，并将其存储到变量中
add_executable(app  ${SRC_LIST}) #定义工程会生成一个可执行程序