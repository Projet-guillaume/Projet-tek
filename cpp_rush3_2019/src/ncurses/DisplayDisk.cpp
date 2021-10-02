//
// Created by Ugo on 2/1/20.
//

#include "DisplayDisk.hpp"

DisplayDisk::DisplayDisk() : IMonitorDisplay()
{
    _Obj = subwin(stdscr, 4, 50, 21, COLS/5 + 90);
}

DisplayDisk::~DisplayDisk() {};

void DisplayDisk::disk_display()
{
    if (!_state)
        return;

    wmove(_Obj, 1, 1);
    print_rd_color("Vendor: ");
    wprintw(_Obj, _a.getVendor().c_str());
    
    wmove(_Obj, 2, 1);
    print_rd_color("Model: ");
    wprintw(_Obj, _a.getModel().c_str());
    
    box(_Obj, ACS_VLINE, ACS_HLINE);
    
    wmove(_Obj, 0, 23);
    print_rd_color("HDD");
    
    wrefresh(_Obj);
}