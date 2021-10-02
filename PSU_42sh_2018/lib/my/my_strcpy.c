/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** str_to_word_tab
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0' && src[i] != '\n'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}