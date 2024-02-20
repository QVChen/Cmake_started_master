cmake_minimum_required(VERSION 3.5)  #指定使用的 cmake 的最低版本
project(test_linklibrary)   #定义工程名称
set(CMAKE_CXX_STANDARD 11)   #指定C++标准  增加-std=c++11  
include_directories(${PROJECT_SOURCE_DIR}/include)#头文件下目录
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp) # 搜索指定目录下源文件
link_directories(${PROJECT_SOURCE_DIR}/lib)# 包含静态库路径
link_libraries(calc)# 链接静态库
add_executable(app ${SRC_LIST}) #输出