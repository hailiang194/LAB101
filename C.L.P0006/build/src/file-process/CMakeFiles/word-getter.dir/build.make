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
include src/file-process/CMakeFiles/word-getter.dir/depend.make

# Include the progress variables for this target.
include src/file-process/CMakeFiles/word-getter.dir/progress.make

# Include the compile flags for this target's objects.
include src/file-process/CMakeFiles/word-getter.dir/flags.make

src/file-process/CMakeFiles/word-getter.dir/word-getter.cpp.o: src/file-process/CMakeFiles/word-getter.dir/flags.make
src/file-process/CMakeFiles/word-getter.dir/word-getter.cpp.o: ../src/file-process/word-getter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0006/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/file-process/CMakeFiles/word-getter.dir/word-getter.cpp.o"
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/file-process && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/word-getter.dir/word-getter.cpp.o -c /home/hailiang194/Documents/LAB101/C.L.P0006/src/file-process/word-getter.cpp

src/file-process/CMakeFiles/word-getter.dir/word-getter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/word-getter.dir/word-getter.cpp.i"
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/file-process && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hailiang194/Documents/LAB101/C.L.P0006/src/file-process/word-getter.cpp > CMakeFiles/word-getter.dir/word-getter.cpp.i

src/file-process/CMakeFiles/word-getter.dir/word-getter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/word-getter.dir/word-getter.cpp.s"
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/file-process && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hailiang194/Documents/LAB101/C.L.P0006/src/file-process/word-getter.cpp -o CMakeFiles/word-getter.dir/word-getter.cpp.s

# Object files for target word-getter
word__getter_OBJECTS = \
"CMakeFiles/word-getter.dir/word-getter.cpp.o"

# External object files for target word-getter
word__getter_EXTERNAL_OBJECTS =

src/file-process/libword-getter.a: src/file-process/CMakeFiles/word-getter.dir/word-getter.cpp.o
src/file-process/libword-getter.a: src/file-process/CMakeFiles/word-getter.dir/build.make
src/file-process/libword-getter.a: src/file-process/CMakeFiles/word-getter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0006/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libword-getter.a"
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/file-process && $(CMAKE_COMMAND) -P CMakeFiles/word-getter.dir/cmake_clean_target.cmake
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/file-process && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/word-getter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/file-process/CMakeFiles/word-getter.dir/build: src/file-process/libword-getter.a

.PHONY : src/file-process/CMakeFiles/word-getter.dir/build

src/file-process/CMakeFiles/word-getter.dir/clean:
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/file-process && $(CMAKE_COMMAND) -P CMakeFiles/word-getter.dir/cmake_clean.cmake
.PHONY : src/file-process/CMakeFiles/word-getter.dir/clean

src/file-process/CMakeFiles/word-getter.dir/depend:
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hailiang194/Documents/LAB101/C.L.P0006 /home/hailiang194/Documents/LAB101/C.L.P0006/src/file-process /home/hailiang194/Documents/LAB101/C.L.P0006/build /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/file-process /home/hailiang194/Documents/LAB101/C.L.P0006/build/src/file-process/CMakeFiles/word-getter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/file-process/CMakeFiles/word-getter.dir/depend

