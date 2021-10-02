/*
** EPITECH PROJECT, 2020
** RAM
** File description:
** HPP
*/

#ifndef RAM_HPP_
#define RAM_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics.hpp>

class RAM {
public:
    RAM();
    ~RAM();
    sf::Text getTotalRam();
    sf::Text getUserRam();
    sf::Text getPercent();
    sf::Text getModuleName();
    void setModuleName(std::string nameModule, sf::Vector2f pos);
    void setTotalRam(std::string totalRam, sf::Vector2f pos);
    void setUserRam(std::string userRam, sf::Vector2f pos);
    void setPercent(std::string percent, sf::Vector2f pos);
    sf::Texture _TexLoad;
    sf::Sprite _Load;
private:
    sf::Font font;
    sf::Text ModuleName;
    sf::Text TotalRam;
    sf::Text UserRam;
    sf::Text Percent;
};

#endif