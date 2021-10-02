/*
** EPITECH PROJECT, 2020
** main
** File description:
** main.c
*/

#include "menger.h"

int main(int ac, char**av)
{
    if (ac == 3) {
        menger(atoi(av[1]), atoi(av[2]), 0, 0);
        return 0;
    } else
        return 84;
}
