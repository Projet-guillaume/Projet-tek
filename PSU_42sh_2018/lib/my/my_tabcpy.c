/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** main
*/

#include "../../include/my.h"

int size_tab(char **env)
{
    int i = 0;
    for (; env[i]; i++);
    return (i);
}

char **my_tabcpy(char **tab, char **new_tab)
{
    new_tab = malloc(sizeof(char *) * (size_tab(tab) + 1));
    int i = 0;
    for (; tab[i]; i++) {
        new_tab[i] = malloc(sizeof(char) * (my_strlen(tab[i]) + 1));
        new_tab[i] = my_strcpy(new_tab[i], tab[i]);
    }
    new_tab[i] = NULL;
    return (new_tab);
}