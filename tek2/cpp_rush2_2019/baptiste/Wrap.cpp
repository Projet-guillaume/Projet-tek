/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Wrap.cpp
*/

#include <iostream>
#include <utility>
#include "Wrap.hpp"

void Wrap::wrapMeThat(Object *that)
{
    if (_that) {
        std::cerr << "Cannot wrap " << that->getName() << ": "
                  << _that->getName() << "already wrapped in wrap!"
                  << std::endl;
        return;
    }
    _that = that;
    _isOpen = false;
}

Object *Wrap::openMe()
{
    _isOpen = true;

    return std::exchange(_that, nullptr);
}

void Wrap::closeMe()
{
    _isOpen = false;
}

bool Wrap::isOpen() const
{
    return _isOpen;
}

Object *Wrap::getobj()
{
    return (this->_that);
}