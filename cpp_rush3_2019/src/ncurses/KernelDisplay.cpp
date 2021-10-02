/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#include "KernelDisplay.hpp"

KernelDisplay::KernelDisplay() : IMonitorDisplay()
{
    _Obj = subwin(stdscr, 4, 50, 20, COLS/5 - 10);
}

KernelDisplay::~KernelDisplay()
{}

void KernelDisplay::Print_Kernel_Value()
{
    if (!_state)
        return;

    wmove(_Obj, 1, 1);
    print_rd_color("Kernel Version: ");
    wprintw(_Obj, a.getKernel().c_str());
    
    wmove(_Obj, 2, 1);
    print_rd_color("OS version: ");
    wprintw(_Obj, a.getOS().c_str());
    
    box(_Obj, ACS_VLINE, ACS_HLINE);

    wmove(_Obj, 0, 24);
    print_rd_color("OS");

    wrefresh(_Obj);
}