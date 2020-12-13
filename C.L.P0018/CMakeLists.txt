cmake_minimum_required(VERSION 2.8)

project(filehandling)

add_subdirectory(src)

add_executable(filehandling src/main.cpp)

target_link_libraries(filehandling main-form)
