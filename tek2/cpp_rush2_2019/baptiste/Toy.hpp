/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Object.hpp"

class IToy : public Object
{
	public:
	IToy(std::string name);
	virtual ~IToy();
	virtual void isTaken() = 0;
};

class Toy : public Object
{
	public:
		Toy(std::string name);
		~Toy();
		void isTaken();
};

#endif /* !TOY_HPP_ */
