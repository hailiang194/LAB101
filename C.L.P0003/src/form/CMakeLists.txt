set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

link_directories(${PROJECT_BINARY_DIR}/src/object)
link_directories(${PROJECT_BINARY_DIR}/src/game-saver)
link_directories(${PROJECT_BINARY_DIR}/src/formatter)

add_library(input input.cpp input.hpp)
add_library(form form.cpp form.hpp)
add_library(main-form main-form.cpp main-form.hpp)
add_library(play-form play-form.cpp play-form.hpp)
add_library(save-form save-form.cpp save-form.hpp)
add_library(cash-out-form cash-out-form.cpp cash-out-form.hpp)

target_link_libraries(main-form form input user slot-machine game-loader play-form save-form cash-out-form)
target_link_libraries(play-form form user slot-machine combination-getter prize-getter game-saver)
target_link_libraries(save-form form user game-saver)
target_link_libraries(cash-out-form form user)
