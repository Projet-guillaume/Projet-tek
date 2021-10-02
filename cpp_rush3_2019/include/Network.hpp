/*
** EPITECH PROJECT, 2020
** Network
** File description:
** hpp
*/

#ifndef NETWORK_HPP_
#define NETWORK_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics.hpp>

class Network {
public:
    Network();
    ~Network();
    sf::Text getSsid();
    sf::Text getSpeed();
    sf::Text getUp();
    sf::Text getDown();
    sf::Text getModuleName();
    void setModuleName(std::string nameModule, sf::Vector2f pos);
    void setSsid(std::string ssid, sf::Vector2f pos);
    void setSpeed(std::string speed, sf::Vector2f pos);
    void setUp(std::string up, sf::Vector2f pos);
    void setDown(std::string down, sf::Vector2f pos);

private:
    sf::Font font;
    sf::Text ModuleName;
    sf::Text Ssid;
    sf::Text Speed;
    sf::Text Up;
    sf::Text Down;
};

#endif