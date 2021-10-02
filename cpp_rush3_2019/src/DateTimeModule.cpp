/*
** EPITECH PROJECT, 2020
** DateTimeModule
** File description:
** DateTimeModule
*/

#include "DateTimeModule.hpp"

DateTimeModule::DateTimeModule()
{
	_Years = setYears();
	_Month = setMonth();
	_Day = setDay();
	_Date = setDate();
	_Time = setTime();
}

DateTimeModule::~DateTimeModule()
{
}

void DateTimeModule::update()
{
	_Years = setYears();
	_Month = setMonth();
	_Day = setDay();
	_Date = setDate();
	_Time = setTime();
}

std::string DateTimeModule::getYears() const
{
	return _Years;
}

std::string DateTimeModule::getMonth() const
{
	return _Month;
}

std::string DateTimeModule::getDay() const
{
	return _Day;
}

std::string DateTimeModule::getDate() const
{
	return _Date;
}

std::string DateTimeModule::getTime() const
{
	return _Time;
}

std::string DateTimeModule::setYears()
{
	time_t now = time(0);
	struct tm tstruct;
	char buff[80];
	
	tstruct = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y", &tstruct);

	return buff;
}

std::string DateTimeModule::setMonth()
{
	time_t now = time(0);
	struct tm tstruct;
	char buff[80];
	
	tstruct = *localtime(&now);
	strftime(buff, sizeof(buff), "%m", &tstruct);

	return buff;
}

std::string DateTimeModule::setDay()
{
	time_t now = time(0);
	struct tm tstruct;
	char buff[80];
	
	tstruct = *localtime(&now);
	strftime(buff, sizeof(buff), "%d", &tstruct);

	return buff;
}

std::string DateTimeModule::setDate()
{
	time_t now = time(0);
	struct tm tstruct;
	char buff[80];
	
	tstruct = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y-%m-%d", &tstruct);

	return buff;
}

std::string DateTimeModule::setTime()
{
	time_t now = time(0);
	struct tm tstruct;
	char buff[80];
	
	tstruct = *localtime(&now);
	strftime(buff, sizeof(buff), "%X", &tstruct);

	return buff;
}