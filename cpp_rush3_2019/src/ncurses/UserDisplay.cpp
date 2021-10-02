/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#include "UserDisplay.hpp"

UserDisplay::UserDisplay()  : IMonitorDisplay()
{
    _Obj = subwin(stdscr, 4, 50, 13, COLS/5 - 10);
}

UserDisplay::~UserDisplay()
{}

void UserDisplay::Print_User_Value()
{
    if (!_state)
        return;

    wmove(_Obj, 1, 1);
    print_rd_color("HostName: ");
    wprintw(_Obj, a.getHost().c_str());

    wmove(_Obj, 2, 1);
    print_rd_color("UserName: ");
    wprintw(_Obj, a.getUser().c_str());
    
    box(_Obj, ACS_VLINE, ACS_HLINE);
    
    wmove(_Obj, 0, 22);
    print_rd_color("USER");
    
    wrefresh(_Obj);
}