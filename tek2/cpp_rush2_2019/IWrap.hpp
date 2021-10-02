/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** IWrap
*/

#ifndef IWRAP_HPP_
#define IWRAP_HPP_

#include "class/Object.hpp"

class IWrap
{
    public:
        virtual void wrapMeThat(Object *that) = 0;
        virtual Object *openMe() = 0;
        virtual void closeMe() = 0;
        virtual Object *getobj() = 0;
        virtual bool isOpen() const = 0;
};

#endif /* !IWRAP_HPP_ */
