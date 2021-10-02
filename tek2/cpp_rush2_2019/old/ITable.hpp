/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ITable
*/

#ifndef ITABLE_HPP_
#define ITABLE_HPP_
#include <iostream>
#include "Object.hpp"

class ITable
{
    public:
    ITable(); 
    virtual ~ITable();
    virtual bool put_wrap(Object *obj) = 0;
    virtual Object *take_wrap(int pos) = 0;
    virtual std::string *look_wrap() = 0;
    virtual size_t getTableLength() = 0;
};

class PapaXmasTable
{
    public:
    PapaXmasTable();
    ~PapaXmasTable();
    virtual bool put_wrap(Object *obj);
    virtual Object *take_wrap(int pos);
    virtual std::string *look_wrap();
    virtual size_t getTableLength();

    protected:

    Object *table[10];

}

#endif /* !ITABLE_HPP_ */
