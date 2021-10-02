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
		my_atoi.c	\
		my_putab.c	\
		my_print_space.c	\
		my_print_stick.c	\
		maloc_map.c	\
		get_match_ligne.c	\
		get_match_stick.c	\
		tab_mod.c	\
		check_ligne_stick.c	\
		new_s.c	\
		randoma_ligne.c	\
		check_ligne_ia.c	\
		randoma_stick.c	\
		check_ia_stick.c	\
		check_end_ia.c	\
		check_end_player.c	\
		check_end_game.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	 NAME clean

NAME: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
