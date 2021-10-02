/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** unsetenv
*/

#include "./include/my.h"

char **del_env(char **tab, char *exe)
{
    char **new_env = my_tabcpy(tab, new_env);
    tab = malloc(sizeof(char *) * (size_tab(new_env) + 1));
    int i = 0;
    for (int j = 0; new_env[j]; j++) {
        if (check_is_arg(new_env[j], exe) == 0);
        else {
            tab[i] = malloc(sizeof(char) * (my_strlen(new_env[j]) + 1));
            tab[i] = my_strcpy(tab[i], new_env[j]);
            free(new_env[j]);
            i++;
        }
    }
    tab[i] = NULL;
    free(new_env);
    return (tab);
}

void my_unsetenv(char **exe, env_t *env)
{
    if (exe[1] == NULL)
        my_putstr("unsetenv: Too few arguments.\n");
    else
        for (int i = 1; exe[i]; i++)
            env->tab = del_env(env->tab, exe[i]);
}