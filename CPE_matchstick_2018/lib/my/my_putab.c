/*
** EPITECH PROJECT, 2019
** my_putab.c
** File description:
** c
*/

#include "../../include/my.h"
#include <unistd.h>

void my_putab(char **s, int i)
{
    for (int b = 0; b < i + i + 1; b++)
        write(1, "*", 1);
    write(1, "\n", 1);
    for (int d = 0; d < i; d++) {
        write(1, "*", 1);
        write(1, s[d], my_strlen(s[d]));
        write(1, "*\n", 2);
    }
    for (int b = 0; b < i + i + 1; b++)
        write(1, "*", 1);
    write(1, "\n", 1);
}
