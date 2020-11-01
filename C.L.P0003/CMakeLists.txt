cmake_minimum_required(VERSION 2.8)

project(slotmachine_game)

add_subdirectory(src)

add_executable(slotmachine_game src/main.cpp)
target_link_libraries(slotmachine_game slot-machine combination-getter user prize-getter)
