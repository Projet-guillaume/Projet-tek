/*
** EPITECH PROJECT, 2020
** main
** File description:
** cpp
*/

#ifndef LEMON_HPP_
#define LEMON_HPP_

#include "Fruit.hpp"

class Lemon : public Fruit {
public:
    Lemon();
    virtual ~Lemon();
    virtual std::string getName() const;
};

#endif /* !LEMON_HPP_ */