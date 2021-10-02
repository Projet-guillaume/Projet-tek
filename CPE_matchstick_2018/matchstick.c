/*
** EPITECH PROJECT, 2019
** matchstick.c
** File description:
** game
*/

#include "include/my.h"

void put_match(int x, int y, char **s, int i)
{
    write(1, "Player removed ", 15);
    my_put_nbr(x);
    write(1, " match(es) from line ", 21);
    my_put_nbr(y);
    write(1, "\n", 1);
    my_putab(s, i);
}

void put_match_ia(int x, int y, char **s, int i)
{
    write(1, "AI's turn...\n", 13);
    write(1, "AI removed ", 11);
    my_put_nbr(x);
    write(1, " match(es) from line ", 21);
    my_put_nbr(y);
    write(1, "\n", 1);
    my_putab(s, i);
}

char *match_ia(char **s, int i, int k, int ia_ligne)
{
    int ia_stick = 0;

    ia_ligne = randoma_ligne(i, s);
    ia_stick = randoma_stick(k, s[ia_ligne - 1]);
    s[ia_ligne - 1] = new_s(ia_stick, ia_ligne - 1, s[ia_ligne - 1]);
    put_match_ia(ia_stick, ia_ligne, s, i);
    return (s[ia_ligne -1]);
}

int match(char **s, int i, int k)
{
    int stock_y = 0;
    int stock_x = 0;
    int ia_ligne = 0;
    
    while (1) {
        if ((stock_y = get_match_ligne(i)) == 1001 ||
            (stock_x = get_match_stick(i, k, s[stock_y - 1])) == 1001)
            return (0);
        if (check_ligne_stick(stock_x, s[stock_y - 1]) == 1) {
            s[stock_y - 1] = new_s(stock_x, stock_y - 1, s[stock_y - 1]);
            put_match(stock_x, stock_y, s, i);
        } else
            continue;
        if (check_end_player(s, i) == 2)
            return (2);
        ia_ligne = randoma_ligne(i, s);
        s[ia_ligne - 1] = match_ia(s, i, k, ia_ligne);
        if (check_end_ia(s, i) == 1)
            return (1);
    }
}

int main(int ac, char **av)
{
    char **s;
    int i = 0;
    int k = 0;
    int d = 0;

    if (ac != 3)
        return (84);
    if (check_carac(av[1]) == 1 || check_carac(av[2]) == 1)
        return (84);
    else {
        i = my_atoi(av[1]);
        k = my_atoi(av[2]);
        if (i > 99 || i < 1 || k <= 0)
            return (84);
        s = maloc_map(av[1], i);
        my_putab(s, i);
        write(1, "\nYour turn:\n", 12);
        d = match(s, i, k);
    }
    return (d);
}
