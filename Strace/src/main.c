/*
** EPITECH PROJECT, 2020
** main
** File description:
** c
*/

#include "../include/my.h"

int gest_error(int ac, char *str)
{
    if (ac < 3)
        return (84);
    if (strcmp(str, "--help") == 0)
        return (write(2, USAGE, strlen(USAGE)));
    return 0;
}

int main(int ac, char **av)
{
    if (gest_error(ac, av[1]) == 84)
        return 84;
    for (int i = 0; av[i] != NULL; i++) {
        if (strcmp(av[i], "-p") == 0 && av[i + 1] == NULL)
            return 84;
    } return 0;
}
