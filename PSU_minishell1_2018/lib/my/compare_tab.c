/*
** EPITECH PROJECT, 2019
** compare_tab.c
** File description:
** compare_tab
*/

#include "../../include/my.h"

int compare_tab(char **s, char *p)
{
    int i = 0;
    int o = 0;

    for (o; s[o] != NULL; o++);
    if (o >= 3)
        return (3);
    o = 0;
    while (s[i][o] != '\0') {
        if (s[i][o] == p[o])
            o = o + 1;
        else
            return (0);
    }
    if (s[i][o] == '\0' && p[o] == '\0')
        return (1);
    return (3);
}
