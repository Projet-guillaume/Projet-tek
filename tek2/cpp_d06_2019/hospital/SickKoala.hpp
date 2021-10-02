/*
** EPITECH PROJECT, 2020
** SickKoala.hpp
** File description:
** SickKoala.hpp
*/

#include <iostream>
#include <string>

class SickKoala {
    public:
    SickKoala(std::string name_c);
    ~SickKoala();
    int takeDrug(std::string name_o);
    void overDrive(std::string name_p);
    void poke(void);
    private:
    std::string name;
};