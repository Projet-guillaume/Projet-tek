/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** IConveyorBelt.hpp
*/

#ifndef IConveyorBelt_hpp_included
#define IConveyorBelt_hpp_included

struct IConveyorBelt {
    void put(Object *obj);
    Object *take();
    void pressInButton();
    void pressOutButton();
};

#endif
