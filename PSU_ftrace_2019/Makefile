##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##


NAME		=	ftrace

CC			=	gcc

RM			=	rm -f

SRCS		=	./sources/main.c \
				./sources/execute.c \
				./sources/my_str_to_wordtab.c \
				./sources/ftrace_utils.c \
				./sources/syscalls.c \
				./sources/signals.c \
				./sources/elf.c \
				./sources/utils.c \
				./sources/list.c

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-I ./includes/
CFLAGS		+=	-Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -g3 -lelf -o $(NAME) $(LDFLAGS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
