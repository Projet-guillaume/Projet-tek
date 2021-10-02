#ifndef TOY_HPP_
#define TOY_HPP_

#include "Picture.hpp"

class Toy {
public:
    enum ToyType {
        BASIC_TOY,
        ALIEN,
        WOODY,
        BUZZ
    };
protected:
    ToyType type;
    std::string name;
    Picture picture;
public:
    Toy();
    Toy(ToyType const&type, std::string const &name, std::string const &file);
    ~Toy();
    Toy(Toy const &);
    Toy &operator=(Toy const &);
    ToyType const &getType() const;
    std::string const &getName() const;
    std::string const &getAscii() const;
    void setName(std::string const &);
    bool setAscii(std::string const &);
    virtual void speak(std::string const &statement);
};

#endif /* !TOY_HPP_ */