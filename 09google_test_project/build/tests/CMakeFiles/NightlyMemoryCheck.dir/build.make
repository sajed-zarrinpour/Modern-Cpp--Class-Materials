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

# Utility rule file for NightlyMemoryCheck.

# Include the progress variables for this target.
include tests/CMakeFiles/NightlyMemoryCheck.dir/progress.make

tests/CMakeFiles/NightlyMemoryCheck:
	cd /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests && /usr/bin/ctest -D NightlyMemoryCheck

NightlyMemoryCheck: tests/CMakeFiles/NightlyMemoryCheck
NightlyMemoryCheck: tests/CMakeFiles/NightlyMemoryCheck.dir/build.make

.PHONY : NightlyMemoryCheck

# Rule to build all files generated by this target.
tests/CMakeFiles/NightlyMemoryCheck.dir/build: NightlyMemoryCheck

.PHONY : tests/CMakeFiles/NightlyMemoryCheck.dir/build

tests/CMakeFiles/NightlyMemoryCheck.dir/clean:
	cd /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/NightlyMemoryCheck.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/NightlyMemoryCheck.dir/clean

tests/CMakeFiles/NightlyMemoryCheck.dir/depend:
	cd /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/tests /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests /home/samim/Projects/local/scientific/CXX/modern/modern_cxx_overview/materials/09google_test_project/build/tests/CMakeFiles/NightlyMemoryCheck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/NightlyMemoryCheck.dir/depend

