/*
** EPITECH PROJECT, 2020
** RAM
** File description:
** cpp
*/

#include "RAM.hpp"
#include <iostream>


RAM::RAM()
{

}

RAM::~RAM()
{

}

sf::Text RAM::getTotalRam()
{
    return TotalRam;
}

sf::Text RAM::getUserRam()
{
    return UserRam;
}

sf::Text RAM::getPercent()
{
    return Percent;
}

sf::Text RAM::getModuleName()
{
    return ModuleName;
}

void RAM::setModuleName(std::string nameModule, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    ModuleName.setFont(font);
    ModuleName.setString(nameModule);
    ModuleName.setPosition(pos);
    ModuleName.setCharacterSize(19);
    ModuleName.setFillColor(sf::Color::Red);
    ModuleName.setStyle(sf::Text::Bold);
}

void RAM::setTotalRam(std::string totalRam, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    TotalRam.setFont(font);
    TotalRam.setString(totalRam);
    TotalRam.setPosition(pos);
    TotalRam.setCharacterSize(16);
    TotalRam.setFillColor(sf::Color::Black);
    TotalRam.setStyle(sf::Text::Bold);
}

void RAM::setUserRam(std::string userRam, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    UserRam.setFont(font);
    UserRam.setString(userRam);
    UserRam.setPosition(pos);
    UserRam.setCharacterSize(16);
    UserRam.setFillColor(sf::Color::Black);
    UserRam.setStyle(sf::Text::Bold);
}

void RAM::setPercent(std::string percent, sf::Vector2f pos)
{
    std::string tmp = percent.substr(percent.find(" "), percent.size());
    int per = std::atoi(tmp.c_str());
    float perf = per / 6;
    sf::Vector2f scale = {perf, 1};
    if (per <= 33) {
        _TexLoad.loadFromFile("src/graph/res/green.png");
        _Load.setTexture(_TexLoad);
        _Load.setScale(scale);
        _Load.setPosition(pos);
    } else if (per <= 66) {
        _TexLoad.loadFromFile("src/graph/res/yellow.png");
        _Load.setTexture(_TexLoad);
        _Load.setScale(scale);
        _Load.setPosition(pos);
    } else {
        _TexLoad.loadFromFile("src/graph/res/red.png");
        _Load.setTexture(_TexLoad);
        _Load.setScale(scale);
        _Load.setPosition(pos);
    }
    font.loadFromFile("src/graph/res/Technoma.otf");
    Percent.setFont(font);
    Percent.setString(percent);
    Percent.setPosition(pos);
    Percent.setCharacterSize(16);
    Percent.setFillColor(sf::Color::Black);
    Percent.setStyle(sf::Text::Bold);
}