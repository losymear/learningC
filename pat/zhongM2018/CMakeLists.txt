cmake_minimum_required(VERSION 3.12)
project(zhongM2018)

set(CMAKE_C_STANDARD 99)


file(GLOB zhongM_Code-Completion_path
        "pat/zhongM2018/*.h"
        "pat/zhongM2018/*.c"
        )


add_executable(zhongM_Code-Completion ${zhongM_Code-Completion_path})


