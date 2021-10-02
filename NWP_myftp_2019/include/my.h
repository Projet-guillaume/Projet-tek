/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** h
*/

#ifndef MY_H
#define MY_H

#define USAGE "Usage : ./server port path"

#include <unistd.h>
#include <ctype.h>
#include <dirent.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>

typedef int bool;
#define true 1
#define false 0

extern char *home_dir;
extern int addr_port[6];
extern bool user_value;
extern bool pass_value;

typedef struct client_s {
    int client_fd;
    int transf_mode;
    bool is_co;
    bool is_root;
} client_s;

void my_exit(char *msg, int value);
void closing(char *msg, int fd, int value);
void my_write(int fd, char *str);
char *get_next_line(const int fd);
void free_tab(char **tab);
void identification(client_s *my_client);
void my_quit(client_s *my_client);
void my_pwd(int client_fd);
int create_socket();
void my_dele(client_s *my_client, char *param);
void my_help(client_s *my_client);
void manage_client(int client_fd);
int execute(client_s *my_client);
int strcicmp(char const *a, char const *b, int i);
void check_user(char *buffer, int client_fd);
void check_pass(char *buffer, int client_fd);
void my_port(client_s *my_client, char *cmd);
void my_stor(client_s *my_client, char *param);
void my_list(char *pathname, client_s *my_client);
char **my_strd_to_wordtab(char *str, char *delim);
void my_pasv(client_s *my_client);
void check_dir();
void my_type(char *cmd, client_s *my_client);
void my_retr(client_s *my_client, char *param);

#endif
