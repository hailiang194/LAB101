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
CMAKE_SOURCE_DIR = /home/hailiang194/Documents/LAB101/C.L.P0018

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hailiang194/Documents/LAB101/C.L.P0018/build

# Include any dependencies generated for this target.
include src/form/CMakeFiles/main-form.dir/depend.make

# Include the progress variables for this target.
include src/form/CMakeFiles/main-form.dir/progress.make

# Include the compile flags for this target's objects.
include src/form/CMakeFiles/main-form.dir/flags.make

src/form/CMakeFiles/main-form.dir/main-form.cpp.o: src/form/CMakeFiles/main-form.dir/flags.make
src/form/CMakeFiles/main-form.dir/main-form.cpp.o: ../src/form/main-form.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0018/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/form/CMakeFiles/main-form.dir/main-form.cpp.o"
	cd /home/hailiang194/Documents/LAB101/C.L.P0018/build/src/form && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main-form.dir/main-form.cpp.o -c /home/hailiang194/Documents/LAB101/C.L.P0018/src/form/main-form.cpp

src/form/CMakeFiles/main-form.dir/main-form.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main-form.dir/main-form.cpp.i"
	cd /home/hailiang194/Documents/LAB101/C.L.P0018/build/src/form && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hailiang194/Documents/LAB101/C.L.P0018/src/form/main-form.cpp > CMakeFiles/main-form.dir/main-form.cpp.i

src/form/CMakeFiles/main-form.dir/main-form.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main-form.dir/main-form.cpp.s"
	cd /home/hailiang194/Documents/LAB101/C.L.P0018/build/src/form && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hailiang194/Documents/LAB101/C.L.P0018/src/form/main-form.cpp -o CMakeFiles/main-form.dir/main-form.cpp.s

# Object files for target main-form
main__form_OBJECTS = \
"CMakeFiles/main-form.dir/main-form.cpp.o"

# External object files for target main-form
main__form_EXTERNAL_OBJECTS =

src/form/libmain-form.a: src/form/CMakeFiles/main-form.dir/main-form.cpp.o
src/form/libmain-form.a: src/form/CMakeFiles/main-form.dir/build.make
src/form/libmain-form.a: src/form/CMakeFiles/main-form.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hailiang194/Documents/LAB101/C.L.P0018/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmain-form.a"
	cd /home/hailiang194/Documents/LAB101/C.L.P0018/build/src/form && $(CMAKE_COMMAND) -P CMakeFiles/main-form.dir/cmake_clean_target.cmake
	cd /home/hailiang194/Documents/LAB101/C.L.P0018/build/src/form && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main-form.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/form/CMakeFiles/main-form.dir/build: src/form/libmain-form.a

.PHONY : src/form/CMakeFiles/main-form.dir/build

src/form/CMakeFiles/main-form.dir/clean:
	cd /home/hailiang194/Documents/LAB101/C.L.P0018/build/src/form && $(CMAKE_COMMAND) -P CMakeFiles/main-form.dir/cmake_clean.cmake
.PHONY : src/form/CMakeFiles/main-form.dir/clean

src/form/CMakeFiles/main-form.dir/depend:
	cd /home/hailiang194/Documents/LAB101/C.L.P0018/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hailiang194/Documents/LAB101/C.L.P0018 /home/hailiang194/Documents/LAB101/C.L.P0018/src/form /home/hailiang194/Documents/LAB101/C.L.P0018/build /home/hailiang194/Documents/LAB101/C.L.P0018/build/src/form /home/hailiang194/Documents/LAB101/C.L.P0018/build/src/form/CMakeFiles/main-form.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/form/CMakeFiles/main-form.dir/depend

