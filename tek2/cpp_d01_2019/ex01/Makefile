##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

CC      =	gcc

SRC     =	menger.c\
		main.c


NAME    =	menger


all:    NAME clean

NAME:
	gcc -o $(NAME) $(SRC) -g3 -std=gnu11 -Wall -Wextra
clean:
	find -name "*~" -delete -o -name "#*#" -delete


fclean: clean
	rm -f $(NAME)

re:     fclean all
