/*
** EPITECH PROJECT, 2020
** char.c
** File description:
** Rush01
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class   base;
    char c;
}CharClass;

static void Char_ctor(CharClass *this, va_list *args)
{
    this->c = va_arg(*args, int);
}

static void Char_dtor(CharClass *this)
{
    (void)this;
}

static char *Char_str(CharClass *this)
{
    char *str;
    size_t size;

    if (this == NULL)
        return (NULL);
    size = snprintf(NULL, 0, "<Char (%c)>", this->c);
    if (size <= 0)
        return (NULL);
    str = malloc(sizeof(char) * (size + 1));
    snprintf(str, size + 1, "<Char (%c)>", this->c);
    return (str);
}

static CharClass *Char_add(const CharClass *this, const CharClass *class)
{
    CharClass *point_result;

    if (this == NULL || class == NULL)
        return (NULL);
    point_result = new(&this->base, this->c);
    if (point_result == NULL)
        return (NULL);
    point_result->c += class->c;
    return (point_result);
}

static CharClass *Char_sub(const CharClass *this, const CharClass *class)
{
    CharClass *point_result;

    if (this == NULL || class == NULL)
        return (NULL);
    point_result = new(&this->base, this->c);
    if (point_result == NULL)
        return (NULL);
    point_result->c -= class->c;
    return (point_result);
}

static CharClass *Char_mul(const CharClass *this, const CharClass *class)
{
    CharClass *point_result;

    if (this == NULL || class == NULL)
        return (NULL);
    point_result = new(&this->base, this->c);
    if (point_result == NULL)
        return (NULL);
    point_result->c *= class->c;
    return (point_result);
}

static CharClass *Char_div(const CharClass *this, const CharClass *class)
{
    CharClass *point_result;

    if (this == NULL || class == NULL || class->c <= 0)
        return (NULL);
    point_result = new(&this->base, this->c);
    if (point_result == NULL)
        return (NULL);
    point_result->c /= class->c;
    return (point_result);
}

static bool Char_eq(const CharClass *this, const CharClass *class)
{
    if (this == NULL || class == NULL)
        return (NULL);
    if (this->c == class->c)
        return (true);
    return (false);
}

static bool Char_lt(const CharClass *this, const CharClass *class)
{
    if (this == NULL || class == NULL)
        return (NULL);
    if (this->c < class->c)
        return (true);
    return (false);
}

static bool Char_gt(const CharClass *this, const CharClass *class)
{
    if (this == NULL || class == NULL)
        return (NULL);
    if (this->c > class->c)
        return (true);
    return (false);
}

static const CharClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&Char_ctor,
        .__dtor__ = (dtor_t)&Char_dtor,
        .__str__ = (to_string_t)&Char_str,
        .__add__ = (binary_operator_t)&Char_add,
        .__sub__ = (binary_operator_t)&Char_sub,
        .__mul__ = (binary_operator_t)&Char_mul,
        .__div__ = (binary_operator_t)&Char_div,
        .__eq__ = (binary_comparator_t)&Char_eq,
        .__gt__ = (binary_comparator_t)&Char_gt,
        .__lt__ = (binary_comparator_t)&Char_lt
    },
    .c = 0,
};

const Class *Char = (const Class *)&_description;