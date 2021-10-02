/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Box
*/

#include "Box.hpp"

Box::Box()
{
}

Box::~Box()
{
}

void Box::close()
{
    this->isOpen = false;
}

void Box::WrapMeThat(Obeject *obj)
{
    if (this->isOpen) {
        Wrap::WrapMeThat(obj);
        this->isOpen = false;
    }
}