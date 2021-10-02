/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** revision  string
*/

#include "../../include/my.h"

char *my_strcat(char *str_first, char const *str_scnd)
{
    int p = 0;
    int q = 0;
    int i = 0;
    char *strrtn = malloc(sizeof(char) *
    (my_strlen(str_first) + my_strlen(str_scnd) + 1));

    while (str_first[i] != '\0') {
        strrtn[p] = str_first[i];
        p++;
        i++;
    }
    while (str_scnd[q] != '\0') {
        strrtn[p] = str_scnd[q];
        q++;
        p++;
    }
    strrtn[p] = '\0';
    return (strrtn);
}