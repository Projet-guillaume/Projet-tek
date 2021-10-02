/*
** Created by flow on 01/02/2020.
** EPITECH PROJECT, 2020
*/

#include "CreateWindow.hpp"
#include <cstdlib>
#include <unistd.h>

void refresh_interface(CreateWindow *Win, sf::Sprite sp)
{
    Win->Windows.clear();
    Win->Windows.draw(Win->sprite);
    switch (Win->_Slot1.getStatus()) {
        case 0: Win->Windows.draw(Win->_Slot1.getSpriteAdd()); break;
        case 1: Win->Windows.draw(Win->_Slot1.getSpriteMod());
        Win->CPUdraw(1); break;
        case 2: Win->Windows.draw(Win->_Slot1.getSpriteMod());
        Win->RAMdraw(1); break;
        case 3: Win->Windows.draw(Win->_Slot1.getSpriteMod());
        Win->Userdraw(1); break;
        case 4: Win->Windows.draw(Win->_Slot1.getSpriteMod());
        Win->Networkdraw(1); break;
        case 5: Win->Windows.draw(Win->_Slot1.getSpriteMod());
        Win->Datedraw(1); break;
        case 6: Win->Windows.draw(Win->_Slot1.getSpriteMod());
        Win->Kerneldraw(1); break;
    } switch (Win->_Slot2.getStatus()) {
        case 0: Win->Windows.draw(Win->_Slot2.getSpriteAdd()); break;
        case 1: Win->Windows.draw(Win->_Slot2.getSpriteMod());
        Win->CPUdraw(2); break;
        case 2: Win->Windows.draw(Win->_Slot2.getSpriteMod());
        Win->RAMdraw(2); break;
        case 3: Win->Windows.draw(Win->_Slot2.getSpriteMod());
        Win->Userdraw(2); break;
        case 4: Win->Windows.draw(Win->_Slot2.getSpriteMod());
        Win->Networkdraw(2); break;
        case 5: Win->Windows.draw(Win->_Slot2.getSpriteMod());
        Win->Datedraw(2); break;
        case 6: Win->Windows.draw(Win->_Slot2.getSpriteMod());
        Win->Kerneldraw(2); break;
    } switch (Win->_Slot3.getStatus()) {
        case 0: Win->Windows.draw(Win->_Slot3.getSpriteAdd()); break;
        case 1: Win->Windows.draw(Win->_Slot3.getSpriteMod());
        Win->CPUdraw(3); break;
        case 2: Win->Windows.draw(Win->_Slot3.getSpriteMod());
        Win->RAMdraw(3); break;
        case 3: Win->Windows.draw(Win->_Slot3.getSpriteMod());
        Win->Userdraw(3); break;
        case 4: Win->Windows.draw(Win->_Slot3.getSpriteMod());
        Win->Networkdraw(3); break;
        case 5: Win->Windows.draw(Win->_Slot3.getSpriteMod());
        Win->Datedraw(3); break;
        case 6: Win->Windows.draw(Win->_Slot3.getSpriteMod());
        Win->Kerneldraw(3); break;
    } switch (Win->_Slot4.getStatus()) {
        case 0: Win->Windows.draw(Win->_Slot4.getSpriteAdd()); break;
        case 1: Win->Windows.draw(Win->_Slot4.getSpriteMod());
        Win->CPUdraw(4); break;
        case 2: Win->Windows.draw(Win->_Slot4.getSpriteMod());
        Win->RAMdraw(4); break;
        case 3: Win->Windows.draw(Win->_Slot4.getSpriteMod());
        Win->Userdraw(4); break;
        case 4: Win->Windows.draw(Win->_Slot4.getSpriteMod());
        Win->Networkdraw(4); break;
        case 5: Win->Windows.draw(Win->_Slot4.getSpriteMod());
        Win->Datedraw(4); break;
        case 6: Win->Windows.draw(Win->_Slot4.getSpriteMod());
        Win->Kerneldraw(4); break;
    } switch (Win->_Slot5.getStatus()) {
        case 0: Win->Windows.draw(Win->_Slot5.getSpriteAdd()); break;
        case 1: Win->Windows.draw(Win->_Slot5.getSpriteMod());
        Win->CPUdraw(5); break;
        case 2: Win->Windows.draw(Win->_Slot5.getSpriteMod());
        Win->RAMdraw(5); break;
        case 3: Win->Windows.draw(Win->_Slot5.getSpriteMod());
        Win->Userdraw(5); break;
        case 4: Win->Windows.draw(Win->_Slot5.getSpriteMod());
        Win->Networkdraw(5); break;
        case 5: Win->Windows.draw(Win->_Slot5.getSpriteMod());
        Win->Datedraw(5); break;
        case 6: Win->Windows.draw(Win->_Slot5.getSpriteMod());
        Win->Kerneldraw(5); break;
    } switch (Win->_Slot6.getStatus()) {
        case 0: Win->Windows.draw(Win->_Slot6.getSpriteAdd()); break;
        case 1: Win->Windows.draw(Win->_Slot6.getSpriteMod());
        Win->CPUdraw(6); break;
        case 2: Win->Windows.draw(Win->_Slot6.getSpriteMod());
        Win->RAMdraw(6); break;
        case 3: Win->Windows.draw(Win->_Slot6.getSpriteMod());
        Win->Userdraw(6); break;
        case 4: Win->Windows.draw(Win->_Slot6.getSpriteMod());
        Win->Networkdraw(6); break;
        case 5: Win->Windows.draw(Win->_Slot6.getSpriteMod());
        Win->Datedraw(6); break;
        case 6: Win->Windows.draw(Win->_Slot6.getSpriteMod());
        Win->Kerneldraw(6); break;
    } switch (Win->_Slot7.getStatus()) {
        case 0: Win->Windows.draw(Win->_Slot7.getSpriteAdd()); break;
        case 1: Win->Windows.draw(Win->_Slot7.getSpriteMod());
        Win->CPUdraw(7); break;
        case 2: Win->Windows.draw(Win->_Slot7.getSpriteMod());
        Win->RAMdraw(7); break;
        case 3: Win->Windows.draw(Win->_Slot7.getSpriteMod());
        Win->Userdraw(7); break;
        case 4: Win->Windows.draw(Win->_Slot7.getSpriteMod());
        Win->Networkdraw(7); break;
        case 5: Win->Windows.draw(Win->_Slot7.getSpriteMod());
        Win->Datedraw(7); break;
        case 6: Win->Windows.draw(Win->_Slot7.getSpriteMod());
        Win->Kerneldraw(7); break;
    } switch (Win->_Slot8.getStatus()) {
        case 0: Win->Windows.draw(Win->_Slot8.getSpriteAdd()); break;
        case 1: Win->Windows.draw(Win->_Slot8.getSpriteMod());
        Win->CPUdraw(8); break;
        case 2: Win->Windows.draw(Win->_Slot8.getSpriteMod());
        Win->RAMdraw(8); break;
        case 3: Win->Windows.draw(Win->_Slot8.getSpriteMod());
        Win->Userdraw(8); break;
        case 4: Win->Windows.draw(Win->_Slot8.getSpriteMod());
        Win->Networkdraw(8); break;
        case 5: Win->Windows.draw(Win->_Slot8.getSpriteMod());
        Win->Datedraw(8); break;
        case 6: Win->Windows.draw(Win->_Slot8.getSpriteMod());
        Win->Kerneldraw(8); break;
    }
    Win->Windows.display();
}

int loop_interface(CreateWindow *Win)
{
    sf::Event event;
    sf::Texture tx;
    sf::Sprite sp;
    sf::Vector2f ve = {0, 0};

    tx.loadFromFile("src/graph/res/add.png");
    sp.setTexture(tx);
    sp.setPosition(ve);
    refresh_interface(Win, sp);
    while (Win->Windows.isOpen()) {
        usleep(999990);
        while (Win->Windows.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                Win->Windows.close();
        }
        Win->_Slot1.a.update();
        Win->_Slot1.initCPU();
        Win->_Slot2.R.update();
        Win->_Slot2.initRAM();
        Win->_Slot3.na.update();
        Win->_Slot3.initUser();
        Win->_Slot4.N.update();
        Win->_Slot4.initNetwork();
        Win->_Slot5.T.update();
        Win->_Slot5.initDate();
        Win->_Slot6.K.update();
        Win->_Slot6.initKernel();
        refresh_interface(Win, sp);
    } return 0;
}

int sfml_starter()
{
    CreateWindow *Win = new CreateWindow();

    loop_interface(Win);
    return 0;
}