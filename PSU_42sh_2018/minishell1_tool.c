/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** main
*/

#include "./include/my.h"

int check_void(char **tab)
{
    if (tab)
        return (0);
    else
        return (1);
}

void my_exit(void)
{
    my_putstr("exit\n");
    exit(0);
}

int check_is_arg(char *str, char *compare)
{
    int i = 0;
    for (; i != my_strlen(compare); i++) {
        if (str[i] != compare[i]) {
            return (1);
        }
    }
    if (str[i] == '=') {
        return (0);
    }
    return (1);
}

void lunch(env_t *env)
{
    if (env->tab[1] == NULL)
        return;
    env->home = recup_home(env->tab);
    env->back = "1";
}