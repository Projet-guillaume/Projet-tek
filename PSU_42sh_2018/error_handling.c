/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** error_handling
*/

#include "./include/my.h"

void error_hand(int chdi, char *name)
{
    if (chdi == -1) {
        if (errno != 8) {
            my_putstr(name);
            my_putstr(": ");
            my_putstr(strerror(errno));
            my_putstr(".\n");
        }
        else {
            my_putstr(name);
            my_putstr(": ");
            my_putstr(strerror(errno));
            my_putstr(". Wrong Architecture.\n");
        }
    }
}

void segfault(int status)
{
    if (WIFSIGNALED(status) > 0) {
        if (WTERMSIG(status == 139)) {
            my_putstr("Segmentation fault");
            (WCOREDUMP(status)) ? my_putstr(" (core dumped)\n") :
            my_putchar('\n');
        }
        if (WTERMSIG(status) == 8) {
            my_putstr("Floating exception");
            (WCOREDUMP(status)) ? my_putstr(" (core dumped)\n") :
            my_putchar('\n');
        }
    }
}

void print_error_no_found(char **exe)
{
    my_putstr(exe[0]);
    my_putstr(": Command not found.\n");
}