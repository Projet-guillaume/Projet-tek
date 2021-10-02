/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#include "NCurses.hpp"

NCurses::NCurses() : IMonitorDisplay()
{
    initscr();
    clear();
    getmaxyx(stdscr, _Y, _X);
    
    _title = Title_Class();
    _usr = UserDisplay();
    _krnl = KernelDisplay();
    _dateTime = DateTimeDisplay();
    _cpu = DisplayCPU();
    _ram = DisplayRAM();
    _network = DisplayNetwork();
    _disk = DisplayDisk();
    
    if (!has_colors()) {
        wprintw(_Obj, "No colors support for graph");
        return;
    }
    start_color();
    run();
};

void NCurses::disp_all()
{
    _title.Display_Title();
    _cpu.cpu_display();
    _disk.disk_display();
    _usr.Print_User_Value();
    _krnl.Print_Kernel_Value();
    _dateTime.print_date();
    _ram.Print_RAM();
    _network.Print_Network();
}

void NCurses::check_size()
{
    bool state = true;

    if (_X < 200 || _Y < 30)
        state = false;
    
    _title.setState(state);
    _cpu.setState(state);
    _usr.setState(state);
    _krnl.setState(state);
    _disk.setState(state);  
    _dateTime.setState(state);
    _ram.setState(state);
    _network.setState(state);
}

bool NCurses::getEntry()
{
    int ch;
    
    ch = getch();
    switch (ch) {
        case 'c' :
            _cpu.switch_state();
            break;
        case 'u' :
            _usr.switch_state();
            break;
        case 'k' :
            _krnl.switch_state();
            break;
        case 'd' :
            _dateTime.switch_state();
            break;
        case 'r':
            _ram.switch_state();
            break;
        case 'n' :
            _network.switch_state();
            break;
        case 'h' :
            _disk.switch_state();
            break;
        case 't' :
            _title.switch_rdcolor();
            _network.switch_rdcolor();
            _ram.switch_rdcolor();
            _cpu.switch_rdcolor();
            _dateTime.switch_rdcolor();
            _disk.switch_rdcolor();
            _krnl.switch_rdcolor();
            _usr.switch_rdcolor();
            break;
        case 'a' :
            _network.switch_state();
            _ram.switch_state();
            _disk.switch_state();
            _cpu.switch_state();
            _dateTime.switch_state();
            _krnl.switch_state();
            _usr.switch_state();
            break;
        case 27 :
            return true;
        case 4 :
            return true;
        default :
            break;
    }
    return false;
}

static void monitorSize(int sig)
{
    getmaxyx(stdscr, _Y, _X);
}

void NCurses::run()
{
    bool end = false;
    int ch;

    signal(SIGWINCH, monitorSize);
    keypad(stdscr, true);
    nodelay(stdscr, true);
    while (true) {
        curs_set(0);
        noecho();
        end = getEntry();
        if (end) {
            endwin();
            break;
        }
        check_size();
        disp_all();
        refresh();
        sleep(1);
    }
}