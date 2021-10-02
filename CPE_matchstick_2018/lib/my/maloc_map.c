/*
** EPITECH PROJECT, 2019
** maloc_map.c
** File description:
** c
*/

#include "../../include/my.h"

char **maloc_map(char *str, int i)
{
    char **s = malloc(sizeof(char*) * i + 1);
    int b = 0;
    int k = (i + i - 1) / 2;
    int v = 1;

    for (int o = 0; o < i; o++)
        s[o] = malloc(sizeof(char) * i + i + 1);
    for (int o = 0; o < i; o++) {
        s[o] = print_space(k, &b, s[o]);
        s[o] = print_stick(v, &b, s[o]);
        s[o] = print_space(k, &b, s[o]);
        s[o][b] = '\0';
        b = 0;
        k = k - 1;
        v = v + 2;
    }
    return (s);
}
