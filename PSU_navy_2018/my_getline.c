/*
** EPITECH PROJECT, 2019
** my_getline
** File description:
** c
*/

#include "include/my.h"

int display_usage(void)
{
    my_putstr("USAGE\n     ./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n     first_player_pid:  only for the 2nd playe");
    my_putstr("r.  pid of the first player.\n     navy_positions:  file");
    my_putstr(" representing the positions of the ships.\n");
}

char *re_alloc(char *str, int nb)
{
    int i = 0;
    char *str_new = malloc(sizeof(char) * (my_strlen(str) + nb));

    while (str[i] != '\0') {
        str_new[i] = str[i];
        i = i + 1;
    }
    free(str);
    return (str_new);
}

char *my_getline(int fd)
{
    char buff[1];
    char *str = malloc(sizeof(char) * 2);
    int i = 0;

    buff[0] = 'e';
    while (buff[0] != '\n') {
        read(fd, buff, 1);
        str[i] = buff[0];
        str[i + 1] = '\0';
        str = re_alloc(str, 2);
        i = i + 1;
    }
    str[i - 1] = '\0';
    return (str);
}