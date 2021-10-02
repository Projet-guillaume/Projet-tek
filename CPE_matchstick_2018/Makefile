##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## infin_add
##

CC      =	gcc

SRC     =	matchstick.c

NAME    =	matchstick


all:    NAME clean

NAME:
	$(MAKE) -C ./lib/my
	gcc -o $(NAME) $(SRC) -L./lib/my -lmy -g3
clean:
	find -name "*~" -delete -o -name "#*#" -delete


fclean: clean
	rm -f $(NAME)

re:     fclean all
