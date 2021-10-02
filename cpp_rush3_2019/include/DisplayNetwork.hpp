/*
** EPITECH PROJECT, 2020
** Kernel
** File description:
** Kernel
*/

#ifndef DISPLAYNETWORK_HPP_
# define DISPLAYNETWORK_HPP_

#include "IMonitorDisplay.hpp"

class DisplayNetwork : public IMonitorDisplay {
	public:
		DisplayNetwork();
		~DisplayNetwork();
        void Print_Network();
		void make_graph(int val, int max);
	private:
        NetworkModule a;
};

int ncurses_mod();


#endif /* !DISPLAYNETWORK_HPP_ */
