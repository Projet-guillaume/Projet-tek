##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## infin_add
##

CC      =	gcc

SRC     =	main.c	\
		send_cord.c	\
		my_atoi.c	\
		my_getline.c	\
		format.c	\
		signal_gest.c	\
		player1.c	\
		map_void.c	\
		my_str_to_word_array.c	\
		gest_error.c	\
		check_boats.c	\
		win_or_lose.c	\
		outil.c	\
		increm.c

NAME    =	navy


all:    NAME clean

NAME:
	$(MAKE) -C ./lib/my
	gcc -o $(NAME) $(SRC) -L./lib/my -lmy -g3
clean:
	find -name "*~" -delete -o -name "#*#" -delete


fclean: clean
	rm -f $(NAME)

re:     fclean all
