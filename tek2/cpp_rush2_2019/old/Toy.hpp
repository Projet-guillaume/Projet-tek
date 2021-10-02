/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Object.hpp"

class Toy : public Object
{
	public:
		Toy(std::string name);
		virtual ~Toy();
        std::string getType() const;
	private:
    std::string type;
};

#endif /* !TOY_HPP_ */
