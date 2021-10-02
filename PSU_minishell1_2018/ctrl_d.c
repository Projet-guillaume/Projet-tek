/*
** EPITECH PROJECT, 2019
** ctrl_c
** File description:
** c
*/

#include "include/my.h"

void ctrl_d(int signo)
{
    if (signo == SIGSEGV)
        exit(0);
    if (signo == SIGTSTP)
        my_putstr("\b  \b\b \b\b \b");
}

void signo(void)
{
    signal(SIGSEGV, ctrl_d);
    signal(SIGTSTP, ctrl_d);
    signal(SIGINT, signal_handler);
}
