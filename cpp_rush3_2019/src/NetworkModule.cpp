/*
** EPITECH PROJECT, 2020
** NetworkModule
** File description:
** NetworkModule
*/

#include "NetworkModule.hpp"

NetworkModule::NetworkModule() : _Name(), _byteDown(), _byteUp(), _Speed(), _coState(checkConnection())
{}

NetworkModule::~NetworkModule()
{}

bool NetworkModule::checkConnection()
{
    FILE *output;
    unsigned int i;

    if(!(output = popen("/sbin/route -n | grep -c '^0\\.0\\.0\\.0'","r")))
        return false;
    fscanf(output,"%u",&i);
    pclose(output);
    if (i == 1)
        return true;
    else if (i == 0)
        return false;
    return false;
}

void NetworkModule::update()
{
    int i = 0;
    std::string buff;
    FILE *neo = new FILE;
    _coState = checkConnection();
    
    if (_coState == false) {
        _Name = "Not connected";
        _byteUp = "0 k/s";
        _byteDown = "0 k/s";
        _Speed = "0 k/s";
        return;
    }

	neo = popen("cat /sys/class/net/wlp58s0/statistics/rx_bytes", "r");
    char buf[500] = { 0 };
    fread(buf, sizeof(buf), 1, neo);
	_byteDown = buf;
    pclose(neo);
    
    neo = popen("cat /sys/class/net/wlp58s0/statistics/tx_bytes", "r");
    fread(buf, sizeof(buf), 1, neo);
    _byteUp = buf;
    pclose(neo);

    neo = popen("iwgetid", "r");
    fread(buf, sizeof(buf), 1, neo);
    _Name = buf;
    _Name = _Name.substr(_Name.find("\"") + 1, _Name.length() - 1);
    _Name = _Name.erase(_Name.find("\""), _Name.length());
    pclose(neo);

    long nb1 = std::stol(_byteDown);
    long nb2 = std::stol(_byteUp);
    nb2 = (nb1 - nb2) / 1000;
    _Speed = std::to_string(nb2);
    _Speed.append(" Kb/s");

    _byteDown.erase(_byteDown.length() - 4, _byteDown.length());
    _byteUp.erase(_byteUp.length() - 4, _byteUp.length());
    _byteDown.append(" Kb/s");
    _byteUp.append(" Kb/s");
}

std::string NetworkModule::getByteDown() const
{
    return _byteDown;
}

std::string NetworkModule::getByteUp() const
{
    return _byteUp;
}

std::string NetworkModule::getSpeed() const
{
    return _Speed;
}

std::string NetworkModule::getName() const
{
    return _Name;
}

bool NetworkModule::getCo() const
{
    return _coState;
}