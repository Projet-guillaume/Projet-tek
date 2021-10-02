/*
** EPITECH PROJECT, 2020
** Fruit
** File description:
** hpp
*/

#ifndef FRUIT_HPP_
#define FRUIT_HPP_

#include <string>

class Fruit {
protected:
    std::string _name;
public:
    int _vitamins;
    Fruit(int vitamin = 0);
    virtual ~Fruit();
    virtual std::string	getName() const = 0;
    void setName(std::string);
    int getVitamins() const;
    void setVitamins(int vitamins);
};

#endif /* !FRUIT_HPP_ */
