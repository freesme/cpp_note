cmake_minimum_required(VERSION 3.26)
project(cpp_note)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_note main.cpp
        func_example/Func.cpp
        func_example/Func.h)
