/*
** EPITECH PROJECT, 2018
** minishell2
** File description:
** space_and_tab
*/

#include "./include/my.h"

int str_ok(char *str)
{
    int nb_world = 0;
    for (int i = 0; str[i]; i++) {
        if (str[0] == ' ' || str[0] == '\t')
            return (1);
        if (str[i] == ' ' && str[i + 1] == ' ' || str[i] == ' ' &&
            str[i + 1] == '\t' || str[i] == ' ' && str[i + 1] == '\n'
            || str[i] == ' ' && str[i + 1] == ';')
            return (1);
    }
    return (0);
}

char *change_space_ok2(char *str, char *new_str, int t)
{
    int p = 0;
    new_str = malloc(sizeof(char) * (t + 2));
    for (int i = 0; str[i]; i++) {
        if (str[i] == '-') {
            new_str[p] = ' ';
            new_str[p + 1] = str[i];
            p = p + 2;
        }
        else if (str[i] != '\t' && str[i] != ' ' && str[i] != '\n') {
            new_str[p] = str[i];
            p++;
        }
    }
    new_str[p] = '\0';
    return (new_str);
}

char *change_space_ok(char *str, char *new_str)
{
    int t = 0;
    int q = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
            t++;
    }
    return (change_space_ok2(str, new_str, t));
}

char *change_space(char *str)
{
    char *new_str;
    if (str_ok(str) == 0)
        return (str);
    else
        return (change_space_ok(str, new_str));
}