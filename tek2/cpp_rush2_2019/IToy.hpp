/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** IToy
*/

#ifndef ITOY_HPP_
#define ITOY_HPP_

#include "class/Object.hpp"

class IToy : public Object
{
	public:
		IToy();
		virtual ~IToy();
        virtual void isTaken() = 0;

	protected:
	private:
};

#endif /* !ITOY_HPP_ */
