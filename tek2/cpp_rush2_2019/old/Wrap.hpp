/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Wrap.hpp
*/

#ifndef WRAP_HPP_INCLUDED
#define WRAP_HPP_INCLUDED

#include "Object.hpp"

class Wrap {
public:
    virtual void wrapMeThat(Object *that);
    Object *openMe();
    void closeMe();
    bool isOpen() const;
private:
    bool _isOpen = false;
    Object *_that = nullptr;
};

#endif
