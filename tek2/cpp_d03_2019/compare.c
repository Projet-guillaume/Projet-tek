/*
** EPITECH PROJECT, 2020
** compare
** File description:
** compare.c
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    if (this && pos > strlen(this->str))
        return (-1);
    else
        return (this->str[pos]);
}

void clear(string_t *this)
{
    if (this)
        memset(this, 0, sizeof(string_t));
}

int size(const string_t *this)
{
    if (!this || this->str == NULL)
        return (-1);
    return (strlen(this->str));
}

int compare_s(const string_t *this, const string_t *str)
{
    return (strcmp(this->str, str->str));
}

int compare_c(const string_t *this, const char *str)
{
    return (strcmp(this->str, str));
}
