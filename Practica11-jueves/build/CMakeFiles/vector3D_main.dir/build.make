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
CMAKE_SOURCE_DIR = /home/usuario/Practica-11/Practica11-jueves

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/Practica-11/Practica11-jueves/build

# Include any dependencies generated for this target.
include CMakeFiles/vector3D_main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vector3D_main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vector3D_main.dir/flags.make

CMakeFiles/vector3D_main.dir/vector3D.cc.o: CMakeFiles/vector3D_main.dir/flags.make
CMakeFiles/vector3D_main.dir/vector3D.cc.o: ../vector3D.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/Practica-11/Practica11-jueves/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vector3D_main.dir/vector3D.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vector3D_main.dir/vector3D.cc.o -c /home/usuario/Practica-11/Practica11-jueves/vector3D.cc

CMakeFiles/vector3D_main.dir/vector3D.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector3D_main.dir/vector3D.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/Practica-11/Practica11-jueves/vector3D.cc > CMakeFiles/vector3D_main.dir/vector3D.cc.i

CMakeFiles/vector3D_main.dir/vector3D.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector3D_main.dir/vector3D.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/Practica-11/Practica11-jueves/vector3D.cc -o CMakeFiles/vector3D_main.dir/vector3D.cc.s

CMakeFiles/vector3D_main.dir/vector3D_main.cc.o: CMakeFiles/vector3D_main.dir/flags.make
CMakeFiles/vector3D_main.dir/vector3D_main.cc.o: ../vector3D_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/Practica-11/Practica11-jueves/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vector3D_main.dir/vector3D_main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vector3D_main.dir/vector3D_main.cc.o -c /home/usuario/Practica-11/Practica11-jueves/vector3D_main.cc

CMakeFiles/vector3D_main.dir/vector3D_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector3D_main.dir/vector3D_main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/Practica-11/Practica11-jueves/vector3D_main.cc > CMakeFiles/vector3D_main.dir/vector3D_main.cc.i

CMakeFiles/vector3D_main.dir/vector3D_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector3D_main.dir/vector3D_main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/Practica-11/Practica11-jueves/vector3D_main.cc -o CMakeFiles/vector3D_main.dir/vector3D_main.cc.s

# Object files for target vector3D_main
vector3D_main_OBJECTS = \
"CMakeFiles/vector3D_main.dir/vector3D.cc.o" \
"CMakeFiles/vector3D_main.dir/vector3D_main.cc.o"

# External object files for target vector3D_main
vector3D_main_EXTERNAL_OBJECTS =

vector3D_main: CMakeFiles/vector3D_main.dir/vector3D.cc.o
vector3D_main: CMakeFiles/vector3D_main.dir/vector3D_main.cc.o
vector3D_main: CMakeFiles/vector3D_main.dir/build.make
vector3D_main: CMakeFiles/vector3D_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/Practica-11/Practica11-jueves/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable vector3D_main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector3D_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vector3D_main.dir/build: vector3D_main

.PHONY : CMakeFiles/vector3D_main.dir/build

CMakeFiles/vector3D_main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vector3D_main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vector3D_main.dir/clean

CMakeFiles/vector3D_main.dir/depend:
	cd /home/usuario/Practica-11/Practica11-jueves/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/Practica-11/Practica11-jueves /home/usuario/Practica-11/Practica11-jueves /home/usuario/Practica-11/Practica11-jueves/build /home/usuario/Practica-11/Practica11-jueves/build /home/usuario/Practica-11/Practica11-jueves/build/CMakeFiles/vector3D_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vector3D_main.dir/depend

