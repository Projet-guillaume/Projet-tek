/*
** EPITECH PROJECT, 2020
** pyramid
** File description:
** pyramid.c
*/

#include <stdio.h>
#include <stdlib.h>

int chemin_cours(int x, int y)
{
    if (x > y)
        return (y);
    return (x);
}

int recu_cours(int size, const int **map, int x, int y)
{
    if (x == size - 1) {
        return (chemin_cours(map[x][y], map[x][y + 1]));
    } else
        return (chemin_cours(recu_cours(size, map, x + 1, y),
        recu_cours(size, map, x + 1, y + 1)) + map[x][y]);
}

int pyramid_path(int size, const int **map)
{
    return (recu_cours(size, map, 0, 0));
}
