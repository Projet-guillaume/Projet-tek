/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** main
*/

#include "./include/my.h"

int check_her(char *str, char *her, int size)
{
    int i = 0;
    for (; i != size; i++) {
        if (str[i] != her[i]) {
            return (1);
        }
    }
    if (str[i + 1] == '=') {
        return (0);
    }
    return (1);
}