/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#include "CreateWindow.hpp"
#include <cstdlib>

CreateWindow::CreateWindow()
{
    sf::Vector2f x[] = {{25, 25}, {525, 25}, {1025, 25}, {1525, 25},
                        {25, 700}, {525, 700}, {1025, 700}, {1525, 700}};
    Windows.create(sf::VideoMode(1920, 1080), "SFML window", sf::Style::Default);
    Windows.setFramerateLimit(30);
    texture.loadFromFile("src/graph/res/background.png");
    sprite.setTexture(texture);
    _Slot1.setXandY(x[0]);
    _Slot1.setStatus(1);
    _Slot1.initModule();
    _Slot2.setXandY(x[1]);
    _Slot2.setStatus(2);
    _Slot2.initModule();
    _Slot3.setXandY(x[2]);
    _Slot3.setStatus(3);
    _Slot3.initModule();
    _Slot4.setXandY(x[3]);
    _Slot4.setStatus(4);
    _Slot4.initModule();
    _Slot5.setXandY(x[4]);
    _Slot5.setStatus(5);
    _Slot5.initModule();
    _Slot6.setXandY(x[5]);
    _Slot6.setStatus(6);
    _Slot6.initModule();
    _Slot7.setXandY(x[6]);
    _Slot7.setStatus(0);
    _Slot7.initModule();
    _Slot8.setXandY(x[7]);
    _Slot8.setStatus(0);
    _Slot8.initModule();
}

CreateWindow::~CreateWindow() {}

void CreateWindow::Datedraw(int stat)
{
    switch (stat) {
        case 1: Windows.draw(_Slot1._Date.getModuleName());
                Windows.draw(_Slot1._Date.getDate());
                Windows.draw(_Slot1._Date.getDay());
                Windows.draw(_Slot1._Date.getMonth());
                Windows.draw(_Slot1._Date.getTime());
                Windows.draw(_Slot1._Date.getYear()); break;
        case 2: Windows.draw(_Slot2._Date.getModuleName());
                Windows.draw(_Slot2._Date.getDate());
                Windows.draw(_Slot2._Date.getDay());
                Windows.draw(_Slot2._Date.getMonth());
                Windows.draw(_Slot2._Date.getTime());
                Windows.draw(_Slot2._Date.getYear()); break;
        case 3: Windows.draw(_Slot3._Date.getModuleName());
                Windows.draw(_Slot3._Date.getDate());
                Windows.draw(_Slot3._Date.getDay());
                Windows.draw(_Slot3._Date.getMonth());
                Windows.draw(_Slot3._Date.getTime());
                Windows.draw(_Slot3._Date.getYear()); break;
        case 4: Windows.draw(_Slot4._Date.getModuleName());
                Windows.draw(_Slot4._Date.getDate());
                Windows.draw(_Slot4._Date.getDay());
                Windows.draw(_Slot4._Date.getMonth());
                Windows.draw(_Slot4._Date.getTime());
                Windows.draw(_Slot4._Date.getYear()); break;
        case 5: Windows.draw(_Slot5._Date.getModuleName());
                Windows.draw(_Slot5._Date.getDate());
                Windows.draw(_Slot5._Date.getDay());
                Windows.draw(_Slot5._Date.getMonth());
                Windows.draw(_Slot5._Date.getTime());
                Windows.draw(_Slot5._Date.getYear()); break;
        case 6: Windows.draw(_Slot6._Date.getModuleName());
                Windows.draw(_Slot6._Date.getDate());
                Windows.draw(_Slot6._Date.getDay());
                Windows.draw(_Slot6._Date.getMonth());
                Windows.draw(_Slot6._Date.getTime());
                Windows.draw(_Slot6._Date.getYear()); break;
        case 7: Windows.draw(_Slot7._Date.getModuleName());
                Windows.draw(_Slot7._Date.getDate());
                Windows.draw(_Slot7._Date.getDay());
                Windows.draw(_Slot7._Date.getMonth());
                Windows.draw(_Slot7._Date.getTime());
                Windows.draw(_Slot7._Date.getYear()); break;
        case 8: Windows.draw(_Slot8._Date.getModuleName());
                Windows.draw(_Slot8._Date.getDate());
                Windows.draw(_Slot8._Date.getDay());
                Windows.draw(_Slot8._Date.getMonth());
                Windows.draw(_Slot8._Date.getTime());
                Windows.draw(_Slot8._Date.getYear()); break;
    }
}

void CreateWindow::CPUdraw(int stat)
{
    switch (stat) {
        case 1: Windows.draw(_Slot1._CPU.getModuleName());
                Windows.draw(_Slot1._CPU.getFrequency());
                Windows.draw(_Slot1._CPU.getMaxFrequency());
                Windows.draw(_Slot1._CPU.getName());
                Windows.draw(_Slot1._CPU.getNbCore());
                Windows.draw(_Slot1._CPU.getNbProc());
                Windows.draw(_Slot1._CPU._Load);
                Windows.draw(_Slot1._CPU.getpercent()); break;
        case 2: Windows.draw(_Slot2._CPU.getModuleName());
                Windows.draw(_Slot2._CPU.getFrequency());
                Windows.draw(_Slot2._CPU.getMaxFrequency());
                Windows.draw(_Slot2._CPU.getName());
                Windows.draw(_Slot2._CPU.getNbCore());
                Windows.draw(_Slot2._CPU.getNbProc());
                Windows.draw(_Slot2._CPU._Load);
                Windows.draw(_Slot2._CPU.getpercent()); break;
        case 3: Windows.draw(_Slot3._CPU.getModuleName());
                Windows.draw(_Slot3._CPU.getFrequency());
                Windows.draw(_Slot3._CPU.getMaxFrequency());
                Windows.draw(_Slot3._CPU.getName());
                Windows.draw(_Slot3._CPU.getNbCore());
                Windows.draw(_Slot3._CPU.getNbProc());
                Windows.draw(_Slot3._CPU._Load);
                Windows.draw(_Slot3._CPU.getpercent()); break;
        case 4: Windows.draw(_Slot4._CPU.getModuleName());
                Windows.draw(_Slot4._CPU.getFrequency());
                Windows.draw(_Slot4._CPU.getMaxFrequency());
                Windows.draw(_Slot4._CPU.getName());
                Windows.draw(_Slot4._CPU.getNbCore());
                Windows.draw(_Slot4._CPU.getNbProc());
                Windows.draw(_Slot4._CPU._Load);
                Windows.draw(_Slot4._CPU.getpercent()); break;
        case 5: Windows.draw(_Slot5._CPU.getModuleName());
                Windows.draw(_Slot5._CPU.getFrequency());
                Windows.draw(_Slot5._CPU.getMaxFrequency());
                Windows.draw(_Slot5._CPU.getName());
                Windows.draw(_Slot5._CPU.getNbCore());
                Windows.draw(_Slot5._CPU.getNbProc());
                Windows.draw(_Slot5._CPU._Load);
                Windows.draw(_Slot5._CPU.getpercent()); break;
        case 6: Windows.draw(_Slot6._CPU.getModuleName());
                Windows.draw(_Slot6._CPU.getFrequency());
                Windows.draw(_Slot6._CPU.getMaxFrequency());
                Windows.draw(_Slot6._CPU.getName());
                Windows.draw(_Slot6._CPU.getNbCore());
                Windows.draw(_Slot6._CPU.getNbProc());
                Windows.draw(_Slot6._CPU._Load);
                Windows.draw(_Slot6._CPU.getpercent()); break;
        case 7: Windows.draw(_Slot7._CPU.getModuleName());
                Windows.draw(_Slot7._CPU.getFrequency());
                Windows.draw(_Slot7._CPU.getMaxFrequency());
                Windows.draw(_Slot7._CPU.getName());
                Windows.draw(_Slot7._CPU.getNbCore());
                Windows.draw(_Slot7._CPU.getNbProc());
                Windows.draw(_Slot7._CPU._Load);
                Windows.draw(_Slot7._CPU.getpercent()); break;
        case 8: Windows.draw(_Slot8._CPU.getModuleName());
                Windows.draw(_Slot8._CPU.getFrequency());
                Windows.draw(_Slot8._CPU.getMaxFrequency());
                Windows.draw(_Slot8._CPU.getName());
                Windows.draw(_Slot8._CPU.getNbCore());
                Windows.draw(_Slot8._CPU.getNbProc());
                Windows.draw(_Slot8._CPU._Load);
                Windows.draw(_Slot8._CPU.getpercent()); break;
    }

}

void CreateWindow::RAMdraw(int stat)
{
    switch (stat) {
        case 1: Windows.draw(_Slot1._RAM.getModuleName());
                Windows.draw(_Slot1._RAM._Load);
                Windows.draw(_Slot1._RAM.getPercent());
                Windows.draw(_Slot1._RAM.getTotalRam());
                Windows.draw(_Slot1._RAM.getUserRam()); break;
        case 2: Windows.draw(_Slot2._RAM.getModuleName());
                Windows.draw(_Slot2._RAM._Load);
                Windows.draw(_Slot2._RAM.getPercent());
                Windows.draw(_Slot2._RAM.getTotalRam());
                Windows.draw(_Slot2._RAM.getUserRam()); break;
        case 3: Windows.draw(_Slot3._RAM.getModuleName());
                Windows.draw(_Slot3._RAM._Load);
                Windows.draw(_Slot3._RAM.getPercent());
                Windows.draw(_Slot3._RAM.getTotalRam());
                Windows.draw(_Slot3._RAM.getUserRam()); break;
        case 4: Windows.draw(_Slot4._RAM.getModuleName());
                Windows.draw(_Slot4._RAM._Load);
                Windows.draw(_Slot4._RAM.getPercent());
                Windows.draw(_Slot4._RAM.getTotalRam());
                Windows.draw(_Slot4._RAM.getUserRam()); break;
        case 5: Windows.draw(_Slot5._RAM.getModuleName());
                Windows.draw(_Slot5._RAM._Load);
                Windows.draw(_Slot5._RAM.getPercent());
                Windows.draw(_Slot5._RAM.getTotalRam());
                Windows.draw(_Slot5._RAM.getUserRam()); break;
        case 6: Windows.draw(_Slot6._RAM.getModuleName());
                Windows.draw(_Slot6._RAM._Load);
                Windows.draw(_Slot6._RAM.getPercent());
                Windows.draw(_Slot6._RAM.getTotalRam());
                Windows.draw(_Slot6._RAM.getUserRam()); break;
        case 7: Windows.draw(_Slot7._RAM.getModuleName());
                Windows.draw(_Slot1._RAM._Load);
                Windows.draw(_Slot7._RAM.getPercent());
                Windows.draw(_Slot7._RAM.getTotalRam());
                Windows.draw(_Slot7._RAM.getUserRam()); break;
        case 8: Windows.draw(_Slot8._RAM.getModuleName());
                Windows.draw(_Slot8._RAM._Load);
                Windows.draw(_Slot8._RAM.getPercent());
                Windows.draw(_Slot8._RAM.getTotalRam());
                Windows.draw(_Slot8._RAM.getUserRam()); break;
    }
}

void CreateWindow::Kerneldraw(int stat)
{
    switch (stat) {
        case 1: Windows.draw(_Slot1._Kernel.getModuleName());
                Windows.draw(_Slot1._Kernel.getKernel());
                Windows.draw(_Slot1._Kernel.getOS()); break;
        case 2: Windows.draw(_Slot2._Kernel.getModuleName());
                Windows.draw(_Slot2._Kernel.getKernel());
                Windows.draw(_Slot2._Kernel.getOS()); break;
        case 3: Windows.draw(_Slot3._Kernel.getModuleName());
                Windows.draw(_Slot3._Kernel.getKernel());
                Windows.draw(_Slot3._Kernel.getOS()); break;
        case 4: Windows.draw(_Slot4._Kernel.getModuleName());
                Windows.draw(_Slot4._Kernel.getKernel());
                Windows.draw(_Slot4._Kernel.getOS()); break;
        case 5: Windows.draw(_Slot5._Kernel.getModuleName());
                Windows.draw(_Slot5._Kernel.getKernel());
                Windows.draw(_Slot5._Kernel.getOS()); break;
        case 6: Windows.draw(_Slot6._Kernel.getModuleName());
                Windows.draw(_Slot6._Kernel.getKernel());
                Windows.draw(_Slot6._Kernel.getOS()); break;
        case 7: Windows.draw(_Slot7._Kernel.getModuleName());
                Windows.draw(_Slot7._Kernel.getKernel());
                Windows.draw(_Slot7._Kernel.getOS()); break;
        case 8: Windows.draw(_Slot8._Kernel.getModuleName());
                Windows.draw(_Slot8._Kernel.getKernel());
                Windows.draw(_Slot8._Kernel.getOS()); break;
    }
        
}

void CreateWindow::Userdraw(int stat)
{
    switch (stat) {
        case 1: Windows.draw(_Slot1._User.getModuleName());
                Windows.draw(_Slot1._User.getHname());
                Windows.draw(_Slot1._User.getUname()); break;
        case 2: Windows.draw(_Slot2._User.getModuleName());
                Windows.draw(_Slot2._User.getHname());
                Windows.draw(_Slot2._User.getUname()); break;
        case 3: Windows.draw(_Slot3._User.getModuleName());
                Windows.draw(_Slot3._User.getHname());
                Windows.draw(_Slot3._User.getUname()); break;
        case 4: Windows.draw(_Slot4._User.getModuleName());
                Windows.draw(_Slot4._User.getHname());
                Windows.draw(_Slot4._User.getUname()); break;
        case 5: Windows.draw(_Slot5._User.getModuleName());
                Windows.draw(_Slot5._User.getHname());
                Windows.draw(_Slot5._User.getUname()); break;
        case 6: Windows.draw(_Slot6._User.getModuleName());
                Windows.draw(_Slot6._User.getHname());
                Windows.draw(_Slot6._User.getUname()); break;
        case 7: Windows.draw(_Slot7._User.getModuleName());
                Windows.draw(_Slot7._User.getHname());
                Windows.draw(_Slot7._User.getUname()); break;
        case 8: Windows.draw(_Slot8._User.getModuleName());
                Windows.draw(_Slot8._User.getHname());
                Windows.draw(_Slot8._User.getUname()); break;
    }
}

void CreateWindow::Networkdraw(int stat)
{
    switch (stat) {
        case 1: Windows.draw(_Slot1._Network.getModuleName());
                Windows.draw(_Slot1._Network.getDown());
                Windows.draw(_Slot1._Network.getUp());
                Windows.draw(_Slot1._Network.getSpeed());
                Windows.draw(_Slot1._Network.getSsid()); break;
        case 2: Windows.draw(_Slot2._Network.getModuleName());
                Windows.draw(_Slot2._Network.getDown());
                Windows.draw(_Slot2._Network.getUp());
                Windows.draw(_Slot2._Network.getSpeed());
                Windows.draw(_Slot2._Network.getSsid()); break;
        case 3: Windows.draw(_Slot3._Network.getModuleName());
                Windows.draw(_Slot3._Network.getDown());
                Windows.draw(_Slot3._Network.getUp());
                Windows.draw(_Slot3._Network.getSpeed());
                Windows.draw(_Slot3._Network.getSsid()); break;
        case 4: Windows.draw(_Slot4._Network.getModuleName());
                Windows.draw(_Slot4._Network.getDown());
                Windows.draw(_Slot4._Network.getUp());
                Windows.draw(_Slot4._Network.getSpeed());
                Windows.draw(_Slot4._Network.getSsid()); break;
        case 5: Windows.draw(_Slot5._Network.getModuleName());
                Windows.draw(_Slot5._Network.getDown());
                Windows.draw(_Slot5._Network.getUp());
                Windows.draw(_Slot5._Network.getSpeed());
                Windows.draw(_Slot5._Network.getSsid()); break;
        case 6: Windows.draw(_Slot6._Network.getModuleName());
                Windows.draw(_Slot6._Network.getDown());
                Windows.draw(_Slot6._Network.getUp());
                Windows.draw(_Slot6._Network.getSpeed());
                Windows.draw(_Slot6._Network.getSsid()); break;
        case 7: Windows.draw(_Slot7._Network.getModuleName());
                Windows.draw(_Slot7._Network.getDown());
                Windows.draw(_Slot7._Network.getUp());
                Windows.draw(_Slot7._Network.getSpeed());
                Windows.draw(_Slot7._Network.getSsid()); break;
        case 8: Windows.draw(_Slot8._Network.getModuleName());
                Windows.draw(_Slot8._Network.getDown());
                Windows.draw(_Slot8._Network.getUp());
                Windows.draw(_Slot8._Network.getSpeed());
                Windows.draw(_Slot8._Network.getSsid()); break;
    }
}