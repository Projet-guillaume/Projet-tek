/*
** EPITECH PROJECT, 2020
** NameModule
** File description:
** NameModule
*/

#include "NameModule.hpp"

NameModule::NameModule()
{
	_userName = getenv("USER");
	_hostName = getenv("HOSTNAME");
}

NameModule::~NameModule()
{
}

void NameModule::update()
{
	_userName = getenv("USER");
	_hostName = getenv("HOSTNAME");
}

std::string NameModule::getHost() const
{
	return _hostName;
}

std::string NameModule::getUser() const
{
	return _userName;
}