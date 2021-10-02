/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** c
*/

char *my_revstr(char *str)
{
    char c;
    int size = 0;
    int i = 0;

    while (str[size] != '\0')
        size = size + 1;
    size = size - 1;
    while (i < size) {
        c = str[i];
        str[i] = str[size];
        str[size] = c;
        i = i + 1;
        size = size - 1;
    }
    return (str);
}
