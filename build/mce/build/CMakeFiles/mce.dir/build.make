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
CMAKE_SOURCE_DIR = /home/dbeken/Development/oai/mce/build/mce

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dbeken/Development/oai/mce/build/mce/build

# Include any dependencies generated for this target.
include CMakeFiles/mce.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mce.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mce.dir/flags.make

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o: CMakeFiles/mce.dir/flags.make
CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o: /home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o   -c /home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c > CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.i

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c -o CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.s

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o.requires:

.PHONY : CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o.requires

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o.provides: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o.requires
	$(MAKE) -f CMakeFiles/mce.dir/build.make CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o.provides.build
.PHONY : CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o.provides

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o.provides.build: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o


CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o: CMakeFiles/mce.dir/flags.make
CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o: /home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o   -c /home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c > CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.i

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c -o CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.s

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o.requires:

.PHONY : CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o.requires

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o.provides: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o.requires
	$(MAKE) -f CMakeFiles/mce.dir/build.make CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o.provides.build
.PHONY : CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o.provides

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o.provides.build: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o


CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o: CMakeFiles/mce.dir/flags.make
CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o: /home/dbeken/Development/oai/mce/src/common/common_types.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o   -c /home/dbeken/Development/oai/mce/src/common/common_types.c

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dbeken/Development/oai/mce/src/common/common_types.c > CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.i

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dbeken/Development/oai/mce/src/common/common_types.c -o CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.s

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o.requires:

.PHONY : CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o.requires

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o.provides: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o.requires
	$(MAKE) -f CMakeFiles/mce.dir/build.make CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o.provides.build
.PHONY : CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o.provides

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o.provides.build: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o


CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o: CMakeFiles/mce.dir/flags.make
CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o: /home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o   -c /home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c > CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.i

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c -o CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.s

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o.requires:

.PHONY : CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o.requires

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o.provides: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o.requires
	$(MAKE) -f CMakeFiles/mce.dir/build.make CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o.provides.build
.PHONY : CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o.provides

CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o.provides.build: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o


# Object files for target mce
mce_OBJECTS = \
"CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o" \
"CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o" \
"CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o" \
"CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o"

# External object files for target mce
mce_EXTERNAL_OBJECTS =

mce: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o
mce: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o
mce: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o
mce: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o
mce: CMakeFiles/mce.dir/build.make
mce: libM2AP_LIB.a
mce: libM2AP_EPC.a
mce: libSm.a
mce: libGTPV2C.a
mce: libSCTP_SERVER.a
mce: libUDP_SERVER.a
mce: libMCE_APP.a
mce: libITTI.a
mce: lib3GPP_TYPES.a
mce: libCN_UTILS.a
mce: libHASHTABLE.a
mce: libBSTR.a
mce: /usr/local/lib/liblfds710.so
mce: CMakeFiles/mce.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable mce"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mce.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mce.dir/build: mce

.PHONY : CMakeFiles/mce.dir/build

CMakeFiles/mce.dir/requires: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce_log.c.o.requires
CMakeFiles/mce.dir/requires: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/oai_mce/oai_mce.c.o.requires
CMakeFiles/mce.dir/requires: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/common_types.c.o.requires
CMakeFiles/mce.dir/requires: CMakeFiles/mce.dir/home/dbeken/Development/oai/mce/src/common/itti_free_defined_msg.c.o.requires

.PHONY : CMakeFiles/mce.dir/requires

CMakeFiles/mce.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mce.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mce.dir/clean

CMakeFiles/mce.dir/depend:
	cd /home/dbeken/Development/oai/mce/build/mce/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dbeken/Development/oai/mce/build/mce /home/dbeken/Development/oai/mce/build/mce /home/dbeken/Development/oai/mce/build/mce/build /home/dbeken/Development/oai/mce/build/mce/build /home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles/mce.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mce.dir/depend

