/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#ifndef USERDISPLAY_HPP_
#define USERDISPLAY_HPP_

#include "IMonitorDisplay.hpp"

class UserDisplay : public IMonitorDisplay {
	public:
		UserDisplay();
		~UserDisplay();
        void Print_User_Value();
	private:
        NameModule a;
};

#endif /* !USERDISPLAY_HPP_ */
