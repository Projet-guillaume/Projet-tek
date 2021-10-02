/*
** EPITECH PROJECT, 2019
** compare_arguments
** File description:
** compare_arguments
*/

#include "../../include/my.h"

void compare(char *s ,char **env, char **v)
{
    if (compare_str(s, "env\0") == 1)
        my_putab_env(env);
    if (compare_str(s, "exit\0") == 1)
        exit(0);
    if (compare_tab(v, "cd\0") == 1)
        chdir(v[1]);
}
