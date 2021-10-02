/*
** EPITECH PROJECT, 2019
** gest_error.c
** File description:
** c
*/

#include "include/my.h"

int gest_error_value(int *o, char buff)
{
    if (*o == 7)
        *o = 0;
    else if (buff >= '1' && buff <= '8' || buff == ':' 
    || buff >= 'A' && buff <= 'H' || buff == '\n')
        *o = *o + 1;
    else
        return (84);
}

void check_error_fd(int *k, char buff)
{
    if (buff == '\n')
        *k = *k + 1;
}

void check_error_help_fd(int k)
{
    if (k != 4)
        exit_error;
}

int gest_error(char *map)
{
    int fd = open(map, O_RDONLY);
    int o = 0;
    char buff = 'o';
    int k = 0;

    if (fd == -1) {
        close(fd);
        return (84);
    } while (read(fd, &buff, 1) > 0) {
        if (o < 7 && buff == '\n' || o == 7 && buff != '\n') {
            close(fd);
            return (84);
        } if (gest_error_value(&o, buff) == 84) {
            close(fd);
            return (84);
        } check_error_fd(&k, buff);
    }
    check_error_help_fd(k);
    close(fd);
    return (0);
}
