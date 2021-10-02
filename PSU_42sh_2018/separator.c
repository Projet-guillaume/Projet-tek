/*
** EPITECH PROJECT, 2018
** minishell2
** File description:
** separator
*/

#include "./include/my.h"

int separator_ok(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == ';')
            return (1);
    }
    return (0);
}

void with_separator(char *str, env_t *env)
{
    char **sep = NULL;
    char **exe = NULL;
    char **path = NULL;
    char *space = NULL;

    sep = str_to_word_tab(str, ';');
    for (int i = 0; sep[i]; i++) {
        space = change_space(sep[i]);
        exe = str_to_word_tab(space, ' ');
        if (check_void(exe) == 0)
            parsing_exe(path, exe, env);
    }
}