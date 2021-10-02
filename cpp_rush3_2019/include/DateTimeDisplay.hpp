/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#ifndef DATETIMEDISPLAY_HPP_
# define DATETIMEDISPLAY_HPP_

#include "IMonitorDisplay.hpp"

class DateTimeDisplay : public IMonitorDisplay {
	public:
		DateTimeDisplay();
		~DateTimeDisplay();
        void print_date();
	private:
        DateTimeModule a;
};

#endif /* !DATETIMEDISPLAY_HPP_ */
