/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** main
*/

#include "LittlePony.hpp"
#include "Object.hpp"
#include "Teddy.hpp"
#include "Toy.hpp"
#include <iostream>

Object **MyUnitTests()
{
    Object **obj = new Object*[3];
     obj[0] = new LittlePony("Happy pony");
     obj[1] = new Teddy("cuddles");
     obj[3] =  NULL;

     return (obj);
}

int main()
{
    Object **object = MyUnitTests();

    if (!object)
        std::cout << "test" << std::endl;

    for (size_t i = 0; object[i] != NULL; i++)
    {
        std::cout << "obj[" << i << "]:" << std::endl;
        std::cout << "NAME: " << object[i] << std::endl;
    }
}