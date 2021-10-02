/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** hpp
*/

#ifndef EX04_HPP_
#define EX04_HPP_

#include "iostream"

template<typename K>
auto equal(const K &val, const K &pal);

template<typename K>
class Tester {
public:
    Tester(/* args */);
    ~Tester();
    auto equal(const K &val, const K &pal);
};

#endif /* !EX04_HPP_ */
