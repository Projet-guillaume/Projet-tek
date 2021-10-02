##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRCS	=	src/strlen.asm	\
			src/strchr.asm	\
			src/strcmp.asm	\
			src/strncmp.asm	\
			src/memcpy.asm	\
			src/memmove.asm	\
			src/memset.asm	\
			src/rindex.asm	\
			src/strcasecmp.asm	\
			src/strcspn.asm	\
			src/strpbrk.asm	\
			src/strstr.asm

OBJS	=	$(SRCS:.asm=.o)

LD		=	ld

LDFLAGS	=	-shared

ASM		=	nasm

ASFLAGS	=	-f elf64

RM		=	rm -f

NAME	=	libasm.so

all: $(NAME)

%.o:	%.asm
	$(ASM) $(ASFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all