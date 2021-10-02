/*
** EPITECH PROJECT, 2020
** FruitNode
** File description:
** hpp
*/

#ifndef FRUITNODE_HPP_
#define FRUITNODE_HPP_

#include "Fruit.hpp"

typedef struct s_fruitNode FruitNode;

struct s_fruitNode {
    Fruit *fruit;
    FruitNode *next;
};

#endif /* !FRUITNODE_HPP_ */
