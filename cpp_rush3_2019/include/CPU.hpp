/*
** EPITECH PROJECT, 2020
** CPE
** File description:
** hpp
*/

#ifndef CPU_HPP_
#define CPU_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics.hpp>

class CPU {
public:
    CPU();
    ~CPU();
    sf::Text getName();
    sf::Text getNbCore();
    sf::Text getNbProc();
    sf::Text getFrequency();
    sf::Text getMaxFrequency();
    sf::Text getpercent();
    sf::Text getModuleName();
    void setModuleName(std::string nameModule, sf::Vector2f pos);
    void setName(std::string name, sf::Vector2f pos);
    void setNbCore(std::string nbcore, sf::Vector2f pos);
    void setNbProc(std::string nbproc, sf::Vector2f pos);
    void setFrequency(std::string frequancy, sf::Vector2f pos);
    void setMaxFrequency(std::string maxfrequancy, sf::Vector2f pos);
    void setpercent(std::string percent, sf::Vector2f pos);
    sf::Texture _TexLoad;
    sf::Sprite _Load;
private:
    sf::Font font;
    sf::Text ModuleName;
    sf::Text Name;
    sf::Text NbCore;
    sf::Text NbProc;
    sf::Text Frequency;
    sf::Text MaxFrequency;
    sf::Text Percent;
};

#endif