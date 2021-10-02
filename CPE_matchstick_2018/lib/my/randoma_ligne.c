/*
** EPITECH PROJECT, 2019
** randoma_ligne.c
** File description:
** c
*/

#include "../../include/my.h"

int randoma_ligne(int i, char **s)
{
    int b = 0;

    srandom(time(NULL));
    b = random()%i+1;
    while (check_ligne_ia(s[b - 1]) != 1) {
        b = b + 1;
        if (b > i)
            b = 1;
    }
    return (b);
}
