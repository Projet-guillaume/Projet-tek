/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** write a number
*/

#include "../../include/my.h"

void	my_put_nbr(int nb)
{
    int	modulo;
    int	div;

    if (nb < 0 && nb > -10)
        my_putchar('-');
    modulo = nb % 10;
    div = nb / 10;
    if (nb >= 10 || nb <= -10)
        my_put_nbr(div);
    if (modulo < 0)
        modulo = - modulo;
    my_putchar(modulo + '0');
}