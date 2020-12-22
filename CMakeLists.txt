cmake_minimum_required(VERSION 3.17)
project(printf C)

set(CMAKE_C_STANDARD 99)

add_executable(printf main.c printf.c printf.h utils.c parser/parser.c parser/flags.c parser/parser.h
        libft/libft.h libft/ft_isdigit.c libft/ft_atoi.c libft/ft_isspace_bonus.c)