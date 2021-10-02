/*
** EPITECH PROJECT, 2019
** check_end_player.c
** File description:
** c
*/

#include "../../include/my.h"

int check_end_player(char **s, int i)
{
    if (check_end_game(s, i) == 0) {
        write(1, "You lost, too bad...\n", 21);
        return (2);
    } else {
        write(1, "\n", 1);
        return (0);
    }
}
