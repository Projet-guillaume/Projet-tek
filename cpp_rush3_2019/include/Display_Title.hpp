/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#ifndef DISPLAY_CLASS_HPP_
# define DISPLAY_CLASS_HPP_

#include "IMonitorDisplay.hpp"

class Title_Class : public IMonitorDisplay {
	public:
		Title_Class(std::string path = "title.txt");
		~Title_Class();
        void Display_Title();	
	private:
        std::string _Title;
};

#endif /* !DISPLAY_CLASS_HPP_ */