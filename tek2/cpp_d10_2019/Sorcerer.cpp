//
// Created by grosa on 1/25/20.
//

#include "Sorcerer.hpp"
#include "Peon.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title <<  ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string &Sorcerer::getName() const
{
    return this->_name;
}

const std::string &Sorcerer::getTitle() const
{
    return this->_title;
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &s) 
{
    os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
    return (os);
}

int main(void)
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
}
