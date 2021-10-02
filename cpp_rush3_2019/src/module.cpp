/*
** EPITECH PROJECT, 2020
** NameModule
** File description:
** display
*/

#include "main.hpp"

void display_all()
{
	std::cout << "\t--- NameModule ---\n";
	NameModule p;
	std::cout << "User : " << p.getUser() << std::endl;
	std::cout << "Host : " << p.getHost() << std::endl;

	std::cout << "\n\t--- DataTimeModule ---\n";
	DateTimeModule d;
	std::cout << "Years : " << d.getYears() << std::endl;
	std::cout << "Month : " << d.getMonth() << std::endl;
	std::cout << "Day : " << d.getDay() << std::endl;
	std::cout << "Hours : " << d.getTime() << std::endl;
	std::cout << "Full Date : " << d.getDate() << std::endl;

	std::cout << "\n\t--- KernelModule ---\n";
	KernelModule k;
	std::cout << "Kernel Version : " << k.getKernel() << std::endl;
	std::cout << "Operating System : " << k.getOS() << std::endl;

	std::cout << "\n\t--- RamModule ---\n";
	RamModule j;
    std::cout << "Ram total : " << j.getTotalRam() << "Go"<< std::endl;
    std::cout << "Raw currently used : " << j.getUsedRam() << "Go"<< std::endl;
    std::cout << "Percent of Ram currently used : " << j.getPercentValue() << std::endl;

	std::cout << "\n\t--- CPUModule ---\n";
	CPUModule kk;
	std::cout << "CPU Frequency : " << kk.getFrequency() << std::endl;
	std::cout << "Max Frequency : " << kk.getMaxFrequency() << std::endl;
	std::cout << "CPU Name : " << kk.getName() << std::endl;
	std::cout << "Nb of Core : " << kk.getNbCore() << std::endl;
	std::cout << "Nb of current processus : " << kk.getNbProc() << std::endl;
	std::cout << "Utilisation : " << kk.getPercent() << std::endl;
	std::cout << "CPU Temperature : " << kk.getCputemp() << "°c"<< std::endl;

    std::cout << "\n\t--- NetworkModule ---\n";
	//if (system("nmcli general status | grep -c disabled > /dev/null 2>&1")) {
        NetworkModule bb;
		bb.update();
        std::cout << "Receive bytes : " << bb.getByteDown() << std::endl;
        std::cout << "Send bytes : " << bb.getByteUp() << std::endl;
        std::cout << "Speed : " << bb.getSpeed() << std::endl;
        std::cout << "SSID Name : " << bb.getName() << std::endl;
    //}
	//else {
	//    std::cout << "Not connected" << std::endl;
	//}

	std::cout << "\n\t---DiskModule---\n";
	Disk mm;
    std::cout << "Disk Vendor : " << mm.getVendor();
    std::cout << "Disk Model : " << mm.getModel();
    std::cout << "Size : " << mm.getTotal() << std::endl;
    std::cout << "Used : " << mm.getUsed() << std::endl;
    std::cout << "Avail : " << mm.getAvail() << std::endl;
    std::cout << "Use% : " << mm.getPercent() << std::endl;

}