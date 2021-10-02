/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#include "DisplayRAM.hpp"

DisplayRAM::DisplayRAM()  : IMonitorDisplay()
{
    _Obj = subwin(stdscr, 6, 50, 22, COLS/5 + 40);
}

DisplayRAM::~DisplayRAM()
{}

void DisplayRAM::Print_RAM()
{
    if (!_state)
        return;

    _a.update();
    wclear(_Obj);

    wmove(_Obj, 1, 1);
    print_rd_color("Ram total: ");
    wprintw(_Obj, _a.getTotalRam().c_str());
    
    wmove(_Obj, 2, 1);
    print_rd_color("Ram used: ");
    wprintw(_Obj, _a.getUsedRam().c_str());
    
    wmove(_Obj, 3, 1);
    print_rd_color("Utilisation: ");
    
    _a.update();
    
    wmove(_Obj, 4, 1);
    make_graph(std::stoi(_a.getUsedRam()), std::stoi(_a.getTotalRam()));
    
    box(_Obj, ACS_VLINE, ACS_HLINE);
    
    wmove(_Obj, 0, 22);
    print_rd_color("RAM");
    
    wrefresh(_Obj);
}