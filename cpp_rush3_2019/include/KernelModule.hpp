/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#pragma once
#include "IMonitorModule.hpp"

class KernelModule : public IMonitorModule {
	public:
		KernelModule();
		~KernelModule();

		void update() override;

		std::string getOS() const;
		std::string getKernel() const;
	protected:
		std::string _info;
		std::string _OS;
		std::string _Kernel;
};
