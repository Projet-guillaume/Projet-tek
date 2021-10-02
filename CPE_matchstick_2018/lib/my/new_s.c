/*
** EPITECH PROJECT, 2019
** new_s.c
** File description:
** c
*/

#include "../../include/my.h"

char *new_s(int x, int y, char *s)
{
    int o = 0;
    char *rev = my_revstr(s);

    while (rev[o] != '\0') {
        if (rev[o] == ' ')
            o++;
        else {
            rev = tab_mod(x, o, rev);
            return (rev);
        }
    }
}
