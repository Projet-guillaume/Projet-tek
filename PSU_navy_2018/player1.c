/*
** EPITECH PROJECT, 2019
** player1
** File description:
** c
*/

#include "include/my.h"
#include "include/struct.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char **player_map(char *map1)
{
    int fd = open(map1, O_RDONLY);
    char buff = 'b';
    int i = 0;
    char *parcer = malloc(sizeof(char) * 32 + 1);
    char **parcer_two;

    while (read(fd, &buff, 1) > 0) {
        if (buff == '\n') {
            parcer[i] = ' ';
            i = i + 1;
        } else {
            parcer[i] = buff;
            i = i + 1;
        }
    }
    close(fd);
    parcer_two = my_str_word_array(parcer, ' ');
    free(parcer);
    return (parcer_two);
}

char switch_case(char stock_coord)
{
    switch (stock_coord) {
    case 'A': stock_coord = '0'; break;
    case 'B': stock_coord = '1'; break;
    case 'C': stock_coord = '2'; break;
    case 'D': stock_coord = '3'; break;
    case 'E': stock_coord = '4'; break;
    case 'F': stock_coord = '5'; break;
    case 'G': stock_coord = '6'; break;
    case 'H': stock_coord = '7'; break;
    }
    return (stock_coord);
}

char **new_coord(char *map)
{
    char **stock_coord= player_map(map);
    int i = 0;
    int o = 0;

    for (i; i != 4; i = i + 1) {
        for (o; o != 7; o = o + 1)
            stock_coord[i][o] = switch_case(stock_coord[i][o]);
        stock_coord[i][o] = '\0';
        o = 0;
    }
    return (stock_coord);
}

char **chc_horizontal_vertical(char **map1, liste_t list)
{
    if (list.save_i == list.stock_i) {
        for (list.save_y; list.save_y != list.stock_y + 1; list.save_y++)
            map1[list.stock_i][list.save_y] = list.stock_nav + 48;
        return (map1);
    } else {
        for (list.save_i; list.save_i != list.stock_i + 1; list.save_i++)
            map1[list.save_i][list.stock_y] = list.stock_nav + 48;
        return (map1);
    }
}

char **map_player_one(char *map)
{
    char **new = new_coord(map);
    char **map1 = map_void();
    liste_t list;

    for (int i = 0; i != 4; i = i + 1) {
        list.stock_nav = new[i][0] - 48;
        list.stock_y = (new[i][2] - 48);
        list.stock_i = (new[i][3] - 48) - 1;
        map1[list.stock_i][list.stock_y] = list.stock_nav + 48;
        list.save_i = list.stock_i;
        list.save_y = list.stock_y;
        list.stock_y = new[i][5] - 48;
        list.stock_i = (new[i][6] - 48) - 1;
        map1 = chc_horizontal_vertical(map1, list);
    }
    return (map1);
}
