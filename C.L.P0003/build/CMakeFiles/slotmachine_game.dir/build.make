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
include CMakeFiles/slotmachine_game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/slotmachine_game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/slotmachine_game.dir/flags.make

CMakeFiles/slotmachine_game.dir/src/main.cpp.o: CMakeFiles/slotmachine_game.dir/flags.make
CMakeFiles/slotmachine_game.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0003/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/slotmachine_game.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/slotmachine_game.dir/src/main.cpp.o -c /home/hailiang194/Documents/LAB101/C.L.P0003/src/main.cpp

CMakeFiles/slotmachine_game.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/slotmachine_game.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hailiang194/Documents/LAB101/C.L.P0003/src/main.cpp > CMakeFiles/slotmachine_game.dir/src/main.cpp.i

CMakeFiles/slotmachine_game.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/slotmachine_game.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hailiang194/Documents/LAB101/C.L.P0003/src/main.cpp -o CMakeFiles/slotmachine_game.dir/src/main.cpp.s

# Object files for target slotmachine_game
slotmachine_game_OBJECTS = \
"CMakeFiles/slotmachine_game.dir/src/main.cpp.o"

# External object files for target slotmachine_game
slotmachine_game_EXTERNAL_OBJECTS =

slotmachine_game: CMakeFiles/slotmachine_game.dir/src/main.cpp.o
slotmachine_game: CMakeFiles/slotmachine_game.dir/build.make
slotmachine_game: src/object/libslot-machine.a
slotmachine_game: src/formatter/libcombination-getter.a
slotmachine_game: src/object/libslot-machine.a
slotmachine_game: CMakeFiles/slotmachine_game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0003/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable slotmachine_game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/slotmachine_game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/slotmachine_game.dir/build: slotmachine_game

.PHONY : CMakeFiles/slotmachine_game.dir/build

CMakeFiles/slotmachine_game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/slotmachine_game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/slotmachine_game.dir/clean

CMakeFiles/slotmachine_game.dir/depend:
	cd /home/hailiang194/Documents/LAB101/C.L.P0003/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hailiang194/Documents/LAB101/C.L.P0003 /home/hailiang194/Documents/LAB101/C.L.P0003 /home/hailiang194/Documents/LAB101/C.L.P0003/build /home/hailiang194/Documents/LAB101/C.L.P0003/build /home/hailiang194/Documents/LAB101/C.L.P0003/build/CMakeFiles/slotmachine_game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/slotmachine_game.dir/depend

