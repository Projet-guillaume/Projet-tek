/*
** EPITECH PROJECT, 2020
** lime
** File description:
** cpp
*/

#include "Lime.hpp"

Lime::Lime()
{
    this->setName("lime");
    this->setVitamins(2);
}

Lime::~Lime()
{

}

std::string Lime::getName() const
{
    return this->_name;
}
