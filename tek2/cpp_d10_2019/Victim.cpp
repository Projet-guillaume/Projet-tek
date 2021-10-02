//
// Created by grosa on 1/25/20.
//

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just popped!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

const std::string &Victim::getName() const
{
    return this->_name;
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &s)
{
	os << "I'm " << s.getName() << " and i like otters!" << std::endl;
	return (os);
}