# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/build

# Include any dependencies generated for this target.
include CMakeFiles/tareaPOO2Lab.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tareaPOO2Lab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tareaPOO2Lab.dir/flags.make

CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o: CMakeFiles/tareaPOO2Lab.dir/flags.make
CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o -c /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/src/main.cpp

CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/src/main.cpp > CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.i

CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/src/main.cpp -o CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.s

CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o.requires

CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o.provides: CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/tareaPOO2Lab.dir/build.make CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o.provides

CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o.provides.build: CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o


# Object files for target tareaPOO2Lab
tareaPOO2Lab_OBJECTS = \
"CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o"

# External object files for target tareaPOO2Lab
tareaPOO2Lab_EXTERNAL_OBJECTS =

tareaPOO2Lab: CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o
tareaPOO2Lab: CMakeFiles/tareaPOO2Lab.dir/build.make
tareaPOO2Lab: CMakeFiles/tareaPOO2Lab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tareaPOO2Lab"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tareaPOO2Lab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tareaPOO2Lab.dir/build: tareaPOO2Lab

.PHONY : CMakeFiles/tareaPOO2Lab.dir/build

CMakeFiles/tareaPOO2Lab.dir/requires: CMakeFiles/tareaPOO2Lab.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/tareaPOO2Lab.dir/requires

CMakeFiles/tareaPOO2Lab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tareaPOO2Lab.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tareaPOO2Lab.dir/clean

CMakeFiles/tareaPOO2Lab.dir/depend:
	cd /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/build /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/build /home/anthony/Escritorio/repositorios/pooii-tarea-1-entrega-14-04-warleon/build/CMakeFiles/tareaPOO2Lab.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tareaPOO2Lab.dir/depend

