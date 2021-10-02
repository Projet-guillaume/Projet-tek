/*
** EPITECH PROJECT, 2020
** SickKoala.cpp
** File description:
** SickKoala.cpp
*/

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name_c)
{
    name = name_c;
    std::cout << "Mr." << name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

SickKoala::~SickKoala()
{
    name.clear();
}

void SickKoala::poke()
{
    std::cout << "Mr." << name << ": Gooeeeeerrk!!" << std::endl;
}

void SickKoala::overDrive(std::string name_p)
{
    std::string str2("Kreog!");
    std::size_t found = name_p.find(str2);

    if (found != std::string::npos) {
        name_p.replace(name_p.find(str2), str2.length(), "1337!");
        SickKoala::overDrive(name_p);
    } else 
        std::cout << "Mr." << name << ": " << name_p << std::endl;
}

int SickKoala::takeDrug(std::string name_o)
{
    if (name_o.compare("Mars") == 0) {
        std::cout << "Mr." << name << ": Mars, and it kreogs!" << std::endl;
        return true;
    } else if (name_o.compare("Buronzand") == 0) {
        std::cout << "Mr." << name << ": And you'll sleep right away !" << std::endl;
        return true;
    } else {
        std::cout << "Mr." << name << ": Goerkreog!" << std::endl;
        return false;
    }
}
