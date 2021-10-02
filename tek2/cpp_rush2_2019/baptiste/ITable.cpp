/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ITable
*/

#include "ITable.hpp"

PapaXmasTable::PapaXmasTable()
{
    for (int i = 0; i < 10; i++) 
        this->table[i] = NULL;
}

PapaXmasTable::~PapaXmasTable()
{
    for (int i = 0; i < 10; i++) {
        if (this->table[i] != NULL) {
            delete (this->table[i]);
            this->table[i] = NULL;
        }
    }
}

bool PapaXmasTable::put(Object *obj)
{
    for (size_t i = 0; i < 10; i++) {
        if (this->table[i] == NULL) {
            table[i] = obj;
            return (true);
        }
    }
    return (false);
}

Object* PapaXmasTable::take(int pos)
{
    Object *obj;

    if (this->table[pos] != NULL) {
        obj = this->table[pos];
        this->table[pos] = NULL;
        return (obj);
    }
    return (NULL);
}

/*std::string *PapaXmasTable::look_wrap()
{
    int x = 0;
    std::string *stock_name = new std::string[10];
    for (int i = 0; i < 10; i++) {
        if (this->table[i] != NULL)
            stock_name[i++] = this->table[i]->getName();
    }
    return (stock_name);
}

size_t PapaXmasTable::getTableLength()
{
    size_t nb = 0;

    for (int i = 0; i < 10; i++) {
        if (this->table[i] != NULL)
            nb++;
    }
    return (nb);
}*/