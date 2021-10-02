/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** cpp
*/

#include "Kernel.hpp"

Kernel::Kernel()
{

}

Kernel::~Kernel() {}

sf::Text Kernel::getKernel()
{
    return _Kernel;
}

sf::Text Kernel::getOS()
{
    return OS;
}

sf::Text Kernel::getModuleName()
{
    return ModuleName;
}

void Kernel::setModuleName(std::string nameModule, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    ModuleName.setFont(font);
    ModuleName.setString(nameModule);
    ModuleName.setPosition(pos);
    ModuleName.setCharacterSize(19);
    ModuleName.setFillColor(sf::Color::Red);
    ModuleName.setStyle(sf::Text::Bold);
}

void Kernel::setKernel(std::string kernel, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    _Kernel.setFont(font);
    _Kernel.setString(kernel);
    _Kernel.setPosition(pos);
    _Kernel.setCharacterSize(16);
    _Kernel.setFillColor(sf::Color::Black);
    _Kernel.setStyle(sf::Text::Bold);
}

void Kernel::setOS(std::string os, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    OS.setFont(font);
    OS.setString(os);
    OS.setPosition(pos);
    OS.setCharacterSize(16);
    OS.setFillColor(sf::Color::Black);
    OS.setStyle(sf::Text::Bold);
}