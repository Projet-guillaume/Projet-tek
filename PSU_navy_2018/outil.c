/*
** EPITECH PROJECT, 2019
** outil
** File description:
** c
*/

#include "include/my.h"

int display_void(int i)
{
    static int u;
    static int e;

    if (u == 0) {
        u = 1;
        e = i;
    }
    else
        u = 0;
    return (e);
}

char **start_map(char *str)
{
    char **map;

    map = map_player_one(str);
    return (map);
}