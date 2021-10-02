/*
** EPITECH PROJECT, 2020
** type
** File description:
** c
*/

#include "../include/my.h"

void my_type(char *cmd, client_s *my_client)
{
    my_write(my_client->client_fd, "200 Command okay.\n");
}
