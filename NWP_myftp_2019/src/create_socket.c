/*
** EPITECH PROJECT, 2020
** creat socket
** File description:
** c
*/

#include "../include/my.h"

int create_socket()
{
    struct protoent *proto;
    int s;

    if ((proto = getprotobyname("TCP")) == NULL)
        my_exit("Error : can't create socket", 1);
    if ((s = socket(AF_INET, SOCK_STREAM, proto->p_proto)) == -1)
        my_exit("Error : can't create socket", 1);
    return (s);
}
