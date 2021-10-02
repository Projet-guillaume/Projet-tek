/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** Teddy
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

#include "Toy.hpp"

class Teddy : public Toy
{
	public:
		Teddy(std::string name);
		~Teddy();
		void isTaken();

	protected:
	private:
};

#endif /* !TEDDY_HPP_ */
