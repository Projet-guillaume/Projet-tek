/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Box
*/

#ifndef BOX_HPP_
#define BOX_HPP_
#include <iostream>
#include "Wrap.hpp"

class Box : public Wrap 
{
	public:
		Box();
		virtual ~Box();
        void closeMe() override;
        void WrapMeThat(Object *obj);

    protected:
	private:
};

#endif /* !BOX_HPP_ */
