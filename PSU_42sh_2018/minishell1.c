/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** main
*/

#include "./include/my.h"

void parsing_exe(char **path, char **exe, env_t *env)
{
    if (my_strcompar(exe[0], "cd") == 0) {
        my_cd(env, exe);
    }
    else if (my_strcompar(exe[0], "exit") == 0) {
        my_exit();
    }
    else if (my_strcompar(exe[0], "env") == 0) {
        my_puttab(env->tab);
    }
    else if (my_strcompar(exe[0], "setenv") == 0) {
        my_setenv(exe, env);
    }
    else if (my_strcompar(exe[0], "unsetenv") == 0) {
        my_unsetenv(exe, env);
    }
    else {
        path = recup_path(env->tab, exe);
        test_path(path, exe, env);
    }

}

void check_separator(char *str, env_t *env)
{
    char **exe = NULL;
    char **path = NULL;

    if (separator_ok(str) == 0) {
        exe = str_to_word_tab(str, ' ');
        if (check_void(exe) == 0)
            parsing_exe(path, exe, env);
    }
    else
        with_separator(str, env);
}

int mysh(env_t *env)
{
    size_t len = 0;
    size_t read;
    char *str = NULL;
    lunch(env);
    while (1) {
        my_putstr("$>");
        read = getline(&str, &len, stdin);
        if (read == -1)
            exit(0);
        str = change_space(str);
        check_separator(str, env);
    }
}

int main(int ac, char **av, char **enve)
{
    env_t env;
    env.tab = my_tabcpy(enve, env.tab);
    mysh(&env);
}