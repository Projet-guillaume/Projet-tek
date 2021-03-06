/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "float.h"
#include "new.h"

typedef struct
{
    Class   base;
    float     f;
}   FloatClass;

static void Float_ctor(FloatClass *this, va_list *args)
{
    this->f = va_arg(*args, double);
}

static void Float_dtor(FloatClass *this)
{
    (void)this;
}

static char *Float_str(FloatClass *this)
{
    char *str;
    size_t size;

    if (this == NULL)
        return (NULL);
    size = snprintf(NULL, 0, "<Float (%f)>", this->f);
    if (size <= 0)
        return (NULL);
    str = malloc(sizeof(char) * (size + 1));
    snprintf(str, size + 1, "<Float (%f)>", this->f);
    return (str);
}

static FloatClass *Float_add(const FloatClass *this, const FloatClass *class)
{
    FloatClass *float_result;

    if (this == NULL || class == NULL)
        return (NULL);
    float_result = new(&this->base, this->f);
    if (float_result == NULL)
        return (NULL);
    float_result->f += class->f;
    return (float_result);
}

static FloatClass *Float_sub(const FloatClass *this, const FloatClass *class)
{
    FloatClass *float_result;

    if (this == NULL || class == NULL)
        return (NULL);
    float_result = new(&this->base, this->f);
    if (float_result == NULL)
        return (NULL);
    float_result->f -= class->f;
    return (float_result);
}

static FloatClass *Float_mul(const FloatClass *this, const FloatClass *class)
{
    FloatClass *float_result;

    if (this == NULL || class == NULL)
        return (NULL);
    float_result = new(&this->base, this->f);
    if (float_result == NULL)
        return (NULL);
    float_result->f *= class->f;
    return (float_result);
}

static FloatClass *Float_div(const FloatClass *this, const FloatClass *class)
{
    FloatClass *float_result;

    if (this == NULL || class == NULL || class->f <= 0.0)
        return (NULL);
    float_result = new(&this->base, this->f);
    if (float_result == NULL)
        return (NULL);
    float_result->f /= class->f;
    return (float_result);
}

static bool Float_eq(const FloatClass *this, const FloatClass *class)
{
    if (this == NULL || class == NULL)
        return (NULL);
    if (this->f == class->f)
        return (true);
    return (false);
}

static bool Float_lt(const FloatClass *this, const FloatClass *class)
{
    if (this == NULL || class == NULL)
        return (NULL);
    if (this->f < class->f)
        return (true);
    return (false);
}

static bool Float_gt(const FloatClass *this, const FloatClass *class)
{
    if (this == NULL || class == NULL)
        return (NULL);
    if (this->f > class->f)
        return (true);
    return (false);
}

static const FloatClass _description = {
    {
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&Float_ctor,
        .__dtor__ = (dtor_t)&Float_dtor,
        .__str__ = (to_string_t)&Float_str,
        .__add__ = (binary_operator_t)&Float_add,
        .__sub__ = (binary_operator_t)&Float_sub,
        .__mul__ = (binary_operator_t)&Float_mul,
        .__div__ = (binary_operator_t)&Float_div,
        .__eq__ = (binary_comparator_t)&Float_eq,
        .__gt__ = (binary_comparator_t)&Float_gt,
        .__lt__ = (binary_comparator_t)&Float_lt
    },
    .f = 0.0
};

const Class *Float = (const Class *)&_description;