/*
** EPITECH PROJECT, 2020
** Modul
** File description:
** cpp
*/

#include <iostream>
#include "Module.hpp"

Module::Module() {
//    sf::Vector2f pos = {0, 0};
    texture_mod.loadFromFile("src/graph/res/modul.png");
    sprite_mod.setTexture(texture_mod);
    texture_add.loadFromFile("src/graph/res/add.png");
    sprite_add.setTexture(texture_add);
    _font.loadFromFile("src/graph/res/Technoma.otf");
//    this->setXandY(pos);
    _Status = 0;
}

Module::~Module() {}

sf::Vector2f Module::getPos() {
    return _Pos;
}

int Module::getStatus() {
    return _Status;
}

void Module::initCPU() {
    sf::Vector2f pos = this->getPos();
    std::string nameModule = "CPU:";
    std::string info[] = {" ", "Nb of cores: ", "Max Frequency: ",
    "Current Frequency: ", "use %% ", "Current Processus: "};

    pos.x = pos.x + 13;
    pos.y = pos.y + 10;
    _CPU.setModuleName(nameModule, pos);
    pos.y = pos.y + 25;
    _CPU.setName((info[0] + a.getName()), pos);
    pos.y = pos.y + 25;
    _CPU.setNbCore((info[1] + a.getNbCore()), pos);
    pos.y = pos.y + 25;
    _CPU.setMaxFrequency((info[2] + a.getMaxFrequency()), pos);
    pos.y = pos.y + 25;
    _CPU.setFrequency((info[3] + a.getFrequency()), pos);
    pos.y = pos.y + 25;
    _CPU.setpercent(a.getPercent(), pos);
    pos.y = pos.y + 25;
    _CPU.setNbProc((info[5] + a.getNbProc()), pos);
}

void Module::initRAM()
{
    sf::Vector2f pos = this->getPos();
    std::string nameModule = "RAM:";
    std::string info[] = {"TotalRam: ", "UseRam: ", "utilization: "};

    pos.x = pos.x + 13;
    pos.y = pos.y + 10;
    _RAM.setModuleName(nameModule, pos);
    pos.y = pos.y + 25;
    _RAM.setTotalRam((info[0] + R.getTotalRam()), pos);
    pos.y = pos.y + 25;
    _RAM.setUserRam((info[1] + R.getUsedRam()), pos);
    pos.y = pos.y + 25;
    _RAM.setPercent((info[2] + R.getPercentValue()), pos);
}

void Module::initUser()
{
    sf::Vector2f pos = this->getPos();
    std::string nameModule = "USER:";
    std::string info[] = {"HostName: ", "UserName: "};

    pos.x = pos.x + 13;
    pos.y = pos.y + 10;
    _User.setModuleName(nameModule, pos);
    pos.y = pos.y + 25;
    _User.setHname((info[0] + na.getHost()), pos);
    pos.y = pos.y + 25;
    _User.setUname((info[1] + na.getUser()), pos);
}

void Module::initNetwork()
{
    sf::Vector2f pos = this->getPos();
    std::string nameModule = "NETWORK:";
    std::string info[] = {"Name: ", "Uploads: ", "Downloads: ", "Speed: "};

    pos.x = pos.x + 13;
    pos.y = pos.y + 10;
    _Network.setModuleName(nameModule, pos);
    pos.y = pos.y + 25;
    _Network.setSsid((info[0] + N.getName()), pos);
    pos.y = pos.y + 25;
    _Network.setUp((info[1] + N.getByteUp()), pos);
    pos.y = pos.y + 25;
    _Network.setDown((info[2] + N.getByteDown()), pos);
    pos.y = pos.y + 25;
    _Network.setSpeed((info[3] + N.getSpeed()), pos);
}

void Module::initDate()
{
    sf::Vector2f pos = this->getPos();
    std::string nameModule = "DATE:";
    std::string info[] = {"Date: ", "Hour: "};

    pos.x = pos.x + 13;
    pos.y = pos.y + 10;
    _Date.setModuleName(nameModule, pos);
    pos.y = pos.y + 25;
    _Date.setDate((info[0] + T.getDate()), pos);
    pos.y = pos.y + 25;
    _Date.setTime((info[1] + T.getTime()), pos);
}

void Module::initKernel()
{
    sf::Vector2f pos = this->getPos();
    std::string nameModule = "KERNEL:";
    std::string info[] = {"Kernel V: ", "OS V: "};

    pos.x = pos.x + 13;
    pos.y = pos.y + 10;
    _Kernel.setModuleName(nameModule, pos);
    pos.y = pos.y + 25;
    _Kernel.setKernel((info[0] + K.getKernel()), pos);
    pos.y = pos.y + 25;
    _Kernel.setOS((info[1] + K.getOS()), pos);
}

void Module::initModule() {
    switch (_Status) {
        case 0: break;
        case 1: initCPU(); break;
        case 2: initRAM(); break;
        case 3: initUser(); break;
        case 4: initNetwork(); break;
        case 5: initDate(); break;
        case 6: initKernel(); break;
    }
}

void Module::setStatus(int status) {
    _Status = status;
}

void Module::setXandY(sf::Vector2f pos)
{
    _Pos = pos;
    sprite_add.setPosition(_Pos);
    sprite_mod.setPosition(_Pos);
}

sf::Texture Module::getTextureMod() {
    return texture_mod;
}

sf::Texture Module::getTextureAdd() {
    return texture_add;
}

sf::Sprite Module::getSpriteMod() {
    return sprite_mod;
}

sf::Sprite Module::getSpriteAdd() {
    return sprite_add;
}