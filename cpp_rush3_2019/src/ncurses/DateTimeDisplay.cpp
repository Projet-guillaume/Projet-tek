/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** datetimedisplay
*/

#include "DateTimeDisplay.hpp"

DateTimeDisplay::DateTimeDisplay() : IMonitorDisplay()
{
    _Obj = subwin(stdscr, 3, 50, 17, COLS/5 - 10);
}

DateTimeDisplay::~DateTimeDisplay()
{}

void DateTimeDisplay::print_date()
{
    if (_state == false)
        return;
    a.update();

    wmove(_Obj, 1, 1);
    print_rd_color("Date and Hour: ");
    wprintw(_Obj, a.getDate().c_str());
    wprintw(_Obj, " ");
    wprintw(_Obj, a.getTime().c_str());
   
    box(_Obj, ACS_VLINE, ACS_HLINE);
    
    wmove(_Obj, 0,19);
    print_rd_color("DATE & TIME");
    
    wrefresh(_Obj);
}