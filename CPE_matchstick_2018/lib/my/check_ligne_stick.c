/*
** EPITECH PROJECT, 2019
** chekc_ligne_stick.c
** File description:
** c
*/

#include "../../include/my.h"

int check_ligne_stick(int x, char *s)
{
    int stick = 0;
    int o = 0;

    for (o; s[o] != '\0'; o = o + 1) {
        if (s[o] == '|')
            stick = stick + 1;
    }
    if (stick >= x)
        return (1);
    if (stick < x)
        return (0);
}
