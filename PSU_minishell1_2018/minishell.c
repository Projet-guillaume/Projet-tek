/*
** EPITECH PROJECT, 2019
** minishell.c
** File description:
** minishell
*/

#include "include/gnl.h"
#include "include/my.h"

void gest_space_tab(char *s, int *o)
{
    for (*o; s[*o] == ' ' && s[*o + 1] == ' ' ||
        s[*o] == ' ' && s[*o + 1] == '\t' ||
        s[*o] == ' ' && s[*o + 1] == '\0' ||
        s[*o] == '\t' && s[*o + 1] == '\t' ||
        s[*o] == '\t' && s[*o + 1] == ' ' ||
        s[*o] == '\t' && s[*o + 1] == '\0'; *o = *o + 1);
}

char *space_and_tab(char *s)
{
    int i = my_strlen(s);
    char *v = malloc(sizeof(char) * i + 1);
    int o = 0;
    int x = 0;

    for (o; s[o] == ' ' || s[o] == '\t'; o++);
    for (o; s[o] != '\0'; o = o + 1) {
        gest_space_tab(s, &o);
        if (s[o] == '\t') {
            v[x] = ' ';
            o = o + 1;
            x = x + 1;
        }
        v[x] = s[o];
        x++;
    }
    v[x] = '\0';
    return (v);
}

void execut(char *path, char **v, char **env)
{
    pid_t fils = fork();

    if (fils == 0) {
        if (execve(path, v, NULL) == -1) {
            my_putstr(v[0]);
            my_putstr(": Command not found.\n");
            exit(0);
        }
    } else
        wait(NULL);
}

char *str_str(char *path, char *s)
{
    int l = 0;
    char *p = malloc(sizeof(char) * my_strlen(path) + my_strlen(s) + 1);

    for (l; path[l] != '\0'; l = l + 1)
        p[l] = path[l];
    for (int b = 0; s[b] != '\0'; b = b + 1) {
        if (s[b] != ' ') {
            p[l] = s[b];
            l = l + 1;
        } else {
            p[l] = '\0';
            return (p);
        }
    }
    return (p);
}

int minishell(char **av, char **env)
{
    char *s = NULL;
    char **v;
    char *path;

    my_putstr(">$");
    signo();
    while (compare_str(s = get_next_line(0), "exit\0") != 1) {
        if (s[0] != '\0') {
            s = space_and_tab(s);
            compare(s, env, v);
            path = str_str("/usr/bin/", s);
            v = my_str_word_array(s, ' ');
            execut(path, v, env);
            my_putstr(">$");
        } else {
            my_putstr(">$");
            continue;
        }
    }
}
