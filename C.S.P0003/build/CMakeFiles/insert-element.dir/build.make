# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hailiang194/Documents/LAB101/C.S.P0003

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hailiang194/Documents/LAB101/C.S.P0003/build

# Include any dependencies generated for this target.
include CMakeFiles/insert-element.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/insert-element.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/insert-element.dir/flags.make

CMakeFiles/insert-element.dir/src/main.cpp.o: CMakeFiles/insert-element.dir/flags.make
CMakeFiles/insert-element.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hailiang194/Documents/LAB101/C.S.P0003/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/insert-element.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/insert-element.dir/src/main.cpp.o -c /home/hailiang194/Documents/LAB101/C.S.P0003/src/main.cpp

CMakeFiles/insert-element.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/insert-element.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hailiang194/Documents/LAB101/C.S.P0003/src/main.cpp > CMakeFiles/insert-element.dir/src/main.cpp.i

CMakeFiles/insert-element.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/insert-element.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hailiang194/Documents/LAB101/C.S.P0003/src/main.cpp -o CMakeFiles/insert-element.dir/src/main.cpp.s

# Object files for target insert-element
insert__element_OBJECTS = \
"CMakeFiles/insert-element.dir/src/main.cpp.o"

# External object files for target insert-element
insert__element_EXTERNAL_OBJECTS =

insert-element: CMakeFiles/insert-element.dir/src/main.cpp.o
insert-element: CMakeFiles/insert-element.dir/build.make
insert-element: CMakeFiles/insert-element.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hailiang194/Documents/LAB101/C.S.P0003/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable insert-element"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/insert-element.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/insert-element.dir/build: insert-element

.PHONY : CMakeFiles/insert-element.dir/build

CMakeFiles/insert-element.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/insert-element.dir/cmake_clean.cmake
.PHONY : CMakeFiles/insert-element.dir/clean

CMakeFiles/insert-element.dir/depend:
	cd /home/hailiang194/Documents/LAB101/C.S.P0003/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hailiang194/Documents/LAB101/C.S.P0003 /home/hailiang194/Documents/LAB101/C.S.P0003 /home/hailiang194/Documents/LAB101/C.S.P0003/build /home/hailiang194/Documents/LAB101/C.S.P0003/build /home/hailiang194/Documents/LAB101/C.S.P0003/build/CMakeFiles/insert-element.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/insert-element.dir/depend

