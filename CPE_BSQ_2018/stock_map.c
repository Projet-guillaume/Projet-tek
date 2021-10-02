/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** plus grand carré
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "include/my.h"
#include <stdlib.h>

int size_ligne(char *map)
{
    int fd = open(map, O_RDONLY);
    char buff = 'p';
    int i = 0;

    for (i; buff != '\n'; i++)
        read(fd, &buff, 1);
    buff = 'd';
    i = 0;
    for (i; buff != '\n'; i++)
        read(fd, &buff, 1);
    return (i);
}

int size_colone(char *map)
{
    int fd = open(map, O_RDONLY);
    char buff = 'o';
    char *s;
    int i = 0;
    int e = 0;

    for (i; buff != '\n'; i++)
        read(fd, &buff, 1);
    buff = 'd';
    close(fd);
    s = malloc(sizeof(char) * (i + 1));
    i = 0;
    fd = open(map, O_RDONLY);
    for (i; buff != '\n'; i++) {
	read(fd, &buff, 1);
        s[i] = buff;
    }
    s[i - 1] = '\0';
    e = my_atoi(s);
    free(s);
    close(fd);
    return (e);
}

char **maloc_map(char *map)
{
    int y = size_colone(map);
    char **s = malloc(sizeof(char *) * y + 1);
    int x = size_ligne(map);
    int i = 0;

    for (i; i < y; i++)
        s[i] = malloc(sizeof(char) * x + 1);
    return (s);
}

char **stock_map(char *map)
{
    int fd = open(map, O_RDONLY);
    char **s = maloc_map(map);
    char buff = 'r';
    int i = 0;
    int o = 0;

    while (buff != '\n')
        read(fd, &buff, 1);
    while (read(fd, &buff, 1) > 0) {
        if (buff == '\n') {
            s[i][o] = '\0';
            i++;
            o = 0;
        } else {
            s[i][o] = buff;
            o++;
        }
    }
    close(fd);
    return (s);
}

int main(int ac, char **av)
{
    int fd = open(av[1], O_RDONLY);
    char **s;

    if (ac != 2 || fd == -1) {
        close(fd);
        exit(84);
    }
    close(fd);
    gest_error(av[1]);
    s = display_square(av[1]);
    return (0);
}
