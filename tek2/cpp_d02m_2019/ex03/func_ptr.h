/*
** EPITECH PROJECT, 2020
** func_ptr
** File description:
** h
*/

#include "func_ptr_enum.h"

typedef void (*t_func)(const char *str);

typedef struct s_action_func {
    action_t action;
    t_func func;
} t_action_func;