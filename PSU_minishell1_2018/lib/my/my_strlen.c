/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** my_strlen
*/

#include "../../include/my.h"

int my_strlen(char *s)
{
    int i = 0;

    for (i; s[i] != '\0'; i = i + 1);
    return (i);
}