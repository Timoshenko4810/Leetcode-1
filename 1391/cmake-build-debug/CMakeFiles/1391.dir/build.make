# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = C:\Users\15991\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\15991\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Leetcode\1391

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Leetcode\1391\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\1391.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\1391.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\1391.dir\flags.make

CMakeFiles\1391.dir\main.cpp.obj: CMakeFiles\1391.dir\flags.make
CMakeFiles\1391.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Leetcode\1391\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1391.dir/main.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\1391.dir\main.cpp.obj /FdCMakeFiles\1391.dir\ /FS -c E:\Leetcode\1391\main.cpp
<<

CMakeFiles\1391.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1391.dir/main.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe" > CMakeFiles\1391.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Leetcode\1391\main.cpp
<<

CMakeFiles\1391.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1391.dir/main.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\1391.dir\main.cpp.s /c E:\Leetcode\1391\main.cpp
<<

# Object files for target 1391
1391_OBJECTS = \
"CMakeFiles\1391.dir\main.cpp.obj"

# External object files for target 1391
1391_EXTERNAL_OBJECTS =

1391.exe: CMakeFiles\1391.dir\main.cpp.obj
1391.exe: CMakeFiles\1391.dir\build.make
1391.exe: CMakeFiles\1391.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Leetcode\1391\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1391.exe"
	C:\Users\15991\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\1391.dir --rc="C:\PROGRA~2\Windows Kits\10\bin\10.0.17763.0\x86\rc.exe" --mt="C:\PROGRA~2\Windows Kits\10\bin\10.0.17763.0\x86\mt.exe" --manifests  -- "C:\PROGRA~2\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\1391.dir\objects1.rsp @<<
 /out:1391.exe /implib:1391.lib /pdb:E:\Leetcode\1391\cmake-build-debug\1391.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\1391.dir\build: 1391.exe

.PHONY : CMakeFiles\1391.dir\build

CMakeFiles\1391.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1391.dir\cmake_clean.cmake
.PHONY : CMakeFiles\1391.dir\clean

CMakeFiles\1391.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" E:\Leetcode\1391 E:\Leetcode\1391 E:\Leetcode\1391\cmake-build-debug E:\Leetcode\1391\cmake-build-debug E:\Leetcode\1391\cmake-build-debug\CMakeFiles\1391.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\1391.dir\depend

