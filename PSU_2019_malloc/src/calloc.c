/*
** EPITECH PROJECT, 2020
** calloc
** File description:
** c
*/

#include "../include/lib.h"

void *calloc(size_t nb, size_t size)
{
    int *ptr = malloc(size * nb);
    size_t s = 0;

    if (ptr == NULL)
        return (NULL);
    for (s; s < size; s++)
        ptr[s] = 0;
    return (ptr);
}
