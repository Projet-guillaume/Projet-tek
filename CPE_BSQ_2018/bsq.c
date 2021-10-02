/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** bsq
*/

#include <stdlib.h>
#include "include/my.h"

int square_colone(char **s, int y, barre_t box)
{
    int y_b = y;

    while (y_b != box.y + 1) {
        if (s[y_b][box.x + 1] == 'o')
            return (box.x);
        y_b++;
    }
    box.x = box.x + 1;
    return (box.x);
}

int square_ligne(char **s, int x, barre_t box)
{
    int x_b = x;

    while (x_b != box.x + 1) {
        if (s[box.y + 1][x_b] == 'o') {
            return (box.y);
        }
        x_b++;
    }
    box.y = box.y + 1;
    return (box.y);
}

barre_t search_square(char **s, barre_t box, int x, int y)
{
    if (s[y][box.x + 1] != '\0' && s[box.y + 1] != NULL) {
        if (s[y][box.x + 1] != '\0')
            box.x = square_colone(s, y, box);
        if (s[box.y + 1] != NULL)
            box.y = square_ligne(s, x, box);
        if (box.x == box.save_x && box.y != box.save_y) {
            box.x = box.save_x;
            box.y = box.save_y;
        } if (box.y == box.save_y && box.x != box.save_x) {
            box.x = box.save_x;
            box.y = box.save_y;
        }
    }
    return (box);
}

squarre size_cord(barre_t box, squarre cord, int x, int y)
{
    int o = (box.x - x) + 1;
    int u = (box.y - y) + 1;

    if (o == u) {
        if (o > cord.size) {
            cord.x = x;
            cord.y = y;
            cord.sx = box.x;
            cord.sy = box.y;
            cord.size = o;
        }
    }
    return (cord);
}

char **square_s(squarre cord, char **s)
{
    int i = cord.y;
    int o = cord.x;

    while (i != cord.sy + 1) {
        while (o != cord.sx + 1) {
            s[i][o] = 'x';
            o++;
        }
        o = cord.x;
        i++;
    }
    putab(s);
    return (s);
}
