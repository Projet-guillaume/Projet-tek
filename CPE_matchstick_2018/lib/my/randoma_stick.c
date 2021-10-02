/*
** EPITECH PROJECT, 2019
** randoma_stick.c
** File description:
** c
*/

#include "../../include/my.h"

int randoma_stick(int k, char *s)
{
    int b = 0;
    int stick = 0;

    srandom(time(NULL));
    b = random()%k+1;
    if (check_ia_stick(k, b, s) == 200)
        return (b);
    else {
        stick = check_ia_stick(k, b, s);
        b = random()%stick+1;
        return (b);
    }
}
