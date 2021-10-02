/*
** EPITECH PROJECT, 2018
** printf
** File description:
** display string
*/

#include <stdarg.h>
#include "../../include/my.h"
#include <stdlib.h>

char *flags2(char *a, int *i, va_list list)
{
    char *s;

    switch (a[*i]) {
    case 'X':
        my_putstr(s = hexa_flags_maj(list, i));
        *i = *i + 1;
        break;
    case 'b':
        s = binaire(list, i);
        *i = *i + 1;
        break;
    case 'o':
        s = octal(list, i);
        *i = *i + 1;
        break;
    case 'x':
        my_putstr(s = hexa_flags(list, i));
        *i = *i + 1;
        break;
    default:
        break;
    }
    return (s);
}

void flags(char *a, int *i, va_list list)
{
    switch (a[*i]) {
    case 'd':
        my_put_nbr(va_arg(list, int));
        *i = *i + 1;
        break;
    case 'i':
        my_put_nbr(va_arg(list, int));
        *i = * i + 1;
        break;
    case 'c':
        my_putchar(va_arg(list, int));
        *i = *i + 1;
        break;
    case 's':
        my_putstr(va_arg(list, char *));
        *i = *i + 1;
        break;
    case 'm':
        my_putstr("Success");
        *i = *i + 1;
        break;
    default:
        break;
    }
}

int my_printf(char *a, ...)
{
    va_list list;
    int i = 0;
    char *s;

    va_start(list, a);
    while (a[i] != '\0') {
        if (a[i] == '%') {
            i++;
            flags(a, &i, list);
            s = flags2(a, &i, list);
        } else
            my_putchar(a[i++]);
    }
    va_end(list);
}
