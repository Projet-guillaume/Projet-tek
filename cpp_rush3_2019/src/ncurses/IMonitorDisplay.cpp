//
// Created by Ugo on 2/2/20.
//


#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay() : _Obj(), _state(true), rd_color(true)
{
    start_color();
    CHAR_GREEN = 1;
    CHAR_MAGENTA = 2;
    CHAR_RED = 3;
    CHAR_WHITE = 4;
    CHAR_YELLOW = 5;
    CHAR_BLACK = 6;
}

void IMonitorDisplay::switch_rdcolor()
{
    rd_color = !rd_color;
}

void IMonitorDisplay::print_rd_color(std::string str)
{
    if (!rd_color) {
        wprintw(_Obj, str.c_str());
        return;
    }

    init_pair(CHAR_GREEN, COLOR_GREEN, COLOR_BLACK);
    init_pair(CHAR_RED, COLOR_RED, COLOR_BLACK);
    init_pair(CHAR_YELLOW, COLOR_YELLOW, COLOR_BLACK);
    init_pair(CHAR_MAGENTA, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(CHAR_WHITE, COLOR_CYAN, COLOR_BLACK);
    init_pair(CHAR_BLACK, COLOR_BLUE, COLOR_BLACK);

    std::srand(std::time(nullptr));
    for (int i = 0; i != str.size(); i++) {
        int rd = std::rand()%6 + 1;
        if (str.at(i) == ' ' || str.at(i) == '\n') {
            waddch(_Obj, str.at(i));
        } else {
            wattron(_Obj, COLOR_PAIR(rd));
            waddch(_Obj, str.at(i));
            wattroff(_Obj, COLOR_PAIR(rd));
        }
    }
}

void IMonitorDisplay::switch_state()
{
    _state = !_state;
    if (!_state)
        cleanwin();
}

void IMonitorDisplay::setState(bool state)
{
    if (!_state)
        return;
    _state = state;
    if (!_state)
        cleanwin();    
}

void IMonitorDisplay::cleanwin()
{
    wclear(_Obj);
    wrefresh(_Obj);
}

void IMonitorDisplay::make_graph(int val, int max)
{
    int GRAPH_COLOR = 0;
    int GRAPH_RED = 7;
    int GRAPH_YELLOW = 8;
    int GRAPH_GREEN = 9;
    int perc = (val * 100) / max;
    int to_color = (perc * 48) / 100;

    if (!has_colors())
        return;
    init_pair(GRAPH_GREEN, COLOR_WHITE, COLOR_GREEN);
    init_pair(GRAPH_YELLOW, COLOR_WHITE, COLOR_YELLOW);
    init_pair(GRAPH_RED, COLOR_WHITE, COLOR_RED);
    if (perc <= 50)
        GRAPH_COLOR = GRAPH_GREEN;
    else if (perc <= 75)
        GRAPH_COLOR = GRAPH_YELLOW;
    else if (perc <= 100)
        GRAPH_COLOR = GRAPH_RED;
    
    wattron(_Obj, COLOR_PAIR(GRAPH_COLOR));
    if (to_color < std::to_string(perc).size() + 1) {
        for (int i = 0; i != to_color; i++)
            waddch(_Obj, ' ');
    } else {
        waddstr(_Obj, std::to_string(perc).c_str());
        waddch(_Obj, '%');
        for (int i = std::to_string(perc).size() + 1; i != to_color; i++)
            waddch(_Obj, ' ');
    }
    wattroff(_Obj, COLOR_PAIR(GRAPH_COLOR));
}