/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** Object
*/

#include "Object.hpp"

Object::Object(std::string name)
{
    this->name = name;
}

Object::~Object()
{
}

std::string const &Object::getName() const 
{
    return (this->name);
}

std::ostream &operator<<(std::ostream &os, Object const *obj)
{
    return (os << obj->getName());
}