/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#ifndef DISPLAYRAM_HPP_
# define DISPLAYRAM_HPP_

#include "IMonitorDisplay.hpp"

class DisplayRAM : public IMonitorDisplay {
	public:
		DisplayRAM();
		~DisplayRAM();
        void Print_RAM();
	private:
        RamModule _a;
};

#endif /* !DISPLAYRAM_HPP_ */
