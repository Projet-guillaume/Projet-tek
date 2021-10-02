/*
** EPITECH PROJECT, 2019
** display.c
** File description:
** c
*/

#include <stdlib.h>
#include "include/my.h"

char **display_square(char *map)
{
    char **s = stock_map(map);
    int x = 0;
    int y = 0;
    int yy = size_colone(map);
    barre_t box;
    squarre cord;

    box.x = 0;
    box.y = 0;
    cord.x = 0;
    cord.y = 0;
    cord.sx = 0;
    cord.sy = 0;
    cord.size = 0;
    while (y != yy) {
        if (s[y][x] == 'o') {
            x++;
            box.x = x;
        } else if (s[y][x] == '\0') {
            y = y + 1;
            x = 0;
            box.y = y;
            box.x = x;
        } else {
            box.save_x = box.x;
            box.save_y = box.y;
            box = search_square(s, box, x, y);
            cord = size_cord(box, cord, x, y);
            if (box.x == box.save_x && box.y == box.save_y) {
                x++;
                box.x = x;
                box.y = y;
            }
            
        }
    }
    s = square_s(cord, s);
    return (s);
}
