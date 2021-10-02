/*
** EPITECH PROJECT, 2020
** lime
** File description:
** hpp
*/

#ifndef LIME_HPP_
#define LIME_HPP_

#include <string>
#include "Fruit.hpp"

class Lime : public Fruit {
public:
    Lime();
    virtual ~Lime();
    virtual std::string getName() const;
};
#endif /* !LIME_HPP_ */
