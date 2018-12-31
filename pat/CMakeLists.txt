cmake_minimum_required(VERSION 3.12)
project(patProject)

set(CMAKE_C_STANDARD 99)
include(pat/zhongM2018/CMakeLists.txt)
include(pat/Basic_Level_Pratice/CMakeLists.txt)


add_executable(pat_current pat/pat.c)


