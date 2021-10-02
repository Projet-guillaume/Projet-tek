##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	append.c	\
		compare.c	\
		main.c


OBJ	=	$(SRC:.c=.o)

NAME	=	libstring.a

all:	 NAME mr_clean clean

NAME:	$(OBJ)
	ar rc $(NAME) $(OBJ)

mr_clean:
	find -name "*~" -delete -o -name "#*#" -delete
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
