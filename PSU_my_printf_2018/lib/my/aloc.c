/*
** EPITECH PROJECT, 2018
** allocation
** File description:
** allocation 
*/

#include "../../include/my.h"
#include <stdlib.h>

char *aloc(int nb)
{
    int i = 0;
    char *s;

    while (nb / 16) {
        i = i + 1;
        nb = nb / 16;
    }
    s = malloc(sizeof(char) * (i + 1));
    s[i] = '\0';
    return (s);
}
