cmake_minimum_required(VERSION 3.12)
project(tcpl C)

set(CMAKE_C_STANDARD 99)


add_executable(main tcpl/CodeFromBook/index.c tcpl/CodeFromBook/customIO.c tcpl/CodeFromBook/customIO.h)
add_executable(lib1 tcpl/CodeFromBook/customIO.c)
