/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** ls
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include "include/my.h"

void ls()
{
    DIR *dir = opendir(".");
    struct dirent *op;

    while (op = readdir(dir)) {
        if (op->d_name[0] != '.') {
            my_putstr(op->d_name);
            my_putchar('\n');
        }
    }
}

int main (int ac, char **av)
{
    if (ac == 1)
        ls();
    return (0);
}
