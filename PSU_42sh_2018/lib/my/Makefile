##
## EPITECH PROJECT, 2018
## make
## File description:
## file
##

all:	libmy.a

libmy.a:
	@gcc -c *.c
	@ar rc libmy.a *.o
	@cp libmy.a ../
	@rm -f *.o
	@rm -f *.c~

clean:
	@rm -f *.o
	@rm -f *.c~

fclean:	clean
	@rm -f libmy.a
	@rm -f ../libmy.a
	@rm -f ../../include/my.h

re:	fclean	all


auteur:
	echo $(USER) > auteur

.PHONY: all libmy.a	clean	fclean	re
