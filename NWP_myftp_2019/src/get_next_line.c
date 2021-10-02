/*
** EPITECH PROJECT, 2020
** getnextline
** File description:
** c
*/

#include "../include/my.h"

void my_puterr(char *str)
{
    write(2, str, strlen(str));
}

char *get_next_line(const int fd)
{
    char *res;
    char buffer;
    int a;

    a = read(fd, &buffer, 1);
    if (a == 0 || a == -1)
        return (NULL);
    a = 0;
    res = malloc(sizeof(char) * 10000);
    res[a] = buffer;
    a++;
    for (a; buffer != '\n' && a < 10000; a++) {
        read(fd, &buffer, 1);
        res[a] = buffer;
    } if (a >= 10000) {
        my_puterr("Error in line\n");
        return (NULL);
    } res[a - 1] = '\0';
    return (res);
}
