/*
** EPITECH PROJECT, 2020
** quit
** File description:
** c
*/

#include "../include/my.h"

void my_quit(client_s *my_client)
{
    my_write(my_client->client_fd, "221 Service closing control\
     connection.\n");
    my_client->is_co = false;
}
