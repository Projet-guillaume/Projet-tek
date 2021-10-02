/*
** EPITECH PROJECT, 2020
** User
** File description:
** hpp
*/

#ifndef USER_HPP_
#define USER_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics.hpp>

class User {
public:
    User();
    ~User();
    sf::Text getUname();
    sf::Text getHname();
    sf::Text getModuleName();
    void setModuleName(std::string nameModule, sf::Vector2f pos);
    void setUname(std::string uName, sf::Vector2f pos);
    void setHname(std::string hName, sf::Vector2f pos);

private:
    sf::Font font;
    sf::Text ModuleName;
    sf::Text Uname;
    sf::Text Hname;
};

#endif