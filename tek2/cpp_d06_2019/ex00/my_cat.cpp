/*
** EPITECH PROJECT, 2020
** my_cat
** File description:
** cpp
*/

#include <cstdio>
#include <iostream>
#include <fstream>

void my_cat(char **av)
{
    char c = 'a';

    for (int i = 1; av[i] != NULL; i++) {
        std::ifstream file(av[i], std::ios::in);
        if (file)
            while (file.get(c))
                std::cout << c;
        else
            std::cerr << "my_cat: " << av[i] << ": No such file or directory" << std::endl;
    }
}

int main(int ac, char **av)
{
    if (ac >= 2)
        my_cat(av);
    else
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
    return (0);
}