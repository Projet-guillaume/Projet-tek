/*
** EPITECH PROJECT, 2019
** compare_str.c
** File description:
** compare_str
*/

#include "../../include/my.h"

int compare_str(char *s, char *p)
{
    int o = 0;

    while (s[o] != '\0') {
        if (s[o] == p[o])
            o = o + 1;
        else
            return (0);
    }
    if (s[o] == '\0' && p[o] == '\0')
        return (1);
    return (0);
}
