/*
** EPITECH PROJECT, 2019
** win_or_lose
** File description:
** c
*/

#include "include/my.h"

int check_case(char *boats)
{
    int x = 0;

    for (x; boats[x] != '\0'; x = x + 1) {
        if (boats[x] == '2' || boats[x] == '3' || 
        boats[x] == '4' || boats[x] == '5')
            return (1);
    }
    x = 0;
    return (0);
}

int check_loose(char **boats)
{
    int y = 0;

    for (y; y < 8; y = y + 1) {
        if (check_case(boats[y]) == 1) {
            return (0);
        }
    }
    my_putstr("Enemy won\n");
    exit_loose
}

int check_nb_enemy(char c, int nb)
{
    if (c == 'x') {
        nb = nb + 1;
    }
    return (nb);
}

int check_win(char **boat)
{
    int y = 0;
    int x = 0;
    int nb = 0;

    for (y; y < 8; y = y + 1) {
        for (x; x < 8; x = x + 1) {
            nb = check_nb_enemy(boat[y][x], nb);
        }
        x = 0;
    }
    if (nb != 14) {
        return (0);
    }
    my_putstr("I won\n");
    exit_win
}
