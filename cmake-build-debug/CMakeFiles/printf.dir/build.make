# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dechanel/printf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dechanel/printf/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/printf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/printf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/printf.dir/flags.make

CMakeFiles/printf.dir/main.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/printf.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/main.c.o   -c /Users/dechanel/printf/main.c

CMakeFiles/printf.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/main.c > CMakeFiles/printf.dir/main.c.i

CMakeFiles/printf.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/main.c -o CMakeFiles/printf.dir/main.c.s

CMakeFiles/printf.dir/printf.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/printf.c.o: ../printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/printf.dir/printf.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/printf.c.o   -c /Users/dechanel/printf/printf.c

CMakeFiles/printf.dir/printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/printf.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/printf.c > CMakeFiles/printf.dir/printf.c.i

CMakeFiles/printf.dir/printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/printf.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/printf.c -o CMakeFiles/printf.dir/printf.c.s

CMakeFiles/printf.dir/utils.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/utils.c.o: ../utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/printf.dir/utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/utils.c.o   -c /Users/dechanel/printf/utils.c

CMakeFiles/printf.dir/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/utils.c > CMakeFiles/printf.dir/utils.c.i

CMakeFiles/printf.dir/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/utils.c -o CMakeFiles/printf.dir/utils.c.s

CMakeFiles/printf.dir/parser/parser.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/parser/parser.c.o: ../parser/parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/printf.dir/parser/parser.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/parser/parser.c.o   -c /Users/dechanel/printf/parser/parser.c

CMakeFiles/printf.dir/parser/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/parser/parser.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/parser/parser.c > CMakeFiles/printf.dir/parser/parser.c.i

CMakeFiles/printf.dir/parser/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/parser/parser.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/parser/parser.c -o CMakeFiles/printf.dir/parser/parser.c.s

CMakeFiles/printf.dir/parser/flags.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/parser/flags.c.o: ../parser/flags.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/printf.dir/parser/flags.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/parser/flags.c.o   -c /Users/dechanel/printf/parser/flags.c

CMakeFiles/printf.dir/parser/flags.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/parser/flags.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/parser/flags.c > CMakeFiles/printf.dir/parser/flags.c.i

CMakeFiles/printf.dir/parser/flags.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/parser/flags.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/parser/flags.c -o CMakeFiles/printf.dir/parser/flags.c.s

CMakeFiles/printf.dir/processor/processor.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/processor/processor.c.o: ../processor/processor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/printf.dir/processor/processor.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/processor/processor.c.o   -c /Users/dechanel/printf/processor/processor.c

CMakeFiles/printf.dir/processor/processor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/processor/processor.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/processor/processor.c > CMakeFiles/printf.dir/processor/processor.c.i

CMakeFiles/printf.dir/processor/processor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/processor/processor.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/processor/processor.c -o CMakeFiles/printf.dir/processor/processor.c.s

CMakeFiles/printf.dir/processor/di.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/processor/di.c.o: ../processor/di.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/printf.dir/processor/di.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/processor/di.c.o   -c /Users/dechanel/printf/processor/di.c

CMakeFiles/printf.dir/processor/di.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/processor/di.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/processor/di.c > CMakeFiles/printf.dir/processor/di.c.i

CMakeFiles/printf.dir/processor/di.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/processor/di.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/processor/di.c -o CMakeFiles/printf.dir/processor/di.c.s

CMakeFiles/printf.dir/processor/di2.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/processor/di2.c.o: ../processor/di2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/printf.dir/processor/di2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/processor/di2.c.o   -c /Users/dechanel/printf/processor/di2.c

CMakeFiles/printf.dir/processor/di2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/processor/di2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/processor/di2.c > CMakeFiles/printf.dir/processor/di2.c.i

CMakeFiles/printf.dir/processor/di2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/processor/di2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/processor/di2.c -o CMakeFiles/printf.dir/processor/di2.c.s

CMakeFiles/printf.dir/processor/c.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/processor/c.c.o: ../processor/c.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/printf.dir/processor/c.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/processor/c.c.o   -c /Users/dechanel/printf/processor/c.c

CMakeFiles/printf.dir/processor/c.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/processor/c.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/processor/c.c > CMakeFiles/printf.dir/processor/c.c.i

CMakeFiles/printf.dir/processor/c.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/processor/c.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/processor/c.c -o CMakeFiles/printf.dir/processor/c.c.s

CMakeFiles/printf.dir/processor/s.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/processor/s.c.o: ../processor/s.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/printf.dir/processor/s.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/processor/s.c.o   -c /Users/dechanel/printf/processor/s.c

CMakeFiles/printf.dir/processor/s.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/processor/s.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/processor/s.c > CMakeFiles/printf.dir/processor/s.c.i

CMakeFiles/printf.dir/processor/s.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/processor/s.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/processor/s.c -o CMakeFiles/printf.dir/processor/s.c.s

CMakeFiles/printf.dir/processor/p.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/processor/p.c.o: ../processor/p.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/printf.dir/processor/p.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/processor/p.c.o   -c /Users/dechanel/printf/processor/p.c

CMakeFiles/printf.dir/processor/p.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/processor/p.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/processor/p.c > CMakeFiles/printf.dir/processor/p.c.i

CMakeFiles/printf.dir/processor/p.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/processor/p.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/processor/p.c -o CMakeFiles/printf.dir/processor/p.c.s

CMakeFiles/printf.dir/processor/u.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/processor/u.c.o: ../processor/u.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/printf.dir/processor/u.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/processor/u.c.o   -c /Users/dechanel/printf/processor/u.c

CMakeFiles/printf.dir/processor/u.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/processor/u.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/processor/u.c > CMakeFiles/printf.dir/processor/u.c.i

CMakeFiles/printf.dir/processor/u.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/processor/u.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/processor/u.c -o CMakeFiles/printf.dir/processor/u.c.s

CMakeFiles/printf.dir/processor/x.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/processor/x.c.o: ../processor/x.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/printf.dir/processor/x.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/processor/x.c.o   -c /Users/dechanel/printf/processor/x.c

CMakeFiles/printf.dir/processor/x.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/processor/x.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/processor/x.c > CMakeFiles/printf.dir/processor/x.c.i

CMakeFiles/printf.dir/processor/x.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/processor/x.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/processor/x.c -o CMakeFiles/printf.dir/processor/x.c.s

CMakeFiles/printf.dir/libft/ft_u_len.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/libft/ft_u_len.c.o: ../libft/ft_u_len.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/printf.dir/libft/ft_u_len.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/libft/ft_u_len.c.o   -c /Users/dechanel/printf/libft/ft_u_len.c

CMakeFiles/printf.dir/libft/ft_u_len.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/libft/ft_u_len.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/libft/ft_u_len.c > CMakeFiles/printf.dir/libft/ft_u_len.c.i

CMakeFiles/printf.dir/libft/ft_u_len.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/libft/ft_u_len.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/libft/ft_u_len.c -o CMakeFiles/printf.dir/libft/ft_u_len.c.s

CMakeFiles/printf.dir/libft/long_to_hex.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/libft/long_to_hex.c.o: ../libft/long_to_hex.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/printf.dir/libft/long_to_hex.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/libft/long_to_hex.c.o   -c /Users/dechanel/printf/libft/long_to_hex.c

CMakeFiles/printf.dir/libft/long_to_hex.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/libft/long_to_hex.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/libft/long_to_hex.c > CMakeFiles/printf.dir/libft/long_to_hex.c.i

CMakeFiles/printf.dir/libft/long_to_hex.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/libft/long_to_hex.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/libft/long_to_hex.c -o CMakeFiles/printf.dir/libft/long_to_hex.c.s

CMakeFiles/printf.dir/processor/XX.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/processor/XX.c.o: ../processor/XX.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/printf.dir/processor/XX.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/processor/XX.c.o   -c /Users/dechanel/printf/processor/XX.c

CMakeFiles/printf.dir/processor/XX.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/processor/XX.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dechanel/printf/processor/XX.c > CMakeFiles/printf.dir/processor/XX.c.i

CMakeFiles/printf.dir/processor/XX.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/processor/XX.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dechanel/printf/processor/XX.c -o CMakeFiles/printf.dir/processor/XX.c.s

# Object files for target printf
printf_OBJECTS = \
"CMakeFiles/printf.dir/main.c.o" \
"CMakeFiles/printf.dir/printf.c.o" \
"CMakeFiles/printf.dir/utils.c.o" \
"CMakeFiles/printf.dir/parser/parser.c.o" \
"CMakeFiles/printf.dir/parser/flags.c.o" \
"CMakeFiles/printf.dir/processor/processor.c.o" \
"CMakeFiles/printf.dir/processor/di.c.o" \
"CMakeFiles/printf.dir/processor/di2.c.o" \
"CMakeFiles/printf.dir/processor/c.c.o" \
"CMakeFiles/printf.dir/processor/s.c.o" \
"CMakeFiles/printf.dir/processor/p.c.o" \
"CMakeFiles/printf.dir/processor/u.c.o" \
"CMakeFiles/printf.dir/processor/x.c.o" \
"CMakeFiles/printf.dir/libft/ft_u_len.c.o" \
"CMakeFiles/printf.dir/libft/long_to_hex.c.o" \
"CMakeFiles/printf.dir/processor/XX.c.o"

# External object files for target printf
printf_EXTERNAL_OBJECTS =

printf: CMakeFiles/printf.dir/main.c.o
printf: CMakeFiles/printf.dir/printf.c.o
printf: CMakeFiles/printf.dir/utils.c.o
printf: CMakeFiles/printf.dir/parser/parser.c.o
printf: CMakeFiles/printf.dir/parser/flags.c.o
printf: CMakeFiles/printf.dir/processor/processor.c.o
printf: CMakeFiles/printf.dir/processor/di.c.o
printf: CMakeFiles/printf.dir/processor/di2.c.o
printf: CMakeFiles/printf.dir/processor/c.c.o
printf: CMakeFiles/printf.dir/processor/s.c.o
printf: CMakeFiles/printf.dir/processor/p.c.o
printf: CMakeFiles/printf.dir/processor/u.c.o
printf: CMakeFiles/printf.dir/processor/x.c.o
printf: CMakeFiles/printf.dir/libft/ft_u_len.c.o
printf: CMakeFiles/printf.dir/libft/long_to_hex.c.o
printf: CMakeFiles/printf.dir/processor/XX.c.o
printf: CMakeFiles/printf.dir/build.make
printf: ../libft/libft.a
printf: CMakeFiles/printf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dechanel/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking C executable printf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/printf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/printf.dir/build: printf

.PHONY : CMakeFiles/printf.dir/build

CMakeFiles/printf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/printf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/printf.dir/clean

CMakeFiles/printf.dir/depend:
	cd /Users/dechanel/printf/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dechanel/printf /Users/dechanel/printf /Users/dechanel/printf/cmake-build-debug /Users/dechanel/printf/cmake-build-debug /Users/dechanel/printf/cmake-build-debug/CMakeFiles/printf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/printf.dir/depend

