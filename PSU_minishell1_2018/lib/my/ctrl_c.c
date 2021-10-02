/*
** EPITECH PROJECT, 2019
** ctrl_c.c
** File description:
** c
*/

#include "../../include/my.h"

void signal_handler(int signo)
{
    if (signo == SIGINT) {
        my_putstr("\b \b\b \b\n>$");
        signal(SIGINT, signal_handler);
    }
}
