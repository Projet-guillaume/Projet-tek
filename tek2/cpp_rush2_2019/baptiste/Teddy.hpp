/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** Teddy
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

#include "Toy.hpp"


class ITeddy : public Toy
{
	public:
		ITeddy(std::string name);
		virtual ~ITeddy();
		virtual void isTaken() = 0;
};

class Teddy : public Toy
{
	public:
		Teddy(std::string name);
		~Teddy();
		void isTaken();
};

#endif /* !TEDDY_HPP_ */
