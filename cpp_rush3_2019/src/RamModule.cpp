/*
** EPITECH PROJECT, 2020
** RamModule
** File description:
** RamModule
*/

#include "RamModule.hpp"

RamModule::RamModule()
{
    int i = 0;
    std::string buff;
    FILE *neo = new FILE;

	neo = popen("free", "r");
    char buf[500] = { 0 };
    fread(buf, sizeof(buf), 1, neo);
    buff = buf;
    buff.erase(0, buff.find("\n"));
    buff.erase(0, buff.find(" "));

    while (buff[i] == ' ')
        i++;
    buff.erase(0, i);
    i = 0;
    while (buff[i] != ' ')
        i++;
    _Total = buff.substr(0, i);
    std::string tmp = _Total;
    if(tmp.length() == 8)
        _Total = tmp.substr(0, 2);
    if(tmp.length() == 7)
        _Total = tmp.substr(0, 1);
    buff.erase(0, i);
    i = 0;
    while (buff[i] == ' ')
        i++;
    buff.erase(0, i);
    i = 0;
    while (buff[i] != ' ')
        i++;
    _Used = buff.substr(0, i);
    std::string tmp2 = _Used;
    if(tmp2.length() == 8)
        _Used = tmp2.substr(0, 2);
    if(tmp2.length() == 7)
        _Used = tmp2.substr(0, 1);
    if(tmp2.length() == 6)
        _Used = "1";
    int percent = 0;

    percent = (stoi(_Used) * 100) / stoi(_Total);
    _Perc_Used = std::to_string(percent);
    _Perc_Used.append("%");
	pclose(neo);
}

RamModule::~RamModule()
{
}

void RamModule::update()
{
    int i = 0;
    std::string buff;
    FILE *neo = new FILE;

	neo = popen("free", "r");
    char buf[500] = {0};
    fread(buf, sizeof(buf), 1, neo);
    buff = buf;
    buff.erase(0, buff.find("\n"));
    buff.erase(0, buff.find(" "));

    while (buff[i] == ' ')
        i++;
    buff.erase(0, i);
    i = 0;
    while (buff[i] != ' ')
        i++;
    _Total = buff.substr(0, i);
    buff.erase(0, i);
    i = 0;
    while (buff[i] == ' ')
        i++;
    buff.erase(0, i);
    i = 0;
    while (buff[i] != ' ')
        i++;
    _Used = buff.substr(0, i);

    int percent = 0;

    percent = (stoi(_Used) * 100) / stoi(_Total);
    _Perc_Used = std::to_string(percent);
    _Perc_Used.append("%");
	pclose(neo);
}

std::string RamModule::getUsedRam() const
{
    return _Used;
}

std::string RamModule::getTotalRam() const
{
    return _Total;
}

std::string RamModule::getPercentValue() const
{
    return _Perc_Used;
}