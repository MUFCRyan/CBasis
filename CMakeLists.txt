cmake_minimum_required(VERSION 3.10)
project(CBasis)

set(CMAKE_CXX_STANDARD 11)

add_executable(CBasis
    chapter07/example07.c
    chapter07/example08.c
    cmake-build-debug/CDemo
    cmake-build-debug/CDemo.cbp
    cmake-build-debug/cmake_install.cmake
    cmake-build-debug/CMakeCache.txt
    cmake-build-debug/Makefile
    CMakeLists.txt
    main.c
    README.md)
