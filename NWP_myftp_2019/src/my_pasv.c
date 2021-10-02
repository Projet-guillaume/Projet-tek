/*
** EPITECH PROJECT, 2020
** passv
** File description:
** c
*/

#include "../include/my.h"

int	addr_port[6];

void my_pasv(client_s *my_client)
{
    my_client->transf_mode = 1;
    my_write(my_client->client_fd, "227 Entering Passive Mode\
     (h1,h2,h3,h4,p1,p2).\n");
}
