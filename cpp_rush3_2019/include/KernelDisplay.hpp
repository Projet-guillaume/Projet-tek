/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#ifndef KERNELDISPLAY_HPP_
# define KERNELDISPLAY_HPP_

#include "IMonitorDisplay.hpp"

class KernelDisplay : public IMonitorDisplay {
	public:
		KernelDisplay();
		~KernelDisplay();
        void Print_Kernel_Value();
	private:
        KernelModule a;

};

#endif /* !KERNELDISPLAY_HPP_ */
