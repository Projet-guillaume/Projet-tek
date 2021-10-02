##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## infin_add
##

CC      =	gcc

SRC     =	minishell.c	\
		main.c	\
		ctrl_d.c

NAME    =	mysh


all:    NAME clean

NAME:
	$(MAKE) -C ./lib/my
	gcc -o $(NAME) $(SRC) -L./lib/my -lmy -L. -lgnl -g3
clean:
	find -name "*~" -delete -o -name "#*#" -delete


fclean: clean
	rm -f $(NAME)

re:     fclean all
