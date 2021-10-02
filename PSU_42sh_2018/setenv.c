/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** setenv
*/

#include "./include/my.h"

char **realloc_tab_one(char **tab, char *new_str)
{
    char **new_env = my_tabcpy(tab, new_env);
    tab = malloc(sizeof(char *) * (size_tab(tab) + 2));
    int i = 0;
    for (; new_env[i]; i++) {
        tab[i] = malloc(sizeof(char) * (my_strlen(new_env[i]) + 1));
        tab[i] = my_strcpy(tab[i], new_env[i]);
        free(new_env[i]);
    }
    tab[i] = malloc(sizeof(char) * (my_strlen(new_str) + 1));
    tab[i] = my_strcat(my_strcpy(tab[i], new_str), "=");
    tab[i + 1] = NULL;
    free(new_env);
    return (tab);
}

void setenv_action(char **exe, env_t *env, int i, int really)
{
    if (really == 1 && exe[2] == NULL) {
        env->tab[i][my_strlen(exe[1]) + 1] = '\0';
    }
    if (really == 1 && exe[2] != NULL) {
        env->tab[i][my_strlen(exe[1]) + 1] = '\0';
        env->tab[i] = my_strcat(env->tab[i], exe[2]);
    }
    if (really == 0 && exe[2] == NULL) {
        env->tab = realloc_tab_one(env->tab, exe[1]);
    }
    if (really == 0 && exe[2] != NULL) {
        env->tab = realloc_tab_one(env->tab, exe[1]);
        env->tab[size_tab(env->tab) - 1] =
        my_strcat(env->tab[size_tab(env->tab) - 1], exe[2]);
    }

}

void setenv_check(char **exe, env_t *env)
{
    int i = 0;
    int really = 0;
    int size = my_strlen(exe[1]) - 1;
    while (env->tab[i]) {
        if (check_her(env->tab[i], exe[1], size) == 0) {
            really = 1;
            break;
        }
        i++;
    }
    setenv_action(exe, env, i, really);
}

int check_name(char *name)
{
    for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] == '=')
            return (1);
    }
    return (0);
}

void my_setenv(char **exe, env_t *env)
{
    if (size_tab(exe) >= 4) {
        my_putstr("setenv: Too many arguments.\n");
        return;
    }
    if (exe[1] == NULL)
        my_puttab(env->tab);
    if (exe[1] != NULL) {
        if (check_name(exe[1]) == 0)
            setenv_check(exe, env);
        else {
            my_putstr("setenv: Variable name ");
            my_putstr("must contain alphanumeric characters.\n");
        }
    }
}