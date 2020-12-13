cmake_minimum_required(VERSION 2.8)


project(hangman)

add_subdirectory(src)
add_executable(hangman src/main.cpp)
target_link_libraries(hangman main-form)
