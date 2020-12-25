cmake_minimum_required(VERSION 3.17)
project(printf C)

set(CMAKE_C_STANDARD 99)

add_executable(printf main.c printf.c printf.h utils.c parser/parser.c
        parser/flags.c processor/processor.c utils.c processor/di.c
        processor/di2.c processor/c.c processor/s.c processor/p.c
        processor/processor.h processor/u.c processor/x.c libft/ft_u_len.c libft/long_to_hex.c)

target_link_libraries(printf ${CMAKE_SOURCE_DIR}/libft/libft.a)