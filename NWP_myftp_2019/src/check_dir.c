/*
** EPITECH PROJECT, 2020
** check_dir
** File description:
** c
*/

#include "../include/my.h"

char *home_dir;

void check_dir()
{
    if (chdir(home_dir) == -1)
        my_exit("Error : can't access directory", 1);
}
