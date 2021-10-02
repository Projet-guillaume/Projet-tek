/*
** EPITECH PROJECT, 2019
** my_putab_env.c
** File description:
** my_putab_env
*/

#include "../../include/my.h"

void my_putab_env(char **env)
{
    for (int i = 0; env[i] != NULL; i = i + 1) {
        my_putstr(env[i]);
        my_putchar('\n');
    }
}
