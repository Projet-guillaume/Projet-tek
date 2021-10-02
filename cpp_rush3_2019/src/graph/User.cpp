/*
** EPITECH PROJECT, 2020
** User
** File description:
** cpp
*/

#include "User.hpp"

User::User()
{

}

User::~User()
{

}

sf::Text User::getUname()
{
    return Uname;
}

sf::Text User::getHname()
{
    return Hname;
}

sf::Text User::getModuleName()
{
    return ModuleName;
}

void User::setModuleName(std::string nameModule, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    ModuleName.setFont(font);
    ModuleName.setString(nameModule);
    ModuleName.setPosition(pos);
    ModuleName.setCharacterSize(19);
    ModuleName.setFillColor(sf::Color::Red);
    ModuleName.setStyle(sf::Text::Bold);
}

void User::setUname(std::string uName, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    Uname.setFont(font);
    Uname.setString(uName);
    Uname.setPosition(pos);
    Uname.setCharacterSize(16);
    Uname.setFillColor(sf::Color::Black);
    Uname.setStyle(sf::Text::Bold);
}

void User::setHname(std::string hName, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    Hname.setFont(font);
    Hname.setString(hName);
    Hname.setPosition(pos);
    Hname.setCharacterSize(16);
    Hname.setFillColor(sf::Color::Black);
    Hname.setStyle(sf::Text::Bold);
}