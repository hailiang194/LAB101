set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

link_directories(${PROJECT_BINARY_DIR}/src/object)
add_library(game-saver saver.cpp saver.hpp)
add_library(game-loader loader.cpp loader.hpp)
target_link_libraries(game-saver user)
target_link_libraries(game-loader user)
