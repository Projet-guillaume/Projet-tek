//
// Created by grosa on 1/25/20.
//

#ifndef CPP_D10_2019_PEON_HPP
#define CPP_D10_2019_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
    public:
        Peon(std::string name);
        ~Peon();
        virtual void getPolymorphed();
    protected:
        std::string _name;
};


#endif //CPP_D10_2019_PEON_HPP
