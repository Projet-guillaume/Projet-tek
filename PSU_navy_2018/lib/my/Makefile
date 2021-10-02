##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lib/my
##

SRC	=	my_putstr.c	\
		my_putchar.c	\
		my_strlen.c	\
		my_put_nbr.c	\
		my_revstr.c	\
		my_strcpy.c


OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	 NAME mr_clean clean

NAME:	$(OBJ)
	ar rc $(NAME) $(OBJ)

mr_clean:
	find -name "*~" -delete -o -name "#*#" -delete

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
