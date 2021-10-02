/*
** EPITECH PROJECT, 2020
** Lemon
** File description:
** hpp
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
