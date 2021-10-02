/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** main
*/

#include "../../include/my.h"

void my_puttab(char **tab)
{
    for (int i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}