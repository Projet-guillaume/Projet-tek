/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#pragma once
#include "IMonitorModule.hpp"

class NameModule : public IMonitorModule{
	public:
		NameModule();
		~NameModule();

		void update() override;
		std::string getHost() const;
		std::string getUser() const;
	protected:
		std::string _userName;
		std::string _hostName;
};
