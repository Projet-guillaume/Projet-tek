//
// Created by mbelleville on 01/02/2020.
//

#include"main.hpp"

Disk::Disk() {
    std::string buff;
    int i = 0;
    FILE *neo = new FILE;

    neo = popen("cat /sys/class/block/sda/device/model", "r");
    char buf[500] = { 0 };
    fread(buf, sizeof(buf), 1, neo);
    _Model = buf;
    pclose(neo);

    neo = popen("cat /sys/class/block/sda/device/vendor", "r");
    char bufy[500] = { 0 };
    fread(bufy, sizeof(bufy), 1, neo);
    _Vendor = bufy;
    pclose(neo);

    neo = popen("df -h --total | grep total", "r");
    char bufyman[500] = { 0 };
    fread(bufyman, sizeof(bufyman), 1, neo);
    std::string temp = bufyman;
    while (temp[i] != ' ')
        i++;
    while (temp[i] == ' ')
        i++;
    temp.erase(0, i);
    i = 0;
    while (temp[i] != ' ') {
        i++;
    }
    _Total = temp.substr(0, i);
    while (temp[i] == ' ')
        i++;
    temp.erase(0, i);
    i = 0;
    while (temp[i] != ' ') {
        i++;
    }
    _Used = temp.substr(0, i);
    while (temp[i] == ' ')
        i++;
    temp.erase(0, i);
    i = 0;
    while (temp[i] != ' ') {
        i++;
    }
    _Avail = temp.substr(0, i);
    while (temp[i] == ' ')
        i++;
    temp.erase(0, i);
    i = 0;
    while (temp[i] != ' ') {
        i++;
    }
    _Percent = temp.substr(0, i);
    pclose(neo);

}

Disk::~Disk()
{
}