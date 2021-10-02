/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#include "KernelModule.hpp"

KernelModule::KernelModule()
{
	FILE *neo = new FILE;
	neo = popen("hostnamectl", "r");
	char buf[1024] = { 0 };
    fread(buf, sizeof buf, 1, neo);
	_info = buf;
	size_t tmp = _info.find("\n", _info.find("Operating System:"));
	tmp -= _info.find("Operating System:");

	_OS = _info.substr(_info.find("Operating System:"), tmp);
	_OS.replace(0, 18, "");
	tmp = _info.find("\n", _info.find("Kernel"));
	tmp -= _info.find("Kernel:");
	_Kernel = _info.substr(_info.find("Kernel"), tmp);
	_Kernel.replace(0, 8, "");
	pclose(neo);
}

KernelModule::~KernelModule()
{
}

void KernelModule::update()
{
}

std::string KernelModule::getOS() const
{
	return _OS;
}

std::string KernelModule::getKernel() const
{
	return _Kernel;
}