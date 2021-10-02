/*
** EPITECH PROJECT, 2019
** get_match_stick.c
** File description:
** c
*/

#include "../../include/my.h"

int get_help_error(char *p, int k, char *s)
{
    if (check_ligne_stick(k, s) == 1) {
        write(1, "Error: you cannot remove more than ", 35);
        my_put_nbr(k);
        write(1, " matches per turn\n", 18);
    } else {
        write(1, "Error: you cannot remove more than ", 35);
        my_put_nbr(k);
        write(1, " matches per turn\n", 18);
    }
}

int ctrl_d(char *p, int k, int stock, char *s)
{
    if (my_atoi(p) <= k && my_atoi(p) > 0) {
        stock = my_atoi(p);
        if (check_ligne_stick(stock, s) == 0) {
            write(1, "Error: not enough matches on this line\n", 39);
            return (stock = 985968);
        }
        return (stock);
    }
}

int get_match_stick(int i, int k, char *s)
{
    char *p = NULL;
    int stock = 0;
    size_t b = 0;

    write(1, "Matches: ", 9);
    if (getline(&p, &b, stdin) == -1)
        return (1001);
    p[my_strlen(p) - 1] = '\0';
    if (check_carac(p) == 1) {
        write(1, "Error: invalid input (positive number expected)\n", 48);
        return (stock = 985968);
    } if (my_atoi(p) <= k && my_atoi(p) > 0) {
        stock = my_atoi(p);
        if (check_ligne_stick(stock, s) == 0) {
            write(1, "Error: not enough matches on this line\n", 39);
            return (stock = 985968);
        }
        return (stock);
    } if (my_atoi(p) == 0) {
          write(1, "Error: you have to remove at least one match\n", 45);
          return (stock = 985968);
    }
    get_help_error(p, k, s);
    return (985968);
}
