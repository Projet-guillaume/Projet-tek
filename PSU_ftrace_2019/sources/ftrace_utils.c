/*
** EPITECH PROJECT, 2020
** trace_utils
** File description:
** trace_utils
*/

#include "ftrace.h"

int get_tab_size(int *tab)
{
    int i = 0;
    int nb = 0;

    for (; i != 6; i++) {
        if (tab[i] != UNDEF)
            nb++;
    } return (nb);
}

void get_detached_process(int signum)
{
    (void)signum;
    dprintf(2, "ftrace: Process %d detached\n", pid);
    exit(0);
}
