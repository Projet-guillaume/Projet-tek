/*
** EPITECH PROJECT, 2020
** free
** File description:
** c
*/

#include "../include/my.h"

void free_tab(char **tab)
{
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}
