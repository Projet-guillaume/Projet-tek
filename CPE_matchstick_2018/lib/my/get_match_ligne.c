/*
** EPITECH PROJECT, 2019
** my_get_match_ligne.
** File description:
** c
*/

#include "../../include/my.h"

int check_carac(char *p)
{
    int z = 0;

    while (p[z] != '\0') {
        if (p[z] < '0' || p[z] > '9')
            return (1);
        z = z + 1;
    }
}

int get_match_ligne(int i)
{
    int o = 0;
    char *p = NULL;
    int stock = 0;
    size_t b = 0;

    write(1, "Line: ", 6);
    while (o != 1) {
        if (getline(&p, &b, stdin) == -1)
            return (1001);
        p[my_strlen(p) - 1] = '\0';
        if (check_carac(p) == 1) {
            write(1, "Error: invalid input (positive number expected)\n", 48);
            write(1, "Line: ", 6);
        } else if (my_atoi(p) <= i && my_atoi(p) > 0) {
            stock = my_atoi(p);
            o = o + 1;
        } else
            write(1, "Error: this line is out of range\nLine: ", 39);
    }
    return (stock);
}
