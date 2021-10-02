/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** compté nombre caractere
*/

int my_strlen(char *s)
{
    int i = 0;

    while (s[i] != '\0')
        i++;
    return (i);
}
