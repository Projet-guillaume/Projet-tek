/*
** EPITECH PROJECT, 2020
** Network
** File description:
** cpp
*/

#include "Network.hpp"

Network::Network()
{

}

Network::~Network() {}

sf::Text Network::getSsid()
{
    return Ssid;
}

sf::Text Network::getSpeed()
{
    return Speed;
}

sf::Text Network::getUp()
{
    return Up;
}

sf::Text Network::getDown()
{
    return Down;
}

sf::Text Network::getModuleName()
{
    return ModuleName;
}

void Network::setModuleName(std::string nameModule, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    ModuleName.setFont(font);
    ModuleName.setString(nameModule);
    ModuleName.setPosition(pos);
    ModuleName.setCharacterSize(19);
    ModuleName.setFillColor(sf::Color::Red);
    ModuleName.setStyle(sf::Text::Bold);
}

void Network::setSsid(std::string ssid, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    Ssid.setFont(font);
    Ssid.setString(ssid);
    Ssid.setPosition(pos);
    Ssid.setCharacterSize(16);
    Ssid.setFillColor(sf::Color::Black);
    Ssid.setStyle(sf::Text::Bold);
}

void Network::setSpeed(std::string speed, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    Speed.setFont(font);
    Speed.setString(speed);
    Speed.setPosition(pos);
    Speed.setCharacterSize(16);
    Speed.setFillColor(sf::Color::Black);
    Speed.setStyle(sf::Text::Bold);
}

void Network::setUp(std::string up, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    Up.setFont(font);
    Up.setString(up);
    Up.setPosition(pos);
    Up.setCharacterSize(16);
    Up.setFillColor(sf::Color::Black);
    Up.setStyle(sf::Text::Bold);
}

void Network::setDown(std::string down, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    Down.setFont(font);
    Down.setString(down);
    Down.setPosition(pos);
    Down.setCharacterSize(16);
    Down.setFillColor(sf::Color::Black);
    Down.setStyle(sf::Text::Bold);
}