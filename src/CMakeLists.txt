cmake_minimum_required(VERSION 3.1)

project(MyProject VERSION 1.0)

add_subdirectory(pybind11)
pybind11_add_module(example pybind.cpp)
target_link_libraries(example PUBLIC mylib)

add_library(mylib STATIC myclass.h myclass.cpp)

add_executable(myexec main.cpp)
target_link_libraries(myexec PUBLIC mylib)

