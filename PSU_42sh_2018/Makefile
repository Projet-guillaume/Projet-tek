##
## EPITECH PROJECT, 2018
## MAKEFILE
## File description:
## script for compil all your lib
##

SRC =	  	minishell1.c	\
			setenv.c 	\
			env_tool.c 	\
			my_cd.c 	\
			error_handling.c 	\
			exec_cmd.c 	\
			minishell1_tool.c 	\
			space_and_tab.c 	\
			unsetenv.c 		\
			separator.c 	\

OBJ =	$(SRC:.c=.o)

NAME	=	42sh

CFLAGS	=	-g3

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -L./lib/my -lmy
	rm -f *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
