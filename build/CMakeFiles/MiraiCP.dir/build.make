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
CMAKE_SOURCE_DIR = /home/thallium/git/Mirai-competitive-programming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thallium/git/Mirai-competitive-programming/build

# Include any dependencies generated for this target.
include CMakeFiles/MiraiCP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MiraiCP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MiraiCP.dir/flags.make

CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.o: CMakeFiles/MiraiCP.dir/flags.make
CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.o: ../single_include/MiraiCP/MiraiCP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thallium/git/Mirai-competitive-programming/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.o -c /home/thallium/git/Mirai-competitive-programming/single_include/MiraiCP/MiraiCP.cpp

CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thallium/git/Mirai-competitive-programming/single_include/MiraiCP/MiraiCP.cpp > CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.i

CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thallium/git/Mirai-competitive-programming/single_include/MiraiCP/MiraiCP.cpp -o CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.s

CMakeFiles/MiraiCP.dir/main.cpp.o: CMakeFiles/MiraiCP.dir/flags.make
CMakeFiles/MiraiCP.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thallium/git/Mirai-competitive-programming/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MiraiCP.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MiraiCP.dir/main.cpp.o -c /home/thallium/git/Mirai-competitive-programming/main.cpp

CMakeFiles/MiraiCP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MiraiCP.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thallium/git/Mirai-competitive-programming/main.cpp > CMakeFiles/MiraiCP.dir/main.cpp.i

CMakeFiles/MiraiCP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MiraiCP.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thallium/git/Mirai-competitive-programming/main.cpp -o CMakeFiles/MiraiCP.dir/main.cpp.s

# Object files for target MiraiCP
MiraiCP_OBJECTS = \
"CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.o" \
"CMakeFiles/MiraiCP.dir/main.cpp.o"

# External object files for target MiraiCP
MiraiCP_EXTERNAL_OBJECTS =

libMiraiCP.so: CMakeFiles/MiraiCP.dir/single_include/MiraiCP/MiraiCP.cpp.o
libMiraiCP.so: CMakeFiles/MiraiCP.dir/main.cpp.o
libMiraiCP.so: CMakeFiles/MiraiCP.dir/build.make
libMiraiCP.so: CMakeFiles/MiraiCP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thallium/git/Mirai-competitive-programming/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libMiraiCP.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MiraiCP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MiraiCP.dir/build: libMiraiCP.so

.PHONY : CMakeFiles/MiraiCP.dir/build

CMakeFiles/MiraiCP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MiraiCP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MiraiCP.dir/clean

CMakeFiles/MiraiCP.dir/depend:
	cd /home/thallium/git/Mirai-competitive-programming/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thallium/git/Mirai-competitive-programming /home/thallium/git/Mirai-competitive-programming /home/thallium/git/Mirai-competitive-programming/build /home/thallium/git/Mirai-competitive-programming/build /home/thallium/git/Mirai-competitive-programming/build/CMakeFiles/MiraiCP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MiraiCP.dir/depend
