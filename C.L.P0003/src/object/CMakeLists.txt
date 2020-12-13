set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

link_directories(${PROJECT_BINARY_DIR}/src/game-saver)
add_library(slot-machine slot-machine.cpp slot-machine.hpp)
add_library(user user.cpp user.hpp)
target_link_libraries(user game-loader)
