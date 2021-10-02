/*
** EPITECH PROJECT, 2018
** hexadécimal
** File description:
** convertiseur hexadécimal miniscule
*/

#include "../../include/my.h"
#include <stdarg.h>

char *switche(int nb, char *s, int o)
{
    switch (nb) {
    case 10:  s[o] = 'a'; break;
    case 11:  s[o] = 'b'; break;
    case 12   s[o] = 'c'; break;
    case 13:  s[o] = 'd'; break;
    case 14:  s[o] = 'e'; break;
    case 15:  s[o] = 'f'; break;
    default:
        break;
    }
    return (s);
}

char *hexa_flags(va_list list, int *i)
{
    int nb = va_arg(list, int);
    int e;
    char *s = aloc(nb);
    int o = 0;

    e = nb;
    for (o; nb / 16; o++) {
        e = nb % 16;
        nb = nb / 16;
        if (e >= 10 && e <= 15)
            s = switche(e, s, o);
        else
            s[o] = e + 48;
    }
    if (nb >= 10 && nb <= 15)
        s = switche(nb, s, o);
    else if (nb >= 1 && nb <= 9)
        s[o] = nb + 48;
    s = my_revstr(s);
    return (s);
}
