/*
** EPITECH PROJECT, 2020
** func_ptr.c
** File description:
** func_ptr.c
*/

#include "func_ptr.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    for (int i = strlen(str); i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

void print_upper(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 97)
            printf("%c", str[i]);
        else
            printf("%c", (str[i] - 32));
    } printf("\n");
}

void print_42(const char *str)
{
    printf("42\n");
}

void do_action(action_t action, char *str)
{
    t_action_func list[] = {
        {PRINT_NORMAL, &print_normal},
        {PRINT_REVERSE, &print_reverse},
        {PRINT_UPPER, &print_upper},
        {PRINT_42, &print_42},
    };
    for (int i = 0; i <= 4; i++) {
        if (action == list[i].action) {
            (*list[i].func)(str);
            break;
        }
    }
}