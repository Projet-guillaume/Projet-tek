/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** getting the length of a string
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] && str[i] != '\n'; i++);
    return (i);
}
