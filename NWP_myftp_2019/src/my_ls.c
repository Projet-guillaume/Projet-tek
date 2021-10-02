/*
** EPITECH PROJECT, 2020
** myls
** File description:
** c
*/

#include "../include/my.h"

void my_list(char *pathname, client_s *my_client)
{
    FILE *fp;
    char path[PATH_MAX];

    if (my_client->transf_mode == 0) {
        my_write(my_client->client_fd, "425 Can't open data connection.\n");
        return;
    } if (!pathname)
        sprintf(path, "ls -l .");
    else
        sprintf(path, "ls -l %.4096s", pathname);
    fp = popen(path, "r");
    while (fgets(path, PATH_MAX, fp) != NULL)
        my_write(my_client->client_fd, path);
    pclose(fp);
    my_write(my_client->client_fd, "250 Requested file action okay,\
     completed.\n");
}
