/*
** EPITECH PROJECT, 2020
** CPUModule
** File description:
** CPUModule
*/

#include "CPUModule.hpp"

CPUModule::CPUModule()
{
	//NB CORE
	int i = 0;
	FILE *neo = new FILE;
	neo = popen("nproc", "r");
	char buff[500] = { 0 };
	fread(buff, sizeof buff, 1, neo);
	_nbCore = buff;
	_nbCore.replace(_nbCore.length() - 1, 1, "\0");
	pclose(neo);
	//CPU NAME
	neo = popen("lscpu | grep 'Model name'", "r");
	fread(buff, sizeof buff, 1, neo);
	_name = buff;
	_name.erase(0, 12);
	while ((_name[i] < 'a' || _name[i] > 'z') && (_name[i] < 'A' || _name[i] > 'Z'))
		i++;
	_name.erase(0, i);
	i = 0;
	_name.replace(_name.length() - 1, 1, "\0");
	pclose(neo);
	//CPU FREQUENCY
	for(int r = 0; r < 100 ; r++)
		buff[r] = '\0';
	neo = popen("lscpu | grep 'CPU MHz'", "r");
	fread(buff, sizeof buff, 1, neo);
	_frequency = buff;
	_frequency.erase(0, 12);
	while (_frequency[i] < '0' || _frequency[i] > '9')
		i++;
	_frequency.erase(0, i);
	i = 0;
	_frequency.replace(_frequency.length() - 1, 1, "\0");
	pclose(neo);
	//CPU MAXFREQUENCY
	for(int r = 0; r < 100 ; r++)
		buff[r] = '\0';
	neo = popen("lscpu | grep 'CPU max MHz'", "r");
	fread(buff, sizeof buff, 1, neo);
	_maxFrequency = buff;
	_maxFrequency.erase(0, 12);
	while (_maxFrequency[i] < '0' || _maxFrequency[i] > '9')
		i++;
	_maxFrequency.erase(0, i);
	i = 0;
	_maxFrequency.replace(_maxFrequency.length() - 1, 1, "\0");
	pclose(neo);
	for(int r = 0; r < 100 ; r++)
		buff[r] = '\0';
	//PROCESS RUN
	neo = popen("ps -eo pid | wc -l", "r");
	fread(buff, sizeof buff, 1, neo);
	_procInTime = buff;
	_procInTime.replace(_procInTime.length() - 1, 1, "\0");
    pclose(neo);
	int tmp = stoi(_frequency) * 100 / stoi(_maxFrequency);
	_perCent = std::to_string(tmp);
	//PROCESS TEMPERATURE
    neo = popen("cat /sys/class/thermal/thermal_zone0/temp", "r");
    fread(buff, sizeof buff, 1, neo);
    std::string tempo = buff;
    _cputemp = tempo.substr(0,2);
    pclose(neo);
}

CPUModule::~CPUModule()
{
}

void CPUModule::update()
{
	int i = 0;
	FILE *neo = new FILE;
	neo = popen("lscpu | grep 'CPU MHz'", "r");
	char bufff[100] = { 0 };
	fread(bufff, sizeof bufff, 1, neo);
	_frequency = bufff;
	_frequency.erase(0, 12);
	while (_frequency[i] < '0' || _frequency[i] > '9')
		i++;
	_frequency.erase(0, i);
	_frequency.replace(_frequency.length() - 1, 1, "\0");
	for(int r = 0; r < 100 ; r++)
		bufff[r] = '\0';
	pclose(neo);
	neo = popen("ps -eo pid | wc -l", "r");
	fread(bufff, sizeof bufff, 1, neo);
	_procInTime = bufff;
	_procInTime.replace(_procInTime.length() - 1, 1, "\0");
	pclose(neo);
	_perCent = stoi(_frequency) * 100 / stoi(_maxFrequency);
    //PROCESS TEMPERATURE
    neo = popen("cat /sys/class/thermal/thermal_zone0/temp", "r");
    fread(bufff, sizeof bufff, 1, neo);
    std::string tempo = bufff;
    _cputemp = tempo.substr(0,2);
    pclose(neo);
}