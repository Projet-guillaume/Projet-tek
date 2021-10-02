/*
** EPITECH PROJECT, 2019
** check_boats.c
** File description:
** c
*/

#include "include/struct.h"
#include "include/my.h"

int check_direct_boats_ligne(char **boats, int y, int x, char p)
{
    char k = '0';

    while (boats[y][x] == p) {
        x = x + 1;
        k = k + 1;
        if (y > 7)
            break;
    }
    if (k == p)
        return (3);
    return (0);
}

int check_direct_boats(char **boats, int y, int x, char p)
{
    char k = '0';

    while (boats[y][x] == p) {
        y = y + 1;
        k = k + 1;
        if (y > 7)
            break;
    }
    if (k == p)
        return (4);
    return (0);
}

int check_mini_colision(char **boats, int y, int x)
{
    static int e;
    char *p = "2345";

    if (boats[y][x] == p[e]) {
        if (check_direct_boats(boats, y, x, p[e]) == 4)
            e = e + 1;
        else if (check_direct_boats_ligne(boats, y, x, p[e]) == 3)
            e = e + 1;
        else
            return (84);
    }
    return (0);
}

int check_colision(char **boats, int y)
{
    int x = 0;

    for (x = 0; boats[y][x] != '\0'; x = x + 1) {
        if (check_mini_colision(boats, y, x) == 84)
            return (84);
    }
    return (0);
}

int check_boats(char *map)
{
    char **boats = map_player_one(map);
    int y = 0;
    int k = 0;

    for (y = 0; y < 8; y = y + 1) {
        if (check_colision(boats, y) == 84)
            return (84);
    }
    for (y = 0; y < 8; y = y + 1) {
        for (int x = 0; x < 8; x = x + 1)
            increm(boats[y][x], &k);
        if (y == 7 && k != 14)
            return (84);
    }
    return (0);
}
