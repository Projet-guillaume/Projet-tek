/*
** EPITECH PROJECT, 2020
** Droid.hpp
** File description:
** hpp
*/

#include <iostream>
#include <string>

class Droid {
    std::string Id;
    size_t Energy;
    size_t const Attack;
    size_t const Toughness;
    std::string *Status;

    public:
        Droid(Droid const &);
        Droid();
        Droid(std::string);
        Droid& operator=(Droid const &);
        ~Droid();
        std::string getId() const;
        void setId(std::string);
        size_t getEnergy() const;
        void setEnergy(size_t);
        std::string *getStatus() const;
        void setStatus(std::string *);
        size_t getAttack() const;
        size_t getToughness() const;
        bool operator==(Droid const &) const;
        bool operator!=(Droid const &) const;
        Droid& operator<<(size_t &);
};

std::ostream& operator <<(std::ostream&, Droid const &);