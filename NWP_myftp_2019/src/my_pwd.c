/*
** EPITECH PROJECT, 2020
** pwd
** File description:
** c
*/

#include "../include/my.h"

void my_pwd(int client_fd)
{
    char path_pwd[PATH_MAX];
    char c = 34;

    if (getcwd(path_pwd, sizeof(path_pwd)) == NULL) {
        my_write(client_fd, "550 Requested action not taken.\n");
    } else {
        my_write(client_fd, "257 ");
        write(client_fd, &c, 1);
        my_write(client_fd, path_pwd);
        write(client_fd, &c, 1);
        my_write(client_fd, " created.\n");
    }
}
