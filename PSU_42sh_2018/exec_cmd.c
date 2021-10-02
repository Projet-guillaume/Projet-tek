/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** main
*/

#include "./include/my.h"

char **recup_path(char **tab, char **exe)
{
    char *str = NULL;
    char **path;
    if (tab[1] == NULL)
        return (str_to_word_tab("w0qer:wer", ':'));
    for (int i = 0; tab[i] != NULL; i++) {
        if (tab[i][0] == 'P' && tab[i][1] == 'A') {
            str = &tab[i][5];

        }
    }
    if (str == NULL)
        str = "werwef:wecdsf";
    path = str_to_word_tab(str, ':');

    return (path);
}

void exec_cmd_path(char **exe, env_t *env)
{
    __pid_t tmp;
    int error = 0;
    int status;
    tmp = fork();
    if (tmp == 0) {
        error = execve(env->ok_path, &exe[0], env->tab);
        error_hand(error, exe[0]);
    }
    else {
        waitpid(tmp, &status, 0);
        segfault(status);
    }
}

void exec_cmd(int t, char **exe, env_t *env)
{
    __pid_t tmp;
    int error = 0;
    int status;
    if (t == 1) {
        exec_cmd_path(exe, env);
    }
    else if (t == 2) {
        tmp = fork();
        if (tmp == 0) {
            error = execve(exe[0], exe, env->tab);
            error_hand(error, exe[0]);
        }
        else {
            waitpid(tmp, &status, 0);
            segfault(status);
        }
    }
    else
        print_error_no_found(exe);
}

int test_path(char **path, char **exe, env_t *env)
{
    bool test = false;
    int t = 0;
    for (int i = 0; test != true; i++) {
        if (path[i] == NULL)
            break;
        path[i] = my_strcat(path[i], "/");
        path[i] = my_strcat(path[i], exe[0]);
        if (access(path[i], F_OK) == 0) {
            env->ok_path = path[i];
            t = 1;
            test = true;
        }
        if (access(exe[0], F_OK) == 0) {
            t = 2;
            test = true;
        }
    }
    exec_cmd(t, exe, env);
    return (0);
}
