/*
** EPITECH PROJECT, 2019
** check_end_game.c
** File description:
** c
*/

#include "../../include/my.h"

int check_end_game(char **s, int i)
{
    int o = 0;
    int k = i + i;
    int b = 0;

    while (o < i) {
        while (b < k) {
            if (s[o][b] == '|')
                return (1);
            b = b + 1;
        }
        b = 0;
        o = o + 1;
    }
    return (0);
}
