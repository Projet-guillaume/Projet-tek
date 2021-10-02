/*
** EPITECH PROJECT, 2020
** sponge
** File description:
** menger.c
*/

#include "menger.h"

void menger(int size, int level, int x, int y)
{
    size = size / 3;
    printf("%03d %03d %03d\n", size, x + size, y + size);
    if (level > 1 && size > 0) {
        level = level - 1;
        menger(size, level, x, y);
        menger(size, level, x, y + size);
        menger(size, level, x, y + 2 * size);
        menger(size, level, x + size, y);
        menger(size, level, x + size, y + 2 * size);
        menger(size, level, x + 2 * size, y);
        menger(size, level, x + 2 * size, y + size);
        menger(size, level, x + 2 * size, y + 2 * size);
    }
}
