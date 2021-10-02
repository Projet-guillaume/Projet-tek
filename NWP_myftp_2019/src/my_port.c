/*
** EPITECH PROJECT, 2020
** port
** File description:
** c
*/

#include "../include/my.h"

int	addr_port[6];

int	my_tablen(char **tab)
{
    int	i = 0;

    for (i; tab[i]; ++i);
    return (i);
}

void my_port(client_s *my_client, char *cmd)
{
    int	i = 0;
    char **tab = my_strd_to_wordtab(cmd, ",");

    if (my_tablen(tab) < 6) {
        my_write(my_client->client_fd, "500 Unknown command.\n");
        return;
    }
    for (i; i < 6; ++i)
        addr_port[i] = atoi(tab[i]);
    my_client->transf_mode = 2;
    my_write(my_client->client_fd, "200 Command okay.\n");
}
