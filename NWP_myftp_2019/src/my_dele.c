/*
** EPITECH PROJECT, 2020
** my_del
** File description:
** c
*/

#include "../include/my.h"

void my_dele(client_s *my_client, char *param)
{
    if (my_client->is_root == false)
        my_write(my_client->client_fd, "550 Request action not taken.\n");
}
