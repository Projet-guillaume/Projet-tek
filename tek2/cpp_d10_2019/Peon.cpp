//
// Created by grosa on 1/25/20.
//

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name), _name(name)
{
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed()
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}