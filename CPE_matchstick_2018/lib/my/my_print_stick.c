/*
** EPITECH PROJECT, 2019
** my_print_stick.c
** File description:
** c
*/

#include "../../include/my.h"

char *print_stick(int v, int *b, char *s)
{
    int i = 0;

    for (i; i != v; i++) {
        s[*b] = '|';
        *b = *b + 1;
    }
    return (s);
}
