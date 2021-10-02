/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** cpp
*/

#include "ex04.hpp"


auto equal(const K &val, const K &pal)
{
    return (val == pal) ? 1 : 0;
}

template <class T>Tester<T>::Tester(){

}

template <class T> Tester<T>::~Tester() {

}


template <class T>
bool Tester<T>::equal(const T &a, const T &b) const{
    return (val == pal) ? true : false;
}

int main(void)
{
    std::cout << "1 == 0 ? " << equal(1, 0) << std::endl;
    std::cout << "1 == 1 ? " << equal(1, 1) << std::endl;
}