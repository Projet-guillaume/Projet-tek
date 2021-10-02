/*
** EPITECH PROJECT, 2020
** my_help
** File description:
** c
*/

#include "../include/my.h"

void my_help(client_s *my_client)
{
    my_write(my_client->client_fd, " CDUP CWD DELE LIST NOOP PASS PASV PORT ");
    my_write(my_client->client_fd, "PWD QUIT RETR STOR USER\n");
    my_write(my_client->client_fd, "214 Help message.\n");
}
