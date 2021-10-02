/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    (void)this;
}

static char *Point_str(PointClass *this)
{
    char *str;
    size_t size;

    if (this == NULL)
        return (NULL);
    size = snprintf(NULL, 0, "<Point (%d, %d)>", this->x, this->y);
    if (size <= 0)
        return (NULL);
    str = malloc(sizeof(char) * (size + 1));
    snprintf(str, size + 1, "<Point (%d, %d)>", this->x, this->y);
    return (str);
}

static PointClass *Point_add(const PointClass *this, const PointClass *class)
{
    PointClass *point_result;

    if (this == NULL || class == NULL)
        return (NULL);
    point_result = new(&this->base, this->x, this->y);
    if (point_result == NULL)
        return (NULL);
    point_result->x += class->x;
    point_result->y += class->y;
    return (point_result);
}

static PointClass *Point_sub(const PointClass *this, const PointClass *class)
{
    PointClass *point_result;

    if (this == NULL || class == NULL)
        return (NULL);
    point_result = new(&this->base, this->x, this->y);
    if (point_result == NULL)
        return (NULL);
    point_result->x -= class->x;
    point_result->y -= class->y;
    return (point_result);
}

static PointClass *Point_mul(const PointClass *this, const PointClass *class)
{
    PointClass *point_result;

    if (this == NULL || class == NULL)
        return (NULL);
    point_result = new(&this->base, this->x, this->y);
    if (point_result == NULL)
        return (NULL);
    point_result->x *= class->x;
    point_result->y *= class->y;
    return (point_result);
}

static PointClass *Point_div(const PointClass *this, const PointClass *class)
{
    PointClass *point_result;

    if (this == NULL || class == NULL || class->x <= 0 || class->y <= 0)
        return (NULL);
    point_result = new(&this->base, this->x, this->y);
    if (point_result == NULL)
        return (NULL);
    point_result->x /= class->x;
    point_result->y /= class->y;
    return (point_result);
}

static const PointClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&Point_str,
        .__add__ = (binary_operator_t)&Point_add,
        .__sub__ = (binary_operator_t)&Point_sub,
        .__mul__ = (binary_operator_t)&Point_mul,
        .__div__ = (binary_operator_t)&Point_div,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class *Point = (const Class *)&_description;