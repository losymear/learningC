cmake_minimum_required(VERSION 3.12)
project(test C)

set(CMAKE_C_STANDARD 99)

add_executable(basic1 basic/hello_world.c basic/count_characters.c basic/count_lines.c basic/count_words.c)
add_executable(basic2 basic/fahrenheit-for-loop.c)
add_executable(basic3 basic/fahrenheit-celsius-table.c)
add_executable(basic4 basic/copy_input_to_output.c)
add_executable(basic5 basic/count_characters.c)
add_executable(basic6 basic/count_lines.c)
add_executable(basic7 basic/count_words.c)


include(tcpl/CMakeLists.txt)
