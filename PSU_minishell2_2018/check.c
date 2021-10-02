/*
** EPITECH PROJECT, 2019
** check ;
** File description:
** c
*/

#include "include/gnl.h"
#include "include/my.h"

int check(char *s)
{
    int o = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ';')
            o = o + 1;
    }
    return (o + 1);
}
