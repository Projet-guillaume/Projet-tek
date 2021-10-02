/*
** EPITECH PROJECT, 2020
** banana
** File description:
** cpp
*/

#include "Banana.hpp"

Banana::Banana() 
{
    this->setName("banana");
    this->setVitamins(5);
}

Banana::~Banana()
{

}

std::string Banana::getName() const
{
    return this->_name;
}