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
CMAKE_SOURCE_DIR = /home/hailiang194/Documents/LAB101/C.L.P0006

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hailiang194/Documents/LAB101/C.L.P0006/build

# Include any dependencies generated for this target.
include src/form/CMakeFiles/input.dir/depend.make

# Include the progress variables for this target.
include src/form/CMakeFiles/input.dir/progress.make

# Include the compile flags for this target's objects.
include src/form/CMakeFiles/input.dir/flags.make

src/form/CMakeFiles/input.dir/input.cpp.o: src/form/CMakeFiles/input.dir/flags.make
src/form/CMakeFiles/input.dir/input.cpp.o: ../src/form/input.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0006/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/form/CMakeFiles/input.dir/input.cpp.o"
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/form && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/input.dir/input.cpp.o -c /home/hailiang194/Documents/LAB101/C.L.P0006/src/form/input.cpp

src/form/CMakeFiles/input.dir/input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/input.dir/input.cpp.i"
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/form && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hailiang194/Documents/LAB101/C.L.P0006/src/form/input.cpp > CMakeFiles/input.dir/input.cpp.i

src/form/CMakeFiles/input.dir/input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/input.dir/input.cpp.s"
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/form && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hailiang194/Documents/LAB101/C.L.P0006/src/form/input.cpp -o CMakeFiles/input.dir/input.cpp.s

# Object files for target input
input_OBJECTS = \
"CMakeFiles/input.dir/input.cpp.o"

# External object files for target input
input_EXTERNAL_OBJECTS =

src/form/libinput.a: src/form/CMakeFiles/input.dir/input.cpp.o
src/form/libinput.a: src/form/CMakeFiles/input.dir/build.make
src/form/libinput.a: src/form/CMakeFiles/input.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0006/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libinput.a"
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/form && $(CMAKE_COMMAND) -P CMakeFiles/input.dir/cmake_clean_target.cmake
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/form && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/input.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/form/CMakeFiles/input.dir/build: src/form/libinput.a

.PHONY : src/form/CMakeFiles/input.dir/build

src/form/CMakeFiles/input.dir/clean:
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/form && $(CMAKE_COMMAND) -P CMakeFiles/input.dir/cmake_clean.cmake
.PHONY : src/form/CMakeFiles/input.dir/clean

src/form/CMakeFiles/input.dir/depend:
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hailiang194/Documents/LAB101/C.L.P0006 /home/hailiang194/Documents/LAB101/C.L.P0006/src/form /home/hailiang194/Documents/LAB101/C.L.P0006/build /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/form /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/form/CMakeFiles/input.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/form/CMakeFiles/input.dir/depend

