/*
** EPITECH PROJECT, 2020
** execute
** File description:
** execute
*/

#include "ftrace.h"

char *my_sepcat(char *dest, char c, char *src)
{
    int i = 0;
    int j = 0;
    char *str3 = malloc(sizeof(str3) * (strlen(dest) + strlen(src) + 1));

    for (i = 0; dest[i] != '\0'; i++)
        str3[i] = dest[i];
    str3[i++] = c;
    for (j = 0; src[j] != '\0'; j++)
        str3[i++] = src[j];
    str3[i] = '\0';
    return (str3);
}

char **get_path(char **env)
{
    int i = 0;
    char *path = "PATH=";

    for (i = 0; env[i] != NULL; i++)
        if (strncmp(env[i], path, strlen(path)) == 0)
            return (my_str_to_wordtab(env[i] + strlen(path), ':'));
    return (NULL);
}

int error_file(const char *str)
{
    if ((str != NULL) && (access(str, X_OK) == 0))
            return (42);
    return (0);
}

char *concat_path(char *command, char **env)
{
    int i = 0;
    char **tab = get_path(env);
    char *concat = NULL;

    for (i = 0; tab[i] != NULL; i++) {
        if ((*command == '/' || *command == '.')
        && error_file(command) == 42)
            return (command);
        concat = my_sepcat(tab[i], '/', command);
        if (error_file(concat) == 42)
            return (concat);
        free(concat);
    }
    return (NULL);
}
