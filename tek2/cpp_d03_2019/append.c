/*
** EPITECH PROJECT, 2020
** append
** File description:
** append.c
*/

#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    if (str)
        this->str = strdup(str->str);
    else
        this->str = NULL;
}

void assign_c(string_t *this, const char *s)
{
    if (s)
        this->str = strdup(s);
    else
        this->str = NULL;
}

void append_s(string_t *this, const string_t *ap)
{
    if (ap)
        strcat(this->str, ap->str);
    else
        this->str = NULL;
}

void append_c(string_t *this, const char *ap)
{
    if (ap)
        strcat(this->str, ap);
    else
        this->str = NULL;
}
