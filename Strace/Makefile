##
## EPITECH PROJECT, 2020
## mnobj
## File description:
## nmobj
##

NAMESTRACE	=	strace

SRCSSTRACE	=	./src/main.c\

CFLAGS	+=	-W -Wall -g

CC	=	gcc

RM	=	rm -f

OBJSSTRACE	=	$(SRCSSTRACE:.c=.o)

%.o: %.c
		@printf "[\033[0;32mcompiled\033[0m] % 29s\n" $< | tr ' ' '.'
		@$(CC) -c -o $@ $< $(CFLAGS) $(LDFLAGS)

all:		strace

$(NAMESTRACE):	$(OBJSSTRACE)
		@$(CC) $(OBJSSTRACE) -o $(NAMESTRACE) $(LDFLAGS)
		@printf "[\033[0;36mbuilt\033[0m] % 32s\n" $(NAMESTRACE) | tr ' ' '.'

clean:
		@$(RM) $(OBJSSTRACE)
		@printf "[\033[0;31mdeleted\033[0m] % 30s\n" $(OBJSSTRACE) | tr ' ' '.'

fclean:		clean
		@$(RM) $(NAMESTRACE)
		@printf "[\033[0;31mdeleted\033[0m] % 30s\n" $(NAMESTRACE) | tr ' ' '.'

re:		fclean all