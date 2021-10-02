/*
** EPITECH PROJECT, 2020
** DateTimeModule
** File description:
** DateTimeModule
*/

#pragma once
#include "IMonitorModule.hpp"

class DateTimeModule : public IMonitorModule {
	public:
		DateTimeModule();
		~DateTimeModule();

		void update() override;
		
		std::string getDate() const;
		std::string getTime() const;
		std::string getYears() const;
		std::string getMonth() const;
		std::string getDay() const;
		
		std::string setYears();
		std::string setMonth();
		std::string setDay();
		std::string setDate();
		std::string setTime();
	private:
		std::string _Years;
		std::string _Month;
		std::string _Day;
		std::string _Date;
		std::string _Time;
};
