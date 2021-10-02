/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** str_to_word_tab
*/

#include "../../include/my.h"

int size_word(int *size, int nb_w, char *str, char s)
{
    int i = 0;
    int t = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] != s)
            t++;
        if (str[i] == s && str[i + 1] != s || str[i + 1] == '\0') {
            size[j] = t;
            t = 0;
            j++;
        }
        i++;
    }
}

int nb_word(char *str, char s)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == s && str[i + 1] != s)
            j++;
        i++;
    }
    return (j + 1);

}

char **split(char *str, char **tab, int nb_w, char s)
{
    int y = 0;
    int x = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != s) {
            tab[y][x] = str[i];
            x++;
        }
        if (str[i] == s && str[i+ 1] != s ||
        str[i + 1] == '\0' || str[i + 1] == '\n') {
            tab[y][x] = '\0';
            y++;
            x = 0;
        }
    }

    tab[nb_w] = NULL;
    return (tab);
}

int check_void_str(char *str)
{
    if (str[0] == '\n')
        return (1);
    else
        return (2);
}

char **str_to_word_tab(char *str, char s)
{
    int size[nb_word(str, s)];
    int nb_w = nb_word(str, s);
    char **tab;
    if (nb_w == 1) {
        if (check_void_str(str) == 1)
            return (NULL);
        tab = malloc(sizeof(char *) * (nb_w + 1));
        tab[0] = malloc(sizeof(char) * (my_strlen(str) + 1));
        tab[0] = my_strcpy(tab[0], str);
        tab[1] = NULL;
    }
    else {
        size_word(size, nb_w, str, s);
        tab = malloc(sizeof(char *) * (nb_w + 1));
        for (int i = 0; i != nb_w; i++)
            tab[i] = malloc(sizeof(char *) * (size[i] + 1));
        tab = split(str, tab, nb_w, s);
    }
    return (tab);
}