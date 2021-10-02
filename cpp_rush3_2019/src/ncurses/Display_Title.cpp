/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#include "Display_Title.hpp"

Title_Class::Title_Class(std::string title) : IMonitorDisplay()
{
    std::ifstream File(title);
    std::string buff;

    if (File.is_open()) {
        while (getline(File, buff))
            _Title += buff + "\n";
        File.close();
    }
    _Obj = subwin(stdscr, 12, 125, 1, COLS/5);
}

Title_Class::~Title_Class() {}

void Title_Class::Display_Title()
{
    if (!_state)
        return;

    if (rd_color) {
        wclear(_Obj);
        wmove(_Obj, 0, 0);
        print_rd_color(_Title);
        box(_Obj, ACS_VLINE, ACS_HLINE);
        wrefresh(_Obj);
    }
}