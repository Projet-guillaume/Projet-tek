##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## by Ugo MOULIN
##

CC	= g++

RM	= rm -f

NAME	= MyGkrellm

SRCS	= 	src/main.cpp					\
			src/module.cpp					\
			src/ncurses/IMonitorDisplay.cpp	\
			src/ncurses/NCurses.cpp			\
			src/ncurses/DisplayDisk.cpp		\
			src/disk.cpp 					\
			src/ncurses/DateTimeDisplay.cpp	\
			src/DateTimeModule.cpp			\
			src/ncurses/Display_Title.cpp	\
			src/ncurses/DisplayCPU.cpp		\
			src/CPUModule.cpp				\
			src/ncurses/DisplayNetwork.cpp	\
			src/NetworkModule.cpp			\
			src/ncurses/DisplayRAM.cpp		\
			src/RamModule.cpp				\
			src/ncurses/KernelDisplay.cpp	\
			src/KernelModule.cpp			\
			src/ncurses/UserDisplay.cpp		\
			src/NameModule.cpp				\
			src/graph/CPU.cpp	\
			src/graph/RAM.cpp	\
			src/graph/User.cpp	\
			src/graph/CreateWindow.cpp	\
			src/graph/Module.cpp	\
			src/graph/Date.cpp	\
			src/graph/Kernel.cpp	\
			src/graph/starter.cpp	\
			src/graph/Network.cpp	\


CXXFLAGS	=  -lsfml-window -lsfml-graphics -lsfml-system -I include/ -lncurses

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CXXFLAGS)

clean:
	$(RM) $(OBJS) *~ *# vgcore.*

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
