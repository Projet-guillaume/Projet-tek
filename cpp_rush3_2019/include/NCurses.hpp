//
// Created by Ugo on 2/1/20.
//

#ifndef CPP_RUSH3_2019_NCURSES_HPP
#define CPP_RUSH3_2019_NCURSES_HPP

#include "Display_Title.hpp"
#include "UserDisplay.hpp"
#include "KernelDisplay.hpp"
#include "DateTimeDisplay.hpp"
#include "DisplayCPU.hpp"
#include "DisplayRAM.hpp"
#include "DisplayNetwork.hpp"
#include "DisplayDisk.hpp"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

class NCurses : public IMonitorDisplay {
public:
    NCurses();
    ~NCurses() {};
protected:
    void run();
    bool getEntry();
    void disp_all();
    void check_size();
    Title_Class _title;
    UserDisplay _usr;
    KernelDisplay _krnl;
    DateTimeDisplay _dateTime;
    DisplayCPU _cpu;
    DisplayRAM _ram;
    DisplayNetwork _network;
    DisplayDisk _disk;
    WINDOW *_win;
};

#endif //CPP_RUSH3_2019_NCURSES_HPP
