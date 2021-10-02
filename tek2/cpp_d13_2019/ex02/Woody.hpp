#ifndef WOODY_HPP_
#define WOODY_HPP_

#include "Toy.hpp"

class Woody : public Toy {
public:
    Woody(std::string const &name, std::string const &file = "woody.txt");
    ~Woody();
    Woody(Woody const &);
    Woody &operator=(Woody const &);
};

#endif /* !WOODY_HPP_ */