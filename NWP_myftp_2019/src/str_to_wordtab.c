/*
** EPITECH PROJECT, 2020
** str to word tab
** File description:
** c
*/

#include "../include/my.h"

int	find_chara(char *str, char c)
{

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
	        return (1);
    } return (0);
}

int	my_countdword(char *str, char *delim)
{
    int	i = 0;
    int	j = 0;

    while (str[i] != '\0') {
        for (i; find_chara(delim, str[i]) == 1 && str[i] != '\0'; i++);
        if (find_chara(delim, str[i]) == 0 && str[i] != '\0') {
	        for (i; find_chara(delim, str[i]) == 0 && str[i] != '\0'; i++);
	        j++;
	    }
    } return (j);
}

char **my_putstr_indtab(char *str, char **tab, char *delim)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        for (i; find_chara(delim, str[i]) == 1 && str[i] != '\0'; i++);
        if (find_chara(delim, str[i]) == 0 && str[i] != '\0') {
	        while (find_chara(delim, str[i]) == 0 && str[i] != '\0') {
	            tab[j][k] = str[i];
	            k++;
	            i++;
	        } tab[j][k] = '\0';
	        k = 0;
	        j++;
	    }
    } return (tab);
}

char **my_countdchar(char *str, char **tab, char *delim)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        for (i; find_chara(delim, str[i]) == 1 && str[i] != '\0'; i++);
        if (find_chara(delim, str[i]) == 0 && str[i] != '\0') {
	        while (find_chara(delim, str[i]) == 0 && str[i] != '\0') {
	            i++;
	            k++;
	        }
	    tab[j] = malloc((k + 1) * sizeof(char));
	    k = 0;
	    j++;
	    }
    } tab[j] = NULL;
    return (tab);
}

char **my_strd_to_wordtab(char *str, char *delim)
{
    int i = 0;
    char **tab;

    if (str == NULL || str[0] == '\0')
        return (NULL);
    i = my_countdword(str, delim);
    tab = malloc((i + 1) * sizeof(*tab));
    tab = my_countdchar(str, tab, delim);
    tab = my_putstr_indtab(str, tab, delim);
    return (tab);
}
