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
include CMakeFiles/hangman.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hangman.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hangman.dir/flags.make

CMakeFiles/hangman.dir/src/main.cpp.o: CMakeFiles/hangman.dir/flags.make
CMakeFiles/hangman.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0006/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hangman.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hangman.dir/src/main.cpp.o -c /home/hailiang194/Documents/LAB101/C.L.P0006/src/main.cpp

CMakeFiles/hangman.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hangman.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hailiang194/Documents/LAB101/C.L.P0006/src/main.cpp > CMakeFiles/hangman.dir/src/main.cpp.i

CMakeFiles/hangman.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hangman.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hailiang194/Documents/LAB101/C.L.P0006/src/main.cpp -o CMakeFiles/hangman.dir/src/main.cpp.s

# Object files for target hangman
hangman_OBJECTS = \
"CMakeFiles/hangman.dir/src/main.cpp.o"

# External object files for target hangman
hangman_EXTERNAL_OBJECTS =

hangman: CMakeFiles/hangman.dir/src/main.cpp.o
hangman: CMakeFiles/hangman.dir/build.make
hangman: src/form/libmain-form.a
hangman: src/form/libform.a
hangman: src/file-process/libword-getter.a
hangman: src/object/libhang-man.a
hangman: src/object/librandom-word-getter.a
hangman: src/object/libuser.a
hangman: src/form/libinput.a
hangman: CMakeFiles/hangman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0006/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hangman"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hangman.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hangman.dir/build: hangman

.PHONY : CMakeFiles/hangman.dir/build

CMakeFiles/hangman.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hangman.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hangman.dir/clean

CMakeFiles/hangman.dir/depend:
	cd /home/hailiang194/Documents/LAB101/C.L.P0006/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hailiang194/Documents/LAB101/C.L.P0006 /home/hailiang194/Documents/LAB101/C.L.P0006 /home/hailiang194/Documents/LAB101/C.L.P0006/build /home/hailiang194/Documents/LAB101/C.L.P0006/build /home/hailiang194/Documents/LAB101/C.L.P0006/build/CMakeFiles/hangman.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hangman.dir/depend

