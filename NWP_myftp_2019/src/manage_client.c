/*
** EPITECH PROJECT, 2020
** manage_client
** File description:
** c
*/

#include "../include/my.h"

bool user_value;
bool pass_value;

void init_client(client_s *my_client, int client_fd)
{
    my_client->transf_mode = 0;
    my_client->is_co = true;
    my_client->client_fd = client_fd;
    my_client->is_root = false;
}

void manage_client(int client_fd)
{
    client_s my_client;

    init_client(&my_client, client_fd);
    while (my_client.is_co == true) {
        if (user_value != true || pass_value != true)
	        identification(&my_client);
        else if (execute(&my_client) == 0)
	        my_quit(&my_client);
    }
}
