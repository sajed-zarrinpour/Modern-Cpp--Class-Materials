# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_sum.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_sum.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_sum.dir/flags.make

tests/CMakeFiles/test_sum.dir/test_sum.cpp.o: tests/CMakeFiles/test_sum.dir/flags.make
tests/CMakeFiles/test_sum.dir/test_sum.cpp.o: ../tests/test_sum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_sum.dir/test_sum.cpp.o"
	cd /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_sum.dir/test_sum.cpp.o -c /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/tests/test_sum.cpp

tests/CMakeFiles/test_sum.dir/test_sum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_sum.dir/test_sum.cpp.i"
	cd /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/tests/test_sum.cpp > CMakeFiles/test_sum.dir/test_sum.cpp.i

tests/CMakeFiles/test_sum.dir/test_sum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_sum.dir/test_sum.cpp.s"
	cd /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/tests/test_sum.cpp -o CMakeFiles/test_sum.dir/test_sum.cpp.s

# Object files for target test_sum
test_sum_OBJECTS = \
"CMakeFiles/test_sum.dir/test_sum.cpp.o"

# External object files for target test_sum
test_sum_EXTERNAL_OBJECTS =

tests/test_sum: tests/CMakeFiles/test_sum.dir/test_sum.cpp.o
tests/test_sum: tests/CMakeFiles/test_sum.dir/build.make
tests/test_sum: src/libtools.so
tests/test_sum: lib/libgtest.a
tests/test_sum: lib/libgtest_main.a
tests/test_sum: lib/libgtest.a
tests/test_sum: tests/CMakeFiles/test_sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_sum"
	cd /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_sum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_sum.dir/build: tests/test_sum

.PHONY : tests/CMakeFiles/test_sum.dir/build

tests/CMakeFiles/test_sum.dir/clean:
	cd /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_sum.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_sum.dir/clean

tests/CMakeFiles/test_sum.dir/depend:
	cd /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/tests /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests/CMakeFiles/test_sum.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_sum.dir/depend

