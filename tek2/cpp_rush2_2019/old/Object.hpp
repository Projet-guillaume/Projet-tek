/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <iostream>

class Object {
	public:
		Object(std::string name);
		~Object();
        std::string const &getName() const;
	protected:
	private:
    std::string name;
};

std::ostream &operator<<(std::ostream &os, Object const *obj);

#endif /* !OBJECT_HPP_ */