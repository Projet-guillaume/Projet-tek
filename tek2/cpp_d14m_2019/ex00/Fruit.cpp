/*
** EPITECH PROJECT, 2020
** main
** File description:
** cpp
*/

#include "Fruit.hpp"

int Fruit::getVitamins() const
{
    return this->_vitamins;
}

void Fruit::setVitamins(int vitamins)
{
    this->_vitamins = vitamins;
}

void Fruit::setName(std::string name)
{
    this->_name = name;
}

Fruit::~Fruit()
{

}

Fruit::Fruit(int vitamin) : _name(""), _vitamins(vitamin)
{

}