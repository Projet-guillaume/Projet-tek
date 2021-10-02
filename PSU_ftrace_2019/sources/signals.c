/*
** EPITECH PROJECT, 2020
** signal
** File description:
** c
*/

#include "ftrace.h"
#include "signal_names.h"

int display_signal(int signal)
{
    int i = 0;

    for (i = 0 ; signals[i].sig != 84; i++) {
        if (signals[i].sig == signal)
            return (dprintf(2, "Reveived signal %s\n", signals[i].signame), 84);
    } return (84);
}
