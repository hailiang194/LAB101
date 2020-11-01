add_subdirectory(object)
link_directories(${PROJECT_BINARY_DIR}/src/object)

add_subdirectory(formatter)
link_directories(${PROJECT_BINARY_DIR}/src/formatter)

add_subdirectory(game-saver)
link_directories(${PROJECT_BINARY_DIR}/src/game-saver)

add_subdirectory(form)
link_directories(${PROJECT_BINARY_DIR}/src/form)
