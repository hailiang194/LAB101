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
CMAKE_SOURCE_DIR = /home/hailiang194/Documents/LAB101/C.L.P0003

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hailiang194/Documents/LAB101/C.L.P0003/build

# Include any dependencies generated for this target.
include src/object/CMakeFiles/user.dir/depend.make

# Include the progress variables for this target.
include src/object/CMakeFiles/user.dir/progress.make

# Include the compile flags for this target's objects.
include src/object/CMakeFiles/user.dir/flags.make

src/object/CMakeFiles/user.dir/user.cpp.o: src/object/CMakeFiles/user.dir/flags.make
src/object/CMakeFiles/user.dir/user.cpp.o: ../src/object/user.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0003/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/object/CMakeFiles/user.dir/user.cpp.o"
	cd /home/hailiang194/Documents/LAB101/C.L.P0003/build/src/object && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/user.dir/user.cpp.o -c /home/hailiang194/Documents/LAB101/C.L.P0003/src/object/user.cpp

src/object/CMakeFiles/user.dir/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/user.dir/user.cpp.i"
	cd /home/hailiang194/Documents/LAB101/C.L.P0003/build/src/object && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hailiang194/Documents/LAB101/C.L.P0003/src/object/user.cpp > CMakeFiles/user.dir/user.cpp.i

src/object/CMakeFiles/user.dir/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/user.dir/user.cpp.s"
	cd /home/hailiang194/Documents/LAB101/C.L.P0003/build/src/object && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hailiang194/Documents/LAB101/C.L.P0003/src/object/user.cpp -o CMakeFiles/user.dir/user.cpp.s

# Object files for target user
user_OBJECTS = \
"CMakeFiles/user.dir/user.cpp.o"

# External object files for target user
user_EXTERNAL_OBJECTS =

src/object/libuser.a: src/object/CMakeFiles/user.dir/user.cpp.o
src/object/libuser.a: src/object/CMakeFiles/user.dir/build.make
src/object/libuser.a: src/object/CMakeFiles/user.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0003/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libuser.a"
	cd /home/hailiang194/Documents/LAB101/C.L.P0003/build/src/object && $(CMAKE_COMMAND) -P CMakeFiles/user.dir/cmake_clean_target.cmake
	cd /home/hailiang194/Documents/LAB101/C.L.P0003/build/src/object && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/user.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/object/CMakeFiles/user.dir/build: src/object/libuser.a

.PHONY : src/object/CMakeFiles/user.dir/build

src/object/CMakeFiles/user.dir/clean:
	cd /home/hailiang194/Documents/LAB101/C.L.P0003/build/src/object && $(CMAKE_COMMAND) -P CMakeFiles/user.dir/cmake_clean.cmake
.PHONY : src/object/CMakeFiles/user.dir/clean

src/object/CMakeFiles/user.dir/depend:
	cd /home/hailiang194/Documents/LAB101/C.L.P0003/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hailiang194/Documents/LAB101/C.L.P0003 /home/hailiang194/Documents/LAB101/C.L.P0003/src/object /home/hailiang194/Documents/LAB101/C.L.P0003/build /home/hailiang194/Documents/LAB101/C.L.P0003/build/src/object /home/hailiang194/Documents/LAB101/C.L.P0003/build/src/object/CMakeFiles/user.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/object/CMakeFiles/user.dir/depend

