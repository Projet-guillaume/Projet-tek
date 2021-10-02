/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#include "DisplayNetwork.hpp"

DisplayNetwork::DisplayNetwork() : IMonitorDisplay()
{
    _Obj = subwin(stdscr, 8, 50, 13, COLS/5 + 90);
}

DisplayNetwork::~DisplayNetwork()
{}

void DisplayNetwork::make_graph(int val, int max)
{
    int GRAPH_COLOR = 0;
    int GRAPH_RED = 7;
    int GRAPH_YELLOW = 8;
    int GRAPH_GREEN = 9;
    int perc = (val * 100) / max;
    int to_color = (perc * 48) / 100;
    int to_print = (max - val) / 1000;

    if (!has_colors())
        return;
    init_pair(GRAPH_GREEN, COLOR_WHITE, COLOR_GREEN);
    init_pair(GRAPH_YELLOW, COLOR_WHITE, COLOR_YELLOW);
    init_pair(GRAPH_RED, COLOR_WHITE, COLOR_RED);
    if (perc <= 40)
        GRAPH_COLOR = GRAPH_RED;
    else if (perc <= 60)
        GRAPH_COLOR = GRAPH_YELLOW;
    else if (perc <= 100)
        GRAPH_COLOR = GRAPH_GREEN;
    
    wattron(_Obj, COLOR_PAIR(GRAPH_COLOR));
    if (to_color < std::to_string(to_print).size() + 4) {
        for (int i = 0; i != to_color; i++)
            waddch(_Obj, ' ');
    } else {
        waddstr(_Obj, std::to_string(to_print).c_str());
        waddstr(_Obj, "kb/s");
        for (int i = std::to_string(to_print).size() + 4; i != to_color; i++)
            waddch(_Obj, ' ');
    }
    wattroff(_Obj, COLOR_PAIR(GRAPH_COLOR));
}

void DisplayNetwork::Print_Network()
{
    if (!_state)
        return;

    a.update();
    wclear(_Obj);

    wmove(_Obj, 1, 1);
    print_rd_color("Name: ");
    wprintw(_Obj, a.getName().c_str());

    wmove(_Obj, 2, 1);
    print_rd_color("Upload: ");
    wprintw(_Obj, a.getByteUp().c_str());

    wmove(_Obj, 3, 1);
    print_rd_color("Download: ");
    wprintw(_Obj, a.getByteDown().c_str());

    wmove(_Obj, 4, 1);
    print_rd_color("Speed: ");
    wmove(_Obj, 5, 1);
    if (a.getCo() == true)
        make_graph(std::stoi(a.getByteUp()), std::stoi(a.getByteDown()));
    else
        wprintw(_Obj, a.getSpeed().c_str());

    box(_Obj, ACS_VLINE, ACS_HLINE);

    wmove(_Obj, 0, 21);
    print_rd_color("NETWORK");

    wrefresh(_Obj);
}