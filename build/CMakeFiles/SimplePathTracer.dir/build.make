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
CMAKE_SOURCE_DIR = /home/santiago/code/graphics/Simple-Path-Tracer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/santiago/code/graphics/Simple-Path-Tracer/build

# Include any dependencies generated for this target.
include CMakeFiles/SimplePathTracer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SimplePathTracer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimplePathTracer.dir/flags.make

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.o: CMakeFiles/SimplePathTracer.dir/flags.make
CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.o: ../src/Simple-Path-Tracer/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.o -c /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/main.cpp

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/main.cpp > CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.i

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/main.cpp -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.s

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.o: CMakeFiles/SimplePathTracer.dir/flags.make
CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.o: ../src/Simple-Path-Tracer/PathTracer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.o -c /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/PathTracer.cpp

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/PathTracer.cpp > CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.i

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/PathTracer.cpp -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.s

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.o: CMakeFiles/SimplePathTracer.dir/flags.make
CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.o: ../src/Simple-Path-Tracer/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.o -c /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Camera.cpp

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Camera.cpp > CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.i

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Camera.cpp -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.s

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.o: CMakeFiles/SimplePathTracer.dir/flags.make
CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.o: ../src/Simple-Path-Tracer/Ray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.o -c /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Ray.cpp

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Ray.cpp > CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.i

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Ray.cpp -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.s

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.o: CMakeFiles/SimplePathTracer.dir/flags.make
CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.o: ../src/Simple-Path-Tracer/util.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.o -c /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/util.cpp

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/util.cpp > CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.i

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/util.cpp -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.s

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.o: CMakeFiles/SimplePathTracer.dir/flags.make
CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.o: ../src/Simple-Path-Tracer/Surfaces/Sphere.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.o -c /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Surfaces/Sphere.cpp

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Surfaces/Sphere.cpp > CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.i

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Surfaces/Sphere.cpp -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.s

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.o: CMakeFiles/SimplePathTracer.dir/flags.make
CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.o: ../src/Simple-Path-Tracer/Materials/Diffuse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.o -c /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Materials/Diffuse.cpp

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Materials/Diffuse.cpp > CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.i

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Materials/Diffuse.cpp -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.s

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.o: CMakeFiles/SimplePathTracer.dir/flags.make
CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.o: ../src/Simple-Path-Tracer/Materials/Dielectric.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.o -c /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Materials/Dielectric.cpp

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Materials/Dielectric.cpp > CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.i

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Materials/Dielectric.cpp -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.s

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.o: CMakeFiles/SimplePathTracer.dir/flags.make
CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.o: ../src/Simple-Path-Tracer/Materials/Metal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.o -c /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Materials/Metal.cpp

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Materials/Metal.cpp > CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.i

CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/santiago/code/graphics/Simple-Path-Tracer/src/Simple-Path-Tracer/Materials/Metal.cpp -o CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.s

# Object files for target SimplePathTracer
SimplePathTracer_OBJECTS = \
"CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.o" \
"CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.o" \
"CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.o" \
"CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.o" \
"CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.o" \
"CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.o" \
"CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.o" \
"CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.o" \
"CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.o"

# External object files for target SimplePathTracer
SimplePathTracer_EXTERNAL_OBJECTS =

../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/main.cpp.o
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/PathTracer.cpp.o
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Camera.cpp.o
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Ray.cpp.o
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/util.cpp.o
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Surfaces/Sphere.cpp.o
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Diffuse.cpp.o
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Dielectric.cpp.o
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/src/Simple-Path-Tracer/Materials/Metal.cpp.o
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/build.make
../bin/SimplePathTracer: CMakeFiles/SimplePathTracer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable ../bin/SimplePathTracer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SimplePathTracer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimplePathTracer.dir/build: ../bin/SimplePathTracer

.PHONY : CMakeFiles/SimplePathTracer.dir/build

CMakeFiles/SimplePathTracer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SimplePathTracer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SimplePathTracer.dir/clean

CMakeFiles/SimplePathTracer.dir/depend:
	cd /home/santiago/code/graphics/Simple-Path-Tracer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/santiago/code/graphics/Simple-Path-Tracer /home/santiago/code/graphics/Simple-Path-Tracer /home/santiago/code/graphics/Simple-Path-Tracer/build /home/santiago/code/graphics/Simple-Path-Tracer/build /home/santiago/code/graphics/Simple-Path-Tracer/build/CMakeFiles/SimplePathTracer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SimplePathTracer.dir/depend

