/*
** EPITECH PROJECT, 2019
** check_end_ia.c
** File description:
** c
*/

#include "../../include/my.h"

int check_end_ia(char **s, int i)
{
    if (check_end_game(s, i) == 0) {
        write(1, "I lost... snif... but I'll get you next time!!\n", 47);
        return (1);
    } else {
        write(1, "\nYour turn:\n", 12);
        return (0);
    }
}
