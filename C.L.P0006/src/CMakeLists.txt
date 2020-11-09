set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(file-process)
link_directories(${PROJECT_BINARY_DIR}/src/file-process)

add_subdirectory(object)
link_directories(${PROJECT_BINARY_DIR}/src/object)

add_subdirectory(form)
link_directories(${PROJECT_BINARY_DIR}/src/form)
