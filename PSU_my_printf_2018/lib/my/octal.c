/*
** EPITECH PROJECT, 2018
** octal
** File description:
** convertiseur décimal en octal
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../../include/my.h"

char *allocation(int nb)
{
    int i = 0;
    char *s;

    while (nb / 8) {
        i = i + 1;
        nb = nb / 8;
    }
    s = malloc(sizeof(char) * (i + 1));
    s[i] = '\0';
    return (s);
}

char *octal(va_list list, int *i)
{
    int nb;
    int e;
    char *s = allocation(nb);
    int o = 0;

    nb = va_arg(list, int);
    e = nb;
    while (nb / 8) {
        e = nb % 8;
        nb = nb / 8;
        s[o] = e + 48;
        o++;
    }
    s[o] = nb + 48;
    s = my_revstr(s);
    my_putstr(s);
    return (s);
}
