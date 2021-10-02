/*
** EPITECH PROJECT, 2020
** new.c
** File description:
** Rush1
*/

#include "new.h"

Object *new(const Class *class, ...)
{
    Class *obj;
    va_list params;

    va_start(params, class);
    obj = va_new(class, &params);
    va_end(params);
    return (obj);
}

Object *va_new(const Class *class, va_list* ap)
{
    Class *obj;

    if (!class)
        raise("Empty Class!\n");
    obj = malloc(class->__size__);
    if (!obj)
        raise("Out of Memory !\n");
    memcpy(obj, class, class->__size__);
    if (obj->__ctor__)
        obj->__ctor__(obj, ap);
    return ((Object *)obj);
}

void delete(Object *ptr)
{
    if(!(Class *)ptr)
        raise("Invalid Object!\n");
    if (((Class *)ptr)->__dtor__)
        ((Class*)ptr)->__dtor__(ptr);
    free(ptr);
}