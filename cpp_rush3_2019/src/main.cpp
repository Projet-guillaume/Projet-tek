/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** main
*/

#include "main.hpp"

int ncurses_mod();

int main(int argc, char const **av)
{
    system("LANG=en_US.utf8 > /dev/null 2>&1");
    if (argc == 2 && strcmp("text", av[1]) == 0) {
        NCurses n;
        system("LANG=c > /dev/null 2>&1");
        return 0;
    } else if (argc == 2 && strcmp("term", av[1]) == 0) {
        display_all();
        system("LANG=c > /dev/null 2>&1");
        return 0;
    } else if (argc == 1) {
        sfml_starter();
        system("LANG=c > /dev/null 2>&1");
        return 0;
    }
    return 0;
}