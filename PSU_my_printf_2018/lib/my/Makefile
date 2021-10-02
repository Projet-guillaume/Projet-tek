##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strlen.c	\
		hexa.c	\
		aloc.c	\
		hexa_maj.c	\
		binaire.c	\
		octal.c	\
		printf.c

OBJ	=	$(SRC:.c=.o)

NAME	=	../../libmy.a

all:	 NAME clean

NAME: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
