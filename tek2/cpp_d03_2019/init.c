/*
** EPITECH PROJECT, 2020
** main
** File description:
** main.c
*/

#include "string.h"

void string_init(string_t *this, const char *s)
{
    if (s)
        this->str = strdup(s);
    else
        this->str = NULL;
}

void string_destroy(string_t *this)
{
    if (this->str)
        free(this->str);
    memset(this, 0, sizeof(string_t));
}
