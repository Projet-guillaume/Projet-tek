/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** hpp
*/

#ifndef EX01_HPP_
#define EX01_HPP_

#include <string.h>

template<typename C>
auto compare(const C &val, const C &pal)
{
    if (val == pal)
        return (0);
    return (val < pal) ? -1 : 1;
}

template<>
auto compare<const char*>(const char * const &val, const char * const &pal)
{
    if (strcmp(val, pal) == 0)
        return (0);
    return (strcmp(val, pal) > 0) ? 1: -1;
}

#endif /* !EX01_HPP_ */
