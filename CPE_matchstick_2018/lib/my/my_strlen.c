/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** c
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++);
    return (i);
}
