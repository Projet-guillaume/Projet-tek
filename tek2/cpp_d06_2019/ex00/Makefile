##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## infin_add
##

CC      =	gcc

SRC     =	my_cat.cpp

NAME    =	my_cat


all:    NAME clean

NAME:
	g++ -o $(NAME) $(SRC) -g3 -Wall -Wextra -Werror
clean:
	find -name "*~" -delete -o -name "#*#" -delete


fclean: clean
	rm -f $(NAME)

re:     fclean all
