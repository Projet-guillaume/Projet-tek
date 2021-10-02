##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_str_to_word_array.c	\
		compare.c	\
		compare_tab.c	\
		compare_str.c	\
		my_putab_env.c	\
		my_strlen.c	\
		ctrl_c.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	 NAME clean

NAME: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
