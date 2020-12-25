NAME = libftprintf.a

SRC =	printf.c utils.c parser/parser.c parser/flags.c processor/processor.c \
		processor/di.c processor/di2.c processor/c.c processor/s.c

HEAD = printf.h

OBJ	= ${SRC:.c=.o}

FLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ) $(HEAD)
			make -C libft
			ar rc $(NAME) $(OBJ) libft/*.o

.c.o:
			gcc $(FLAGS) -c $< -o $(<:.c=.o)

clean:
			rm -f $(OBJ)
			make -C libft clean

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
