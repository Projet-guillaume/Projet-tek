/*
** EPITECH PROJECT, 2019
** signal_gest
** File description:
** c
*/

#include "include/my.h"

void next_turn(void)
{
    char buff[2];

    while (1) {
        if (read(0, buff, 1) != -1 && buff[0] == '\n')
            my_putchar('\0');
        usleep(5000);
        if (tmp[2] == 1) {
            my_putchar('\n');
            break;
        }
    }
}

user_t input_valid(char *s, user_t user)
{
    int status = 0;
    int nb = 0;
    char **tab;
    struct sigaction act = user.act;

    if ((status = err_size_string(s)) == 1) {
        tab = format_string(s);
        nb = my_atoi(tab[0]);
        my_putchar(tab[0][0] + 16);
        send_mult_sig(nb, user);
        nb = my_atoi(tab[1]);
        my_put_nbr(nb);
        send_mult_sig(nb, user);
        my_putstr(":  ");
        act.sa_sigaction = missed_or_not;
        sigaction(10, &act, NULL);
        sigaction(12, &act, NULL);
        pause();
        if (display_void(0) == 1) {
            user.map_void[my_atoi(tab[1]) - 1][my_atoi(tab[0]) - 1] = 'x';
        } else {
            user.map_void[my_atoi(tab[1]) - 1][my_atoi(tab[0]) - 1] = 'o';
        }
        if (user.player == 1) {
            act.sa_sigaction = count_sig_player_2;
            sigaction(10, &act, NULL);
            sigaction(12, &act, NULL);
        } else {
            act.sa_sigaction = count_sig_player_1;
            sigaction(10, &act, NULL);
            sigaction(12, &act, NULL);
        }
        if (user.player == 2) {
            my_putchar('\n');
            user = display_pack(tmp[0], tmp[1], user);
            check_loose(user.map_pos);
            check_win(user.map_void);
            my_putstr("\nwaiting for enemy's attack...\n");
        } else
            my_putstr("\n\nwaiting for enemy's attack...\n");
        next_turn();
        if (user.player == 1) {
            user = display_pack(tmp[0], tmp[1], user);
            my_putstr("\n");
            check_loose(user.map_pos);
            check_win(user.map_void);
        }
        tmp[2] = 0;
    } else if ((status = err_size_string(s)) == 2)
        my_putstr("wrong position\n");
    user.act = act;
    return (user);
}

void player_one(struct sigaction act, user_t user)
{
    char * s;

    act.sa_sigaction = count_sig_player_2;
    user.player = 1;
    sigaction(10, &act, NULL);
    sigaction(12, &act, NULL);
    user.act = act;
    while (1) {
        my_putstr("attack:  ");
        s = my_getline(0);
        user = input_valid(s, user);
    }
}

void player_two(struct sigaction act, user_t user, char *pid_hote)
{
    char *s;

    act.sa_sigaction = count_sig_player_1;
    user.player = 2;
    sigaction(12, &act, NULL);
    sigaction(10, &act, NULL);
    user.act = act;
    my_putstr("waiting for enemy's attack...\n");
    next_turn();
    tmp[2] = 0;
    while (1) {
        my_putstr("attack:  ");
        s = my_getline(0);
        user = input_valid(s, user);
    }
}