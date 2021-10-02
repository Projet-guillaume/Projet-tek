/*
** EPITECH PROJECT, 2020
** Character
** File description:
** cpp
*/

#include <ostream>
#include <iostream>
#include "Character.hpp"

Character::Character(const std::string &name, int level)
{
    _name = name;
    _level = level;
    Pv = 100;
    Energy = 100;
    _class = "Character";
    _race = "Human";
    Strength = 5;
    Stamina = 5;
    Intelligence = 5;
    Spirit = 5;
    Agility = 5;
    Range = CLOSE;
    std::cout << _name << " Created" << std::endl;
}

Character::~Character()
{
    _name.clear();
    _class.clear();
    _race.clear();
}

void Character::TakeDamage(int damage)
{
    if (Pv >= 10) {
        Pv -= damage;
        std::cout << _name << " takes " << damage << " damage" << std::endl;
    } else
        std::cout << _name << " out of combat" << std::endl;
}

int Character::RangeAttack()
{
    if (Energy >= 10) {
        Energy -= 10;
        std::cout << _name << " tosses a stone" << std::endl;
        return (5 + Strength);
    } else
        std::cout << _name << " out of combat" << std::endl;
}

int Character::CloseAttack()
{
    if (Energy >= 10) {
        Energy -= 10;
        std::cout << _name << " strikes with a wooden stick" << std::endl;
        return (10 + Strength);
    } else {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
}

void Character::Heal()
{
    Pv += 50;
    if (Pv > 100)
        Pv = 100;
    std::cout << _name << " takes a potion" << std::endl;
}

void Character::RestorePower()
{
    Energy = 100;
    std::cout << _name << " eats" << std::endl;
}

int Character::getLvl() const
{
    return this->_level;
}

int Character::getPv() const
{
    return this->Pv;
}
int Character::getPower() const
{
    return this->Energy;
}

const std::string &Character::getName() const
{
    return this->_name;
}