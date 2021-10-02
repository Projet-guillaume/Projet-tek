##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

SRC		=	src/block.c \
			src/calloc.c \
			src/instance.c \
			src/malloc.c	\
			src/reallocarray.c

CFLAGS	=	-Wall -Wextra -Wno-deprecated -g3 -fPIC -I include/

OBJS	=	$(SRC:.c=.o)

NAME	=	libmy_malloc.so

all:	$(NAME)

$(NAME): $(OBJS)
	gcc -fPIC -shared -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re