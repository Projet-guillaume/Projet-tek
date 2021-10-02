/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#pragma once

#include "IMonitorModule.hpp"

class NetworkModule : public IMonitorModule {
	public:
		NetworkModule();
		~NetworkModule();
        void update();
        std::string getByteDown() const;
        std::string getByteUp() const;
        std::string getSpeed() const;
        std::string getName() const;
        bool getCo() const;
        bool checkConnection();
	private:
        bool _coState;
        std::string _byteDown;
        std::string _byteUp;
        std::string _Speed;
        std::string _Name;
};
