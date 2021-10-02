/*
** EPITECH PROJECT, 2019
** check_ligne_ia.c
** File description:
** c
*/

#include "../../include/my.h"

int check_ligne_ia(char *s)
{
    int o = 0;

    while (s[o] != '\0') {
        if (s[o] == '|')
            return (1);
        o = o + 1;
    }
    return (0);
}
