/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** h
*/

#include <curses.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <signal.h>

char *str_str(char *path, char *s);
void new_execut(char *path, char *s, char **v, char **env);
void signal_handler(int signo);
void ctrl_d(int signo);
void my_putab(char **s);
int my_strlen(char *s);
void my_putab_env(char **env);
int compare_tab(char **s, char *p);
int compare_str(char *s, char *p);
void compare(char *s, char **env, char **v);
char **my_str_word_array(char *s, char letter);
int my_putstr(char const *str);
void my_putchar(char c);
int minishell(char **av, char **env);
void signo(void);
