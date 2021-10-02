/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int write(int fd, char *Buff, int NumBytes);

void my_putchar(char c)
{
    write(1, &c, 1);
}
