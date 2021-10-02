/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ITeddy
*/

#ifndef ITEDDY_HPP_
#define ITEDDY_HPP_
#include "IToy.hpp"

class ITeddy  : public Toy
{
	public:
		ITeddy();
		virtual ~ITeddy();
        virtual void isTaken() = 0;
};

#endif /* !ITEDDY_HPP_ */
