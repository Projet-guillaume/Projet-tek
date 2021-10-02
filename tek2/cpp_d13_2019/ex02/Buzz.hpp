
#ifndef BUZZ_HPP_
#define BUZZ_HPP_

#include "Toy.hpp"

class Buzz : public Toy {
public:
    Buzz(std::string const &name, std::string const &file = "buzz.txt");
    ~Buzz();
    Buzz(Buzz const &);
    Buzz &operator=(Buzz const &);
};

#endif /* !BUZZ_HPP_ */