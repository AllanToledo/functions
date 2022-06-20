cmake_minimum_required(VERSION 3.22)
project(functions C)

set(CMAKE_C_STANDARD 99)

add_executable(functions src/main.c src/test.c src/print/print.c)
