/*
** EPITECH PROJECT, 2020
** utility
** File description:
** c
*/

#include "../include/my.h"

void my_write(int fd, char *str)
{
    if (write(fd, str, strlen(str)) == -1)
        my_exit("Error : write", 1);
}

void my_exit(char *msg, int value)
{
    if (msg)
        fprintf(stderr, "%s\n", msg);
    exit(value);
}

void closing(char *msg, int fd, int value)
{
    if (close(fd) == -1)
        my_exit(msg, value);
    my_exit(msg, value);
}
