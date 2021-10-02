/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 01
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vertex.h"
#include "new.h"

typedef struct
{
    Class base;
    int x;
    int y;
    int z;
} VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    (void)this;
}

static char *Vertex_str(VertexClass *this)
{
    char *str;
    size_t size;

    if (this == NULL)
        return (NULL);
    size = snprintf(NULL, 0, "<Vertex (%d, %d, %d)>", this->x, this->y, this->z);
    if (size <= 0)
    	return (NULL);
    str = malloc(sizeof(char) * (size + 1));
    snprintf(str, size + 1, "<Vertex (%d, %d, %d)>", this->x, this->y, this->z);
    return (str);
}

static VertexClass *Vertex_add(const VertexClass *this, const VertexClass *class)
{
    VertexClass *vertex_result;

    if (this == NULL || class == NULL)
        return (NULL);
    vertex_result = new(&this->base, this->x, this->y, this->z);
    if (vertex_result == NULL)
        return (NULL);
    vertex_result->x += class->x;
    vertex_result->y += class->y;
    vertex_result->z += class->z;
    return (vertex_result);
}

static VertexClass *Vertex_sub(const VertexClass *this, const VertexClass *class)
{
    VertexClass *vertex_result;

    if (this == NULL || class == NULL)
        return (NULL);
    vertex_result = new(&this->base, this->x, this->y, this->z);
    if (vertex_result == NULL)
        return (NULL);
    vertex_result->x -= class->x;
    vertex_result->y -= class->y;
    vertex_result->z -= class->z;
    return (vertex_result);
}

static VertexClass *Vertex_mul(const VertexClass *this, const VertexClass *class)
{
    VertexClass *vertex_result;

    if (this == NULL || class == NULL)
        return (NULL);
    vertex_result = new(&this->base, this->x, this->y, this->z);
    if (vertex_result == NULL)
        return (NULL);
    vertex_result->x *= class->x;
    vertex_result->y *= class->y;
    vertex_result->z *= class->z;
    return (vertex_result);
}

static VertexClass *Vertex_div(const VertexClass *this, const VertexClass *class)
{
    VertexClass *vertex_result;

    if (this == NULL || class == NULL ||
        class->x <= 0 || class->y <= 0 || class->z <= 0)
        return (NULL);
    vertex_result = new(&this->base, this->x, this->y, this->z);
    if (vertex_result == NULL)
        return (NULL);
    vertex_result->x /= class->x;
    vertex_result->y /= class->y;
    vertex_result->z /= class->z;
    return (vertex_result);
}

static const VertexClass    _description = {
    {   /* Class struct */
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&Vertex_str,
        .__add__ = (binary_operator_t)&Vertex_add,
        .__sub__ = (binary_operator_t)&Vertex_sub,
        .__mul__ = (binary_operator_t)&Vertex_mul,
        .__div__ = (binary_operator_t)&Vertex_div,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0
};

const Class *Vertex = (const Class *)&_description;
