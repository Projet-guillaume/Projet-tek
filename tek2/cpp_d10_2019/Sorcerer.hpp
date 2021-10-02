//
// Created by grosa on 1/25/20.
//

#ifndef CPP_D10_2019_SORCERER_HPP
#define CPP_D10_2019_SORCERER_HPP

#include "Victim.hpp"

class Sorcerer {
    public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void polymorph(const Victim &victim) const;
    private:
    std::string _name;
    std::string _title;
};
std::ostream &operator<<(std::ostream &, Sorcerer const &);

#endif //CPP_D10_2019_SORCERER_HPP
