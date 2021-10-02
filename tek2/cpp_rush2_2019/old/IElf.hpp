/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** IElf
*/

#ifndef IELF_HPP_
#define IELF_HPP_

#include "ITable.hpp"
#include "IConveyorBelt.hpp"

class IElf {
	public:
		IElf();
		~IElf();
};

class IElf
{
public:
    IElf();
    ~IElf();

    void setTable(ITable *table);
    Itable *getTable();
    void displayMessage(std::string message);
    void setConveyorBelt(IConveyorBelt *conveyor);
    IConveyorBelt getConveyorBelt(void);

    bool putOnConveyor(Object *obj, IConveyorBelt *conveyor);
    bool putOnTable(Object *obj, ITable *table);
    Object *takeOnConvoyer();
    Object *takeOnTable();

    std::string *checkTable();
    // Implement IN & OUT

private:
    ITable *_table;
    IConveyorBelt *_conveyorBelt;
};