# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /private/var/folders/k0/y3dc09fs6zq1rclw15qql0zw0000gn/T/AppTranslocation/7453899A-AA4C-4FE2-BA26-68F55FE013DD/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/k0/y3dc09fs6zq1rclw15qql0zw0000gn/T/AppTranslocation/7453899A-AA4C-4FE2-BA26-68F55FE013DD/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/artemijtarasov/CLionProjects/cplusplusmpeitest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/artemijtarasov/CLionProjects/cplusplusmpeitest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/untitled3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled3.dir/flags.make

CMakeFiles/untitled3.dir/number7.cpp.o: CMakeFiles/untitled3.dir/flags.make
CMakeFiles/untitled3.dir/number7.cpp.o: ../number7.cpp
CMakeFiles/untitled3.dir/number7.cpp.o: CMakeFiles/untitled3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/artemijtarasov/CLionProjects/cplusplusmpeitest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled3.dir/number7.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled3.dir/number7.cpp.o -MF CMakeFiles/untitled3.dir/number7.cpp.o.d -o CMakeFiles/untitled3.dir/number7.cpp.o -c /Users/artemijtarasov/CLionProjects/cplusplusmpeitest/number7.cpp

CMakeFiles/untitled3.dir/number7.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled3.dir/number7.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/artemijtarasov/CLionProjects/cplusplusmpeitest/number7.cpp > CMakeFiles/untitled3.dir/number7.cpp.i

CMakeFiles/untitled3.dir/number7.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled3.dir/number7.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/artemijtarasov/CLionProjects/cplusplusmpeitest/number7.cpp -o CMakeFiles/untitled3.dir/number7.cpp.s

# Object files for target untitled3
untitled3_OBJECTS = \
"CMakeFiles/untitled3.dir/number7.cpp.o"

# External object files for target untitled3
untitled3_EXTERNAL_OBJECTS =

untitled3: CMakeFiles/untitled3.dir/number7.cpp.o
untitled3: CMakeFiles/untitled3.dir/build.make
untitled3: CMakeFiles/untitled3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/artemijtarasov/CLionProjects/cplusplusmpeitest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable untitled3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled3.dir/build: untitled3
.PHONY : CMakeFiles/untitled3.dir/build

CMakeFiles/untitled3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled3.dir/clean

CMakeFiles/untitled3.dir/depend:
	cd /Users/artemijtarasov/CLionProjects/cplusplusmpeitest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/artemijtarasov/CLionProjects/cplusplusmpeitest /Users/artemijtarasov/CLionProjects/cplusplusmpeitest /Users/artemijtarasov/CLionProjects/cplusplusmpeitest/cmake-build-debug /Users/artemijtarasov/CLionProjects/cplusplusmpeitest/cmake-build-debug /Users/artemijtarasov/CLionProjects/cplusplusmpeitest/cmake-build-debug/CMakeFiles/untitled3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled3.dir/depend
