/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "include/my.h"

int main(int ac, char **av, char **env)
{
    if (ac != 1)
        return (84);
    minishell(av, env);
    return (0);
}
