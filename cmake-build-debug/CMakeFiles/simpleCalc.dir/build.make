# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /opt/clion/CLion-2021.2.2/clion-2021.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/CLion-2021.2.2/clion-2021.2.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/weronika/Pulpit/jpp2/simpleCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/weronika/Pulpit/jpp2/simpleCalc/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/simpleCalc.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/simpleCalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simpleCalc.dir/flags.make

CMakeFiles/simpleCalc.dir/src/main.cpp.o: CMakeFiles/simpleCalc.dir/flags.make
CMakeFiles/simpleCalc.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weronika/Pulpit/jpp2/simpleCalc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simpleCalc.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simpleCalc.dir/src/main.cpp.o -c /home/weronika/Pulpit/jpp2/simpleCalc/src/main.cpp

CMakeFiles/simpleCalc.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleCalc.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weronika/Pulpit/jpp2/simpleCalc/src/main.cpp > CMakeFiles/simpleCalc.dir/src/main.cpp.i

CMakeFiles/simpleCalc.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleCalc.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weronika/Pulpit/jpp2/simpleCalc/src/main.cpp -o CMakeFiles/simpleCalc.dir/src/main.cpp.s

CMakeFiles/simpleCalc.dir/src/calc.cpp.o: CMakeFiles/simpleCalc.dir/flags.make
CMakeFiles/simpleCalc.dir/src/calc.cpp.o: ../src/calc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weronika/Pulpit/jpp2/simpleCalc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simpleCalc.dir/src/calc.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simpleCalc.dir/src/calc.cpp.o -c /home/weronika/Pulpit/jpp2/simpleCalc/src/calc.cpp

CMakeFiles/simpleCalc.dir/src/calc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleCalc.dir/src/calc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weronika/Pulpit/jpp2/simpleCalc/src/calc.cpp > CMakeFiles/simpleCalc.dir/src/calc.cpp.i

CMakeFiles/simpleCalc.dir/src/calc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleCalc.dir/src/calc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weronika/Pulpit/jpp2/simpleCalc/src/calc.cpp -o CMakeFiles/simpleCalc.dir/src/calc.cpp.s

# Object files for target simpleCalc
simpleCalc_OBJECTS = \
"CMakeFiles/simpleCalc.dir/src/main.cpp.o" \
"CMakeFiles/simpleCalc.dir/src/calc.cpp.o"

# External object files for target simpleCalc
simpleCalc_EXTERNAL_OBJECTS =

simpleCalc: CMakeFiles/simpleCalc.dir/src/main.cpp.o
simpleCalc: CMakeFiles/simpleCalc.dir/src/calc.cpp.o
simpleCalc: CMakeFiles/simpleCalc.dir/build.make
simpleCalc: CMakeFiles/simpleCalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weronika/Pulpit/jpp2/simpleCalc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable simpleCalc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simpleCalc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simpleCalc.dir/build: simpleCalc
.PHONY : CMakeFiles/simpleCalc.dir/build

CMakeFiles/simpleCalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simpleCalc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simpleCalc.dir/clean

CMakeFiles/simpleCalc.dir/depend:
	cd /home/weronika/Pulpit/jpp2/simpleCalc/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weronika/Pulpit/jpp2/simpleCalc /home/weronika/Pulpit/jpp2/simpleCalc /home/weronika/Pulpit/jpp2/simpleCalc/cmake-build-debug /home/weronika/Pulpit/jpp2/simpleCalc/cmake-build-debug /home/weronika/Pulpit/jpp2/simpleCalc/cmake-build-debug/CMakeFiles/simpleCalc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simpleCalc.dir/depend

