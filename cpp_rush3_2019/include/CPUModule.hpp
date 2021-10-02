/*
** EPITECH PROJECT, 2020
** CPUModule
** File description:
** CPUModule
*/

#pragma once

#include "IMonitorModule.hpp"

class CPUModule : public IMonitorModule {
	public:
		CPUModule();
		~CPUModule();

		void update() override;
		std::string getName() const { return _name; }
		std::string getNbCore() const { return _nbCore; }
		std::string getFrequency() const { return _frequency; }
		std::string getMaxFrequency() const { return _maxFrequency; }
		std::string getNbProc() const { return _procInTime; }
		std::string getPercent() const { return _perCent; }
		std::string getCputemp() const { return _cputemp; }
	private:
		std::string _nbCore;
		std::string _name;
		std::string _frequency;
		std::string _maxFrequency;
		std::string  _procInTime;
		std::string _perCent;
		std::string _cputemp;
};
