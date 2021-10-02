/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** Teddy
*/

#include "Teddy.hpp"

Teddy::Teddy(std::string name) : Toy(name)
{
}

Teddy::~Teddy()
{}

void Teddy::isTaken()
{
    std::cout << "gra hu" << std::endl;
}