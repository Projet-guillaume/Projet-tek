/*
** EPITECH PROJECT, 2018
** putab
** File description:
** afficher un char **
*/

#include "../../include/my.h"
#include <stddef.h>
#include <unistd.h>

void putab(char **s)
{
    int i = 0;

    while (s[i] != NULL) {
        write(1, s[i], my_strlen(s[i]));
        write(1, "\n", 1);
        i++;
    }
}
