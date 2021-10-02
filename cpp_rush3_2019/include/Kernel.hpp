/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** hpp
*/

#ifndef KERNEL_HPP_
#define KERNEL_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics.hpp>

class Kernel {
public:
    Kernel();
    ~Kernel();
    sf::Text getKernel();
    sf::Text getOS();
    sf::Text getModuleName();
    void setModuleName(std::string nameModule, sf::Vector2f pos);
    void setKernel(std::string kernel, sf::Vector2f pos);
    void setOS(std::string os, sf::Vector2f pos);
private:
    sf::Font font;
    sf::Text ModuleName;
    sf::Text _Kernel;
    sf::Text OS;
};

#endif