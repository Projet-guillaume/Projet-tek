/*
** EPITECH PROJECT, 2019
** increm
** File description:
** c
*/

#include "include/struct.h"
#include "include/my.h"

void increm(char p, int *k)
{
    if (p == '2' || p == '3' || p == '4' || p == '5')
        *k = *k + 1;
}
