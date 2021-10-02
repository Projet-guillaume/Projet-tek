/*
** EPITECH PROJECT, 2020
** code03
** File description:
** hpp
*/

#ifndef EX03_HPP_
#define EX03_HPP_

#include <iostream>
#include <string>

template<typename T>
void print(const T &elem)
{
    std::cout << elem << std::endl;
}

template<typename T>
T foreach(T *table, void(*ptr)(const T &elem), int size)
{
    for (int k = 0; k < size; k++)
        ptr(table[k]);
    return *table;
}
#endif /* !EX03_HPP_ */
