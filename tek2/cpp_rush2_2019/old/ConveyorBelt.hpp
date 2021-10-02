/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ConveyorBelt.hpp
*/

#ifndef ConveyorBelt_hpp_INCLUDED
#define ConveyorBelt_hpp_INCLUDED

#include "Object.hpp"

class PapaXmasConveyorBelt : public Object {
public:
    void put(Object *obj);
    Object *take();
    void pressInButton();
    void pressOutButton();
private:
    Object *_obj = nullptr;
};

#endif // ConveyorBelt_hpp_INCLUDED
