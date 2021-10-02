/*
** EPITECH PROJECT, 2018
** binaire
** File description:
** convertire un nombre décimal en binaire
*/

#include "../../include/my.h"
#include <stdarg.h>
#include <stdlib.h>

char *alloc(int nb)
{
    int i = 0;
    char *s;

    while (nb / 2) {
        i = i + 1;
        nb = nb / 2;
    }
    s = malloc(sizeof(char) * (i + 1));
    s[i] = '\0';
    return (s);
}

char *switcher(int nb, char *s, int o)
{
    switch (nb) {
    case 0:
        s[o] = '0';
        break;
    case 1:
        s[o] = '1';
        break;
    default:
        break;
    }
    return (s);
}

char *binaire(va_list list, int *i)
{
    int nb;
    int e;
    char *s = aloc(nb);
    int o = 0;

    nb = va_arg(list, int);
    e = nb;
    while (nb / 2) {
        e = nb % 2;
        nb = nb / 2;
        if (e == 0 || e == 1)
            s = switcher(e, s, o);
        o++;
    }
    s[o] = nb + 48; 
    s = my_revstr(s);
    my_putstr(s);
    return (s);
}
