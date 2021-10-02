/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

class IMonitorModule {
	public:
		virtual void update() = 0;
};
