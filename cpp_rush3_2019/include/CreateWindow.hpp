/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#ifndef CREATEWINDOW_HPP_
# define CREATEWINDOW_HPP_
#include <vector>
#include <iostream>
//sfml
#include "Module.hpp"

class CreateWindow {
	public:
		CreateWindow();
		~CreateWindow();
		void setModule();
		void Datedraw(int stat);
		void CPUdraw(int stat);
		void RAMdraw(int stat);
		void Kerneldraw(int stat);
		void Userdraw(int stat);
		void Networkdraw(int stat);
		/*Win*/
		DateTimeModule ptr_date;
		sf::RenderWindow Windows;
		sf::Texture texture;
		sf::Sprite sprite;
		Module _Slot1;
		Module _Slot2;
		Module _Slot3;
		Module _Slot4;
		Module _Slot5;
		Module _Slot6;
		Module _Slot7;
		Module _Slot8;

};

#endif /* !CREATEWINDOW_HPP_ */
