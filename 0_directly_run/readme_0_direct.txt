This project is mainly focuses on the basic functions as following:
1.cmake_minimum_required
2.set CMAKE_CXX_STANDARD & variable to store absolute path
3.set EXECUTABLE_OUTPUT_PATH
4.Point to the header file directory
5.Generate a list of all file meeting the condition and store to variable
6.define the project will generate an .exe

This folder_tree is following:
$ tree
.
├── build
├── CMakeLists.txt
├── include
│   └── head.h
└── src
    ├── add.cpp
    ├── div.cpp
    ├── main.cpp
    ├── mult.cpp
    └── sub.cpp

This tutorial ranges from 2.1(only src) to 2.4(include header files)
