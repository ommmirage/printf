cmake_minimum_required(VERSION 3.17)
project(printf C)

set(CMAKE_C_STANDARD 99)

add_executable(printf main.c printf.c printf.h utils.c parser/parser.c
        parser/flags.c processor/processor.c)

target_link_libraries(printf ${CMAKE_SOURCE_DIR}/libft/libft.a)