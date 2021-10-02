/*
** EPITECH PROJECT, 2020
** module
** File description:
** hpp
*/

#ifndef MODULE_HPP_
#define MODULE_HPP_

#include "NameModule.hpp"
#include "DateTimeModule.hpp"
#include "KernelModule.hpp"
#include "RamModule.hpp"
#include "CPUModule.hpp"
#include "NetworkModule.hpp"
#include "CPU.hpp"
#include "RAM.hpp"
#include "User.hpp"
#include "Network.hpp"
#include "Date.hpp"
#include "Kernel.hpp"

class Module {
public:
    Module();
    ~Module();
    sf::Texture getTextureMod();
    sf::Texture getTextureAdd();
    sf::Sprite getSpriteMod();
    sf::Sprite getSpriteAdd();
    int getStatus();
    sf::Vector2f getPos();
    void initModule();
    void initCPU();
    void initRAM();
    void initUser();
    void initNetwork();
    void initDate();
    void initKernel();
    void setXandY(sf::Vector2f pos);
    void setStatus(int status);
    CPU _CPU;
    RAM _RAM;
    User _User;
    Network _Network;
    Date _Date;
    Kernel _Kernel;
    DateTimeModule T;
    CPUModule a;
    RamModule R;
    KernelModule K;
    NetworkModule N;
    NameModule na;
protected:
    int _Status;
    sf::Vector2f _Pos;
    sf::Font _font;
    sf::Text title;
    sf::Texture texture_mod;
    sf::Sprite sprite_mod;
    sf::Texture texture_add;
    sf::Sprite sprite_add;
};

#endif