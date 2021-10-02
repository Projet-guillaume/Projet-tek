/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ILittlePony
*/

#ifndef ILITTLEPONY_HPP_
#define ILITTLEPONY_HPP_

#include "IToy.hpp"

class ILittlePony : public Toy
{
	public:
		ILittlePony();
		virtual ~ILittlePony();
        virtual void isTaken()= 0;
};

#endif /* !ILITTLEPONY_HPP_ */
