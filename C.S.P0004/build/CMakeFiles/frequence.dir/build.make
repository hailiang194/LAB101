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
CMAKE_SOURCE_DIR = /home/hailiang194/Documents/LAB101/C.S.P0004

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hailiang194/Documents/LAB101/C.S.P0004/build

# Include any dependencies generated for this target.
include CMakeFiles/frequence.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/frequence.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/frequence.dir/flags.make

CMakeFiles/frequence.dir/src/main.cpp.o: CMakeFiles/frequence.dir/flags.make
CMakeFiles/frequence.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hailiang194/Documents/LAB101/C.S.P0004/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/frequence.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/frequence.dir/src/main.cpp.o -c /home/hailiang194/Documents/LAB101/C.S.P0004/src/main.cpp

CMakeFiles/frequence.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/frequence.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hailiang194/Documents/LAB101/C.S.P0004/src/main.cpp > CMakeFiles/frequence.dir/src/main.cpp.i

CMakeFiles/frequence.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/frequence.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hailiang194/Documents/LAB101/C.S.P0004/src/main.cpp -o CMakeFiles/frequence.dir/src/main.cpp.s

# Object files for target frequence
frequence_OBJECTS = \
"CMakeFiles/frequence.dir/src/main.cpp.o"

# External object files for target frequence
frequence_EXTERNAL_OBJECTS =

frequence: CMakeFiles/frequence.dir/src/main.cpp.o
frequence: CMakeFiles/frequence.dir/build.make
frequence: CMakeFiles/frequence.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hailiang194/Documents/LAB101/C.S.P0004/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable frequence"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/frequence.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/frequence.dir/build: frequence

.PHONY : CMakeFiles/frequence.dir/build

CMakeFiles/frequence.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/frequence.dir/cmake_clean.cmake
.PHONY : CMakeFiles/frequence.dir/clean

CMakeFiles/frequence.dir/depend:
	cd /home/hailiang194/Documents/LAB101/C.S.P0004/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hailiang194/Documents/LAB101/C.S.P0004 /home/hailiang194/Documents/LAB101/C.S.P0004 /home/hailiang194/Documents/LAB101/C.S.P0004/build /home/hailiang194/Documents/LAB101/C.S.P0004/build /home/hailiang194/Documents/LAB101/C.S.P0004/build/CMakeFiles/frequence.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/frequence.dir/depend

