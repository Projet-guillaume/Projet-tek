/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#ifndef DISPLAYCPU_HPP_
# define DISPLAYCPU_HPP_

#include "IMonitorDisplay.hpp"

class DisplayCPU : public IMonitorDisplay{
	public:
		DisplayCPU();
		~DisplayCPU();
        void cpu_display();
	private:
        CPUModule _a;
};

#endif /* !DISPLAYCPU_HPP_ */
