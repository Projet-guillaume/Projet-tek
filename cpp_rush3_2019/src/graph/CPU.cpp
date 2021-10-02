/*
** EPITECH PROJECT, 2020
** CPU
** File description:
** cpp
*/

#include "CPU.hpp"
#include <iostream>
#include <cstdlib>

CPU::CPU()
{

}

CPU::~CPU() {
}
sf::Text CPU::getName() {
    return Name;
}
sf::Text CPU::getNbCore() {
    return NbCore;
}
sf::Text CPU::getNbProc() {
    return NbProc;
}
sf::Text CPU::getFrequency() {
    return Frequency;
}
sf::Text CPU::getMaxFrequency() {
    return MaxFrequency;
}
sf::Text CPU::getpercent() {
    return Percent;
}

sf::Text CPU::getModuleName()
{
    return ModuleName;
}

void CPU::setModuleName(std::string nameModule, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    ModuleName.setFont(font);
    ModuleName.setString(nameModule);
    ModuleName.setPosition(pos);
    ModuleName.setCharacterSize(19);
    ModuleName.setFillColor(sf::Color::Red);
    ModuleName.setStyle(sf::Text::Bold);
}

void CPU::setName(std::string name, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    Name.setFont(font);
    Name.setString(name);
    Name.setPosition(pos);
    Name.setCharacterSize(13);
    Name.setFillColor(sf::Color::Black);
    Name.setStyle(sf::Text::Bold);
}

void CPU::setNbCore(std::string nbcore, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    NbCore.setFont(font);
    NbCore.setString(nbcore);
    NbCore.setPosition(pos);
    NbCore.setCharacterSize(16);
    NbCore.setFillColor(sf::Color::Black);
    NbCore.setStyle(sf::Text::Bold);
}

void CPU::setNbProc(std::string nbproc, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    NbProc.setFont(font);
    NbProc.setString(nbproc);
    NbProc.setPosition(pos);
    NbProc.setCharacterSize(16);
    NbProc.setFillColor(sf::Color::Black);
    NbProc.setStyle(sf::Text::Bold);
}

void CPU::setFrequency(std::string frequancy, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    Frequency.setFont(font);
    Frequency.setString(frequancy);
    Frequency.setPosition(pos);
    Frequency.setCharacterSize(16);
    Frequency.setFillColor(sf::Color::Black);
    Frequency.setStyle(sf::Text::Bold);
}

void CPU::setMaxFrequency(std::string maxfrequancy, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    MaxFrequency.setFont(font);
    MaxFrequency.setString(maxfrequancy);
    MaxFrequency.setPosition(pos);
    MaxFrequency.setCharacterSize(16);
    MaxFrequency.setFillColor(sf::Color::Black);
    MaxFrequency.setStyle(sf::Text::Bold);
}

void CPU::setpercent(std::string percent, sf::Vector2f pos)
{
    int per = percent[0]; percent.clear();
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
    percent = std::to_string(per);
    percent = std::to_string(per);
    font.loadFromFile("src/graph/res/Technoma.otf");
    Percent.setFont(font);
    Percent.setString(percent);
    Percent.setPosition(pos);
    Percent.setCharacterSize(16);
    Percent.setFillColor(sf::Color::Black);
    Percent.setStyle(sf::Text::Bold);
}