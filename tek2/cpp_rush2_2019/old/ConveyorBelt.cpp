/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ConveyorBelt.cpp
*/

#include <utility>
#include <iostream>
#include "ConveyorBelt.hpp"

void PapaXmasConveyorBelt::put(Object *obj)
{
    if (_obj) {
        std::cerr << "Cannot put " << obj->getName() << " on conveyor belt: "
                  << _obj->getName() << " already taking all room available :("
                  << std::endl;
        return;
    }

    _obj = obj;
}

Object *PapaXmasConveyorBelt::take()
{
    return std::exchange(_obj, nullptr);
}


