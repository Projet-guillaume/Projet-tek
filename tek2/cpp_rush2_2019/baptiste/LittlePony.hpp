/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** LittlePony
*/

#ifndef LITTLEPONY_HPP_
#define LITTLEPONY_HPP_

#include "Toy.hpp"

class ILittlePony : public Toy
{
	public:
		ILittlePony(std::string name);
		~ILittlePony();
		virtual void isTaken() = 0;
};

class LittlePony : public Toy {
	public:
		LittlePony(std::string name);
		~LittlePony();
		void isTaken();
};

#endif /* !LITTLEPONY_HPP_ */
