/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** h
*/

#include <stdarg.h>

char *octal(va_list list, int *i);
char *binaire(va_list list, int *i);
char *hexa_flags_maj(va_list list, int *i);
char *my_strcapitalize(char *str);
char *aloc(int nb);
char *hexa_flags(va_list list, int *i);
int my_strlen(char *s);
char *my_revstr(char *str);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);
