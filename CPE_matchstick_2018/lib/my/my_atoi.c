/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** c
*/

#include "../../include/my.h"

int my_atoi(char *str)
{
    char *rev = my_revstr(str);
    int res = 0;
    int i = 0;
    int size = my_strlen(str);
    int mult = 1;

    while (rev[i] != '-' && rev[i] != '\0') {
        res = res + (rev[i] - 48) * mult;
        mult = mult * 10;
        i = i + 1;
    }
    if (rev[i] == '-')
        res = res * (-1);
    return (res);
}
