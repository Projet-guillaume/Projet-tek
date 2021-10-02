/*
** EPITECH PROJECT, 2020
** main
** File description:
** cpp
*/

#ifndef BANANA_HPP_
#define BANANA_HPP_

#include "Fruit.hpp"

class Banana : public Fruit {
public:
    Banana();
    virtual ~Banana();
    virtual std::string getName() const;
};

#endif /* !BANANA_HPP_ */