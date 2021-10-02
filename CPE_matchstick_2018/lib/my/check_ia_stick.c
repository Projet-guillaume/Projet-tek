/*
** EPITECH PROJECT, 2019
** check_ia_stick.c
** File description:
** c
*/

#include "../../include/my.h"

int check_ia_stick(int k, int b, char *s)
{
    int o = 0;
    int stick = 0;

    while (s[o] != '\0') {
        if (s[o] == '|')
            stick = stick + 1;
        o = o + 1;
    }
    if (stick >= b && b <= k)
        return (200);
    else
        return (stick);
}
