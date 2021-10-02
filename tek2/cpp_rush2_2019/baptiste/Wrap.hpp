/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Wrap.hpp
*/

#ifndef WRAP_HPP_INCLUDED
#define WRAP_HPP_INCLUDED

#include "Object.hpp"

class IWrap
{
    public:
        virtual void wrapMeThat(Object *that) = 0;
        virtual Object *openMe() = 0;
        virtual void closeMe() = 0;
        virtual Object *getobj() = 0;
        virtual bool isOpen() const = 0;
};

class Wrap {
    public:
        virtual void wrapMeThat(Object *that);
        Object *openMe();
        void closeMe();
        Object *getobj();
        bool isOpen() const;
    private:
        bool _isOpen = false;
        Object *_that = nullptr;
};

#endif
