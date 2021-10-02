/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** IElf
*/

#include "IElf.hpp"

IElf::IElf()
{
}

IElf::~IElf()
{
}

void IElf::displayMessage(std::string message)
{
    std::cout << message << std:endl;
}

void IElf::setTable(ITable *table)
{
    _table = table;
}

ITable *table IElf::getTable()
{
    return _table;
}

void IElf::set(IConveyor *conveyor)
{
    _conveyorBelt = conveyor;
}

IConveyor IElf::getConveyorBelt()
{
    return _conveyorBelt;
}

bool IElf::putOnConveyor(Object *obj)
{
    if (!_conveyorBelt) {
        displayMessage("Elf hasn't convoyerBelt");
        return false;
    }

    // Check if conveyor belt has nothing
    if (_conveyorBelt->hasObject())
        displayMessage("The convoyer has already an object");
        return false;
    }

    // Put object on conveyor
    _conveyorBelt->setObject(obj);
    return true;
}

bool IElf::putOnTable(Object *obj)
{
    if (!_table) {
        displayMessage("Elf hasn't table");
        return false;
    }

    // Check if table is full
    if (_table->isFull())
        displayMessage("The table is full");
        return false;
    }

    // Put object on table
    _table->setObject(obj);
    return true;
}

Object *IElf::takeOnConvoyer()
{
    if (!_conveyorBelt) {
        displayMessage("Elf has not conveyorBelt");
        return;
    }

    if (!_conveyorBelt->hasObject()) {
        displayMessage("ConveyorBelt doesn't has object");
    }

    return _conveyorBelt->getObject();
}

Object *IElf::takeOnTable(int key)
{
    if (!table) {
        displayMessage("Elf hasn't table");
        return;
    }

    return _table->getObject(key);
}

std::string *IElf::checkTable()
{
    if (!_table) {
        displayMessage("Elf hasn't table");
    }

    return _table->getObjects();
}