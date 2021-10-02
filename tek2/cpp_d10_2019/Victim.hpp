//
// Created by grosa on 1/25/20.
//

#ifndef CPP_D10_2019_VICTIM_HPP
#define CPP_D10_2019_VICTIM_HPP

#include <string>
#include <iostream>
#include <ostream>

class Victim {
    public:
    Victim(std::string name);
    ~Victim();
    void getPolymorphed() const;
    const std::string &getName() const;
    private:
    std::string _name;
};
std::ostream &operator<<(std::ostream &, Victim const &);

#endif //CPP_D10_2019_VICTIM_HPP
