/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** my_cd
*/

#include "./include/my.h"

char *recup_home(char **tab)
{
    char *str = "/home/";
    char *temp = NULL;
    int w = 0;

    for (int i = 0; tab[i] != NULL; i++) {
        if (tab[i][0] == 'L' && tab[i][1] == 'O' &&
        tab[i][2] == 'G' && tab[i][3] == 'N') {
            temp = &tab[i][8];
            w = 1;
        }
    }
    if (w != 1)
        return (NULL);
    str = my_strcat(str, temp);
    str = my_strcat(str, "/");
    return (str);
}

char *my_getpwd(void)
{
    char *pwd = malloc(sizeof(char) * PATH_MAX);

    if (getcwd(pwd, 100) == NULL)
        exit(84);
    return (pwd);
}

int cd_less(env_t *env, int i)
{
    if (my_strcompar(env->back, "1") != 0) {
        env->tmp = my_getpwd();
        i = chdir(env->back);
        env->back = env->tmp;
    }
    else
        my_putstr(": No such file or directory.\n");
    return (i);

}

void my_cd2(env_t *env, char **exe, int i)
{
    if (exe[1] == NULL)
        error_hand(i, "cd");
    else
        error_hand(i, exe[1]);
    return;
}

void my_cd(env_t *env, char **exe)
{
    int i = 0;
    if (size_tab(exe) >= 3) {
        my_putstr("cd: Too many arguments.\n");
        return;
    }
    if (exe[1] == NULL) {
        env->back = my_getpwd();
        i = chdir(env->home);
    }
    else if (my_strcompar(exe[1], "-") == 0) {
        i = cd_less(env, i);
    }
    else {
        env->back = my_getpwd();
        i = chdir(exe[1]);
    }
    my_cd2(env, exe, i);
    return;
}
