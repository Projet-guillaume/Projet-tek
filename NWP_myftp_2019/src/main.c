/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** c
*/

#include "../include/my.h"

char *home_dir;
bool user_value;
bool pass_value;

void server_run(int fd)
{
    struct sockaddr_in s_in;
    socklen_t s_in_size;
    int client_fd;
    pid_t pid;

    while (1) {
        s_in_size = sizeof(s_in);
        if ((client_fd = accept(fd,(struct sockaddr *)&s_in, &s_in_size))== -1)
            closing("Error : can't accept client", fd, 1);
        if ((pid = fork()) < 0)
            closing("Error : can't fork", fd, 1);
        else if (pid == 0) {
            close(fd);
            my_write(client_fd, "220 Service ready for new user.");
            manage_client(client_fd);
            exit(0);
        } close(client_fd);
    }
}

int	main(int ac, char **av)
{
    int fd;
    struct sockaddr_in s_in;

    if (ac != 3)
        my_exit("Usage : ./server port path", 1);
    home_dir = av[2];
    check_dir();
    fd = create_socket();
    user_value = false;
    pass_value = false;
    s_in.sin_family = AF_INET;
    s_in.sin_port = htons(atoi(av[1]));
    s_in.sin_addr.s_addr = INADDR_ANY;
    if (bind(fd, (const struct sockaddr *)&s_in, sizeof(s_in)) == -1)
        closing("Error : bind, can't assign address to server", fd, 1);
    if (listen(fd, 42) == -1)
        closing("Error : listen, can't create queue", fd, 1);
    server_run(fd);
    return (0);
}
