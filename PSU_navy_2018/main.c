/*
** EPITECH PROJECT, 2018
** main
** File description:
** c
*/

#include "include/my.h"

void wait_connect(int sig, siginfo_t *info, void *context)
{
    usleep(2000);
    if (kill(info->si_pid, 12) == 0) {
        my_putstr("\nenemy connected\n");
        tmp[0] = info->si_pid;
    }
}

void succes_connect(int sig, siginfo_t *info, void *context)
{
    my_putstr("successfully connected\n");
}

struct sigaction serveur(void)
{
    pid_t pid;
    struct sigaction act;

    pid = getpid();
    my_putstr("my_pid:  ");
    my_put_nbr(pid);
    my_putstr("\nwaiting for enemy connection...\n");
    sigemptyset(&act.sa_mask);
    act.sa_sigaction = wait_connect;
    act.sa_flags = SA_SIGINFO;
    sigaction(10, &act, NULL);
    pause();
    return (act);
}

struct sigaction client(int pid_serv)
{
    pid_t pid;
    struct sigaction act;

    pid = getpid();
    my_putstr("my_pid:  ");
    my_put_nbr(pid);
    my_putchar('\n');
    kill(pid_serv, 10);
    sigemptyset(&act.sa_mask);
    act.sa_sigaction = succes_connect;
    act.sa_flags = SA_SIGINFO;
    sigaction(12, &act, NULL);
    pause();
    return (act);
}

int main(int ac, char **av)
{
    user_t user;
    struct sigaction act;

    tmp[2] = 0;
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        display_usage();
    if (ac == 1)
        return (84);
    if (ac == 2) {
        if (gest_error(av[1]) == 84)
            return (84);
        if (check_boats(av[1]) == 84)
            return (84);
        act = serveur();
        user.act = act;
        user.pid = getpid();
        user.pid_two = tmp[0];
        user = init_map(user, av[1]);
        transfert_map(user, 0, 0);
        user = display_pack(0, 0, user);
        my_putchar('\n');
        player_one(act, user);
    }
    if (ac == 3) {
        if (gest_error(av[2]) == 84)
            return (84);
        if (check_boats(av[2]) == 84)
            return (84);
        act = client(my_atoi(av[1]));
        user.act = act;
        user.pid = getpid();
        user.pid_two = my_atoi(av[1]);
        user = init_map(user, av[2]);
        transfert_map(user, 0, 0);
        user = display_pack(0, 0, user);
        my_putchar('\n');
        player_two(act, user, av[1]);
    }
    return (0);
}
