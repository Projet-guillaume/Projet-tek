#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
public:
    FruitBox(int size);
    ~FruitBox();
    int nbFruits() const;
    bool putFruit(Fruit *f);
    Fruit *pickFruit();
    bool isFruit(Fruit *f);
    FruitNode *head() const;
private:
    FruitNode *_box;
    int _fruitBoxSize;
};

#endif /* !FRUITBOX_HPP_ */