/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#pragma once

#include "IMonitorModule.hpp"

class RamModule : public IMonitorModule {
	public:
		RamModule();
		~RamModule();
        void update();
                std::string getUsedRam() const;
                std::string getTotalRam() const;
                std::string getPercentValue() const;
	private:
                std::string _Used;
                std::string _Total;
                std::string _Perc_Used;
};
