/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** my_strcompar
*/

#include "../../include/my.h"

int strcompar(char *str, char *compar)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] != compar[i])
            return (1);
    }
    return (0);
}

int my_strcompar(char *str, char *compar)
{
    if (my_strlen(str) == my_strlen(compar)) {
        return (strcompar(str, compar));
    }
    return (1);
}