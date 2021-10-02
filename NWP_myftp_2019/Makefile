##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRCS	= 	src/*.c

NAME	=	server

all:	 NAME clean

NAME:
	gcc -o $(NAME) $(SRCS) -Wall -Wextra

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
