/*
** EPITECH PROJECT, 2020
** main
** File description:
** cpp
*/

#include "Lemon.hpp"

Lemon::Lemon()
{
    this->setName("lemon");
    this->setVitamins(3);
}

Lemon::~Lemon()
{

}

std::string Lemon::getName() const
{
    return this->_name;
}