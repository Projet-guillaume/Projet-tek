/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** c
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    int e = 0;
    char *new = malloc(sizeof(char) * (i + 2));

    while (e != my_strlen(str)) {
        new[e] = str[i];
        i = i - 1;
        e = e + 1;
    }
    new[e] = '\0';
    return (new);
}
