#include <iostream>
#include <string>

class Picture {
public:
    std::string data;
    Picture(const std::string &file);
    Picture();
    ~Picture();
    Picture(Picture const &);
    Picture &operator=(Picture const &);
    bool getPictureFromFile(const std::string& file);
};
