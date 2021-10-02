##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## infin_add
##

CC      =	gcc

SRC     =	my_convert_temp.cpp


NAME    =	my_convert_temp


all:    NAME clean

NAME:
	g++ -o $(NAME) $(SRC) -g3
clean:
	find -name "*~" -delete -o -name "#*#" -delete


fclean: clean
	rm -f $(NAME)

re:     fclean all
