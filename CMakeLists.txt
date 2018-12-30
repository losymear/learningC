cmake_minimum_required(VERSION 3.12)
project(learning C)

set(CMAKE_C_STANDARD 99)
include(tcpl/CMakeLists.txt)
include(pat/CMakeLists.txt)

add_executable(tmp tmp.c)

add_executable(hello_world basic/hello_world.c)
add_executable(basic_loop basic/fahrenheit-for-loop.c basic/fahrenheit-celsius-table.c)
add_executable(count basic/count_characters.c basic/count_lines.c basic/copy_input_to_output.c
        basic/count_words.c)
add_executable(function basic/function_power.c)
add_executable(array basic/get_max_length_line.c basic/get_max_length_line_external_variable.c)



