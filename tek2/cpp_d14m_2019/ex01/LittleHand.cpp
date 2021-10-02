/*
** EPITECH PROJECT, 2020
** LittleHand
** File description:
** cpp
*/

#include "LittleHand.hpp"

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
    int counter = 0;
    int size = unsorted.nbFruits();
    
    while (counter < size) {
        bool ret = false;
        Fruit *currentFruit = unsorted.pickFruit();
        if (currentFruit->getName() == "lemon")
            ret = lemons.putFruit(currentFruit);
        else if (currentFruit->getName() == "banana")
            ret = bananas.putFruit(currentFruit);
        else if (currentFruit->getName() == "lime")
            ret = limes.putFruit(currentFruit);
        if (!ret)
            unsorted.putFruit(currentFruit);
        counter += 1;
    }
}

