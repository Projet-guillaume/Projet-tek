/*
** EPITECH PROJECT, 2020
** tab_to_2dtab.c
** File description:
** tab_to_2dtab.c
*/

#include <stdio.h>
#include <stdlib.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int k = 0;
    int j = 0;
    int p = 0;

    *res = malloc(sizeof(int*) * length + 2);
    for (k; k != length; k++) {
        (*res)[k] = malloc(sizeof(int) * width + 2);
        while (j != width) {
            (*res)[k][j] = tab[p];
            j++;
            p++;
        } j = 0;
    }
}