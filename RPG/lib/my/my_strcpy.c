/*
** EPITECH PROJECT, 2018
** my_strcpy
** File description:
** c
*/

#include <stdlib.h>
#include "my.h"

char *my_strcpy(char const *src)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
