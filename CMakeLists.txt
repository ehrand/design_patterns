set(CMAKE_CXX_COMPILER "/usr/bin/clang++-14")

cmake_minimum_required(VERSION 3.22)

project(design_patterns_implementations VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)
set(CMAKE_EXPORT_COMPILE_COMMANDS On)
set(CMAKE_VERBOSE_MAKEFILE On)

set(CMAKE_INSTALL_PREFIX ${CMAKE_HOME_DIRECTORY}/_sysroot)

add_subdirectory(notifier)
