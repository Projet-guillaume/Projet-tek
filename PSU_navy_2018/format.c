/*
** EPITECH PROJECT, 2019
** format
** File description:
** c
*/

#include "include/my.h"

void missed_or_not(int sig, siginfo_t *info, void *context)
{
    int i = 0;

    if (sig == 10) {
        my_putstr("hit");
        i = 1;
    } else if (sig == 12) {
        my_putstr("missed");
        i = 2;
    }
    display_void(i);
}

int touch_or_not(char **tab, int x, int y)
{
    if (tab[y][x] == '2')
        return (1);
    if (tab[y][x] == '3')
        return (1);
    if (tab[y][x] == '4')
        return (1);
    if (tab[y][x] == '5')
        return (1);
    return (0);
}

void transfert_map(user_t user, int x, int y)
{
    static int i;
    static int pid;
    static char **tab;

    if (i == 0) {
        i = 1;
        tab = user.map_pos;
        pid = user.pid_two;
    } else {
        usleep(2000);
        if (touch_or_not(tab, y, x) == 1) {
            my_putstr("hit");
            tab[x][y] = 'x';
            kill(pid, 10);
        } else {
            my_putstr("missed");
            tab[x][y] = 'o';
            kill(pid, 12);
        }
        usleep(7000);
    }
}

int err_size_string(char *s)
{
    if (my_strlen(s) != 2)
        return (0);
    if (s[0] < 65 || s[0] > 72)
        return (2);
    if (s[1] < 49 || s[1] > 56)
        return (2);
    return (1);
}

char **format_string(char *s)
{
    char **tab = malloc(sizeof(char *) * 4);

    tab[0] = malloc(sizeof(char) * 2);
    tab[1] = malloc(sizeof(char) * 2);
    tab[0][0] = s[0] - 16;
    tab[0][1] = '\0';
    tab[1][0] = s[1];
    tab[1][1] = '\0';
    tab[2] = NULL;
    return (tab);
}