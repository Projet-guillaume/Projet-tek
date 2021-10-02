/*
** EPITECH PROJECT, 2018
** hexadécimal
** File description:
** convertisseur hexadécimal majuscule
*/

#include "../../include/my.h"
#include <stdarg.h>

char *switches(int nb, char *s, int o)
{
    switch (nb) {
    case 10:
        s[o] = 'A';
        break;
    case 11:
        s[o] = 'B';
        break;
    case 12:
        s[o] = 'C';
        break;
    case 13:
        s[o] = 'D';
        break;
    case 14:
        s[o] = 'E';
        break;
    case 15:
        s[o] = 'F';
        break;
    default:
        break;
    }
    return (s);
}

char *hexa_flags_maj(va_list list, int *i)
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
            s = switches(e, s, o);
        else
            s[o] = e + 48;
    }
    if (nb >= 10 && nb <= 15)
        s = switches(nb, s, o);
    else if (nb >= 1 && nb <= 9)
        s[o] = nb + 48;
    s = my_revstr(s);
    return (s);
}
