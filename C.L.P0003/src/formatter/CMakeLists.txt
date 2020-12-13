set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

link_directories(${PROJECT_BINARY_DIR}/src/object)
add_library(combination-getter combination-getter.cpp combination-getter.hpp)
add_library(prize-getter prize-getter.cpp prize-getter.hpp)
target_link_libraries(combination-getter slot-machine)
target_link_libraries(prize-getter user)
