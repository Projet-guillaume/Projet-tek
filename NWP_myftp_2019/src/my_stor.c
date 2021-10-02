/*
** EPITECH PROJECT, 2020
** stor
** File description:
** c
*/

#include "../include/my.h"

void my_stor(client_s *my_client, char *param)
{
    (void)param;
    if (my_client->transf_mode > 0) {
        my_write(my_client->client_fd, "125 Data connection already open; transfer\
         starting.\n");
    } else
        my_write(my_client->client_fd, "425 Can't open data connection.\n");
}
