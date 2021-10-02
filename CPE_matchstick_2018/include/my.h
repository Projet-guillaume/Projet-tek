/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** h
*/

#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

int check_end_game(char **s, int i);
int check_end_ia(char **s, int i);
int check_end_player(char **s, int i);
int check_carac(char *p);
int get_match_ligne(int i);
int get_match_stick(int i, int k, char *s);
char *tab_mod(int x, int o, char *rev);
char *new_s(int x, int y, char *s);
int check_ligne_stick(int x, char *s);
int randoma_ligne(int i, char **s);
int check_ligne_ia(char *s);
int randoma_stick(int k, char *s);
int check_ia_stick(int k, int b, char *s);

char **maloc_map(char *str, int i);
char *print_stick(int v, int *b, char *s);
char *print_space(int k, int *b, char *s);
void my_putab(char **s, int i);
int my_atoi(char *str);
char *my_revstr(char *str);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_putchar(char c);
