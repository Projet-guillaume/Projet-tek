/*
** EPITECH PROJECT, 2020
** Fruit
** File description:
** cpp
*/

#include "Fruit.hpp"

Fruit::Fruit(int vitamins) : _name(""), _vitamins(vitamins)
{

}

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
