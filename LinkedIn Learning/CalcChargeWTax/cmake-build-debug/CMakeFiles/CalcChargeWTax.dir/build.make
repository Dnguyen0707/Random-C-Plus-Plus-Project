# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\daiho\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\daiho\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\CalcChargeWTax.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\CalcChargeWTax.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\CalcChargeWTax.dir\flags.make

CMakeFiles\CalcChargeWTax.dir\main.cpp.obj: CMakeFiles\CalcChargeWTax.dir\flags.make
CMakeFiles\CalcChargeWTax.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CalcChargeWTax.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CalcChargeWTax.dir\main.cpp.obj /FdCMakeFiles\CalcChargeWTax.dir\ /FS -c "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\main.cpp"
<<

CMakeFiles\CalcChargeWTax.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CalcChargeWTax.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\cl.exe > CMakeFiles\CalcChargeWTax.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\main.cpp"
<<

CMakeFiles\CalcChargeWTax.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CalcChargeWTax.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CalcChargeWTax.dir\main.cpp.s /c "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\main.cpp"
<<

# Object files for target CalcChargeWTax
CalcChargeWTax_OBJECTS = \
"CMakeFiles\CalcChargeWTax.dir\main.cpp.obj"

# External object files for target CalcChargeWTax
CalcChargeWTax_EXTERNAL_OBJECTS =

CalcChargeWTax.exe: CMakeFiles\CalcChargeWTax.dir\main.cpp.obj
CalcChargeWTax.exe: CMakeFiles\CalcChargeWTax.dir\build.make
CalcChargeWTax.exe: CMakeFiles\CalcChargeWTax.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CalcChargeWTax.exe"
	C:\Users\daiho\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\CalcChargeWTax.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\CalcChargeWTax.dir\objects1.rsp @<<
 /out:CalcChargeWTax.exe /implib:CalcChargeWTax.lib /pdb:"D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\cmake-build-debug\CalcChargeWTax.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\CalcChargeWTax.dir\build: CalcChargeWTax.exe

.PHONY : CMakeFiles\CalcChargeWTax.dir\build

CMakeFiles\CalcChargeWTax.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CalcChargeWTax.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CalcChargeWTax.dir\clean

CMakeFiles\CalcChargeWTax.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax" "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax" "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\cmake-build-debug" "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\cmake-build-debug" "D:\User Files\Documents\GitHub\Random-C-Plus-Plus-Project\LinkedIn Learning\CalcChargeWTax\cmake-build-debug\CMakeFiles\CalcChargeWTax.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\CalcChargeWTax.dir\depend
