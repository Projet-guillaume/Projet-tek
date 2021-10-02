/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** c
*/

#include "include/my.h"

user_t init_map(user_t user, char *pos)
{
    user.map_void = map_void();
    user.map_pos = start_map(pos);
    return (user);
}

user_t display_pack(int x, int y, user_t user)
{
    my_putchar('\n');
    my_putstr("my_positions:\n");
    display_map(user.map_pos);
    my_putchar('\n');
    my_putstr("enemy's positions:\n");
    display_map(user.map_void);
    return (user);
}

void espace(int e)
{
    if (e < 7)
        my_putchar(' ');
}

void display_map(char **map)
{
    int i = 0;
    int e = 0;
    int k = 1;

    my_putstr(" |A B C D E F G H\n");
    my_putstr("-+---------------\n");
    for (i = 0; i != 8; i = i + 1) {
        my_put_nbr(k);
        my_putchar('|');
        k = k + 1;
        for (e = 0; e != 8; e = e + 1) {
            my_putchar(map[i][e]);
            espace(e);
        }
        e = 0;
        my_putchar('\n');
    }
}

char **map_void(void)
{
    char **map = malloc(sizeof(char *) * 8 + 1);
    int i = 0;
    int e = 0;

    for (i; i != 8; i = i + 1)
        map[i] = malloc(sizeof(char) * 8 + 1);
    for (i = 0; i != 8; i = i + 1) {
        for (e; e != 8; e = e + 1)
            map[i][e] = '.';
        map[i][e] = '\0';
        e = 0;
    }
    return (map);
}
