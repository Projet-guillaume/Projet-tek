/*
** EPITECH PROJECT, 2018
** gest_error.c
** File description:
** c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "include/my.h"
#include <unistd.h>

void gest_error(char *map)
{
    int fd = open(map, O_RDONLY);
    char buff = 'o';

    while (buff != '\n')
        read(fd, &buff, 1);
    while (read(fd, &buff, 1) > 0) {
        if (buff == '.' || buff == 'o' || buff == '\n' || buff == '\0') {
        } else {
            close(fd);
            my_putstr("Error character\n");
            exit(84);
        }
    }
    close(fd);
}
