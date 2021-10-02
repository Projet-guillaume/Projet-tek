/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#ifndef IMONITORDISPLAY_HPP_
# define IMONITORDISPLAY_HPP_

#include "CPUModule.hpp"
#include "KernelModule.hpp"
#include "disk.hpp"
#include "DateTimeModule.hpp"
#include "NameModule.hpp"
#include "NetworkModule.hpp"
#include "RamModule.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string.h>
#include <unistd.h>
#include <ncurses.h>

static int _X = 0;
static int _Y = 0;

class IMonitorDisplay {
	public:
        IMonitorDisplay();
        ~IMonitorDisplay() {};
        
        void print_rd_color(std::string str);
        void switch_state();
        void setState(bool state);
        void make_graph(int val, int max);
        void cleanwin();
        void switch_rdcolor();
protected:    
        int CHAR_GREEN;
        int CHAR_MAGENTA;
        int CHAR_RED;
        int CHAR_WHITE;
        int CHAR_YELLOW;
        int CHAR_BLACK;
        bool _state;
        bool rd_color;
        WINDOW *_Obj;
};

#endif /* !IMONITORDISPLAY_HPP_ */