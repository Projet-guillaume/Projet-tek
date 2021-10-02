/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** h
*/

#include "../barre.h"

squarre size_cord(barre_t box, squarre cord, int x, int y);
barre_t search_square(char **s, barre_t box, int x, int y);
char **square_s(squarre cord, char **s);
int my_atoi(char *str);
void gest_error(char *map);
char **stock_map(char *map);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_putchar(char c);
char *my_revstr(char *str);
void putab(char **s);
char **display_square(char *map);
int size_colone(char *map);
int size_ligne(char *map);
