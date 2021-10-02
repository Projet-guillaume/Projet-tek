/*
** EPITECH PROJECT, 2019
** send_cord
** File description:
** c
*/

#include "include/my.h"

int stock_cord(int u, int i, int sig)
{
    char *str = "ABCDEFGH";
    user_t user;

    if (u == 0) {
        tmp[0] = i;
        my_putchar(str[i - 1]);
        u = 1;
    } else if (u == 1) {
        tmp[1] = i;
        my_put_nbr(i);
        u = 0;
        tmp[2] = 1;
        my_putstr(":  ");
        transfert_map(user, tmp[1] - 1, tmp[0] - 1);
        if (sig == 10)
            my_putchar('\n');
    }
    return (u);
}

void count_sig_player_1(int sig, siginfo_t *info, void *content)
{
    static int i;
    static int u;

    if (sig == 12) {
        i = i + 1;
    } else if (sig == 10) {
        u = stock_cord(u, i, sig);
        i = 0;
    }
}

void count_sig_player_2(int sig, siginfo_t *info, void *content)
{
    static int i;
    static int u;

    if (sig == 10) {
        i = i + 1;
    } else if (sig == 12) {
        u = stock_cord(u, i, sig);
        i = 0;
    }
}

void send_mult_sig(int nb, user_t user)
{
    int i = 0;

    while (i != nb) {
        usleep(4000);
        if (user.player == 1)
            kill(user.pid_two, 12);
        if (user.player == 2)
            kill(user.pid_two, 10);
        i = i + 1;
    }
    usleep(2000);
    if (user.player == 1)
        kill(user.pid_two, 10);
    if (user.player == 2)
        kill(user.pid_two, 12);
}