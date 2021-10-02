/*
** EPITECH PROJECT, 2019
** my_print_space.c
** File description:
** c
*/

#include "../../include/my.h"

char *print_space(int k, int *b, char *s)
{
    int i = 0;

    for (i; i != k; i++) {
        s[*b] = ' ';
        *b = *b + 1;
    }
    return (s);
}
