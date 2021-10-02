/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ITable
*/

#ifndef ITABLE_HPP_
#define ITABLE_HPP_

include "class/Object.hpp"

class ITable {
	public:
		ITable();
		virtual ~ITable();
        virtual bool put(Object *obj) = 0;
        virtual Object *take(int pos) = 0;
        virtual void pressInButton() = 0;
        virtual void pressOutButton() = 0;
};

#endif /* !ITABLE_HPP_ */
