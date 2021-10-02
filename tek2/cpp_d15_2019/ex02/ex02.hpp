/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** hpp
*/

#ifndef EX02_HPP_
#define EX02_HPP_

#include <iostream>

template<typename Swap>
Swap const &min(Swap const &a, Swap const &b)
{
	std::cout << "template min" << std::endl;
    return (b < a) ? b : a;
}

int const &min(int const &a, int const &b)
{
	std::cout << "non-template min" << std::endl;
    return (b < a) ? b : a;
}

template<typename Swap>
Swap templateMin(Swap const *tab, int const lengh)
{
	Swap res = tab[0];

	for (int cpt = 1; cpt < lengh; cpt++)
		res = min<Swap>(res, tab[cpt]);
	return (res);
}

int nonTemplateMin(int const *tab, int const lengh)
{
	int res = tab[0];

    for (int cpt = 1; cpt < lengh; cpt++)
		res = min(res, tab[cpt]);
	return (res);
}

#endif /* !EX02_HPP_ */
