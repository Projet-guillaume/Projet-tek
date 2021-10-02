/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#include "DisplayCPU.hpp"

DisplayCPU::DisplayCPU() : IMonitorDisplay()
{
    _Obj = subwin(stdscr, 9, 50, 13, COLS/5 + 40);
}

DisplayCPU::~DisplayCPU()
{}

void DisplayCPU::cpu_display()
{
    if (!_state)
        return;

    _a.update();
    wclear(_Obj);

    wmove(_Obj, 1, 1);
    print_rd_color("Name: ");
    wrefresh(_Obj);
    wprintw(_Obj, _a.getName().c_str());
    
    wmove(_Obj, 2, 1);
    print_rd_color("Nb of cores: ");
    wprintw(_Obj, _a.getNbCore().c_str());
    
    wmove(_Obj, 3, 1);
    print_rd_color("Max Frequency: ");
    wprintw(_Obj, _a.getMaxFrequency().c_str());
    print_rd_color("MHz");
    
    wmove(_Obj, 4, 1);
    print_rd_color("Current Frequency: ");
    wprintw(_Obj, _a.getFrequency().c_str());
    print_rd_color("MHz");
    
    wmove(_Obj, 5, 1);
    make_graph(std::stoi(_a.getFrequency()), std::stoi(_a.getMaxFrequency()));
    
    wmove(_Obj, 6, 1);
    print_rd_color("Current Processus: ");
    wprintw(_Obj, _a.getNbProc().c_str());
    
    wmove(_Obj, 7, 1);
    print_rd_color("CPU Temperature: ");
    wprintw(_Obj, _a.getCputemp().c_str());
    print_rd_color("C");
    
    box(_Obj, ACS_VLINE, ACS_HLINE);

    wmove(_Obj, 0,22);
    print_rd_color("CPU");

    wrefresh(_Obj);   
}