/*
** EPITECH PROJECT, 2019
** tab_mod.c
** File description:
** c
*/

#include "../../include/my.h"

char *tab_mod(int x, int o, char *rev)
{
    for (x; x > 0; x = x - 1) {
        if (rev[o] == '\0' || rev[o] == ' ') {
            rev = my_revstr(rev);
            return (rev);
        }
        rev[o] = ' ';
        o = o + 1;
    }
    rev = my_revstr(rev);
    return (rev);
}
