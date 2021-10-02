/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 04
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x;
}   IntClass;

static void Int_ctor(IntClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Int_dtor(IntClass *this)
{
    (void)this;
}

static char *Int_str(IntClass *this)
{
    char *str;
    size_t size;

    if (this == NULL)
        return (NULL);
    size = snprintf(NULL, 0, "<Int (%d)>", this->x);
    if (size <= 0)
        return (NULL);
    str = malloc(sizeof(char) * (size + 1));
    snprintf(str, size + 1, "<Int (%d)>", this->x);
    return (str);
}

static IntClass *Int_add(const IntClass *this, const IntClass *class)
{
    IntClass *int_result;

    if (this == NULL || class == NULL)
        return (NULL);
    int_result = new(&this->base, this->x);
    if (int_result == NULL)
        return (NULL);
    int_result->x += class->x;
    return (int_result);
}

static IntClass *Int_sub(const IntClass *this, const IntClass *class)
{
    IntClass *int_result;

    if (this == NULL || class == NULL)
        return (NULL);
    int_result = new(&this->base, this->x);
    if (int_result == NULL)
        return (NULL);
    int_result->x -= class->x;
    return (int_result);
}

static IntClass *Int_mul(const IntClass *this, const IntClass *class)
{
    IntClass *int_result;

    if (this == NULL || class == NULL)
        return (NULL);
    int_result = new(&this->base, this->x);
    if (int_result == NULL)
        return (NULL);
    int_result->x *= class->x;
    return (int_result);
}

static IntClass *Int_div(const IntClass *this, const IntClass *class)
{
    IntClass *int_result;

    if (this == NULL || class == NULL || class->x <= 0)
        return (NULL);
    int_result = new(&this->base, this->x);
    if (int_result == NULL)
        return (NULL);
    int_result->x /= class->x;
    return (int_result);
}

static bool Int_eq(const IntClass *this, const IntClass *class)
{
    if (this == NULL || class == NULL)
        return (NULL);
    if (this->x == class->x)
        return (true);
    return (false);
}

static bool Int_lt(const IntClass *this, const IntClass *class)
{
    if (this == NULL || class == NULL)
        return (NULL);
    if (this->x < class->x)
        return (true);
    return (false);
}

static bool Int_gt(const IntClass *this, const IntClass *class)
{
    if (this == NULL || class == NULL)
        return (NULL);
    if (this->x > class->x)
        return (true);
    return (false);
}

static const IntClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(IntClass),
        .__name__ = "Int",
        .__ctor__ = (ctor_t)&Int_ctor,
        .__dtor__ = (dtor_t)&Int_dtor,
        .__str__ = (to_string_t)&Int_str,
        .__add__ = (binary_operator_t)&Int_add,
        .__sub__ = (binary_operator_t)&Int_sub,
        .__mul__ = (binary_operator_t)&Int_mul,
        .__div__ = (binary_operator_t)&Int_div,
        .__eq__ = (binary_comparator_t)&Int_eq,
        .__gt__ = (binary_comparator_t)&Int_gt,
        .__lt__ = (binary_comparator_t)&Int_lt
    },
    .x = 0,
};

const Class *Int = (const Class *)&_description;