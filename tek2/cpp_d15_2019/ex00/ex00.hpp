/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** hpp
*/

#ifndef EX00_HPP_
#define EX00_HPP_

template<typename S>
void swap(S &val, S &pal)
{
    S l;

    l = val;
    val = pal;
    pal = l;
}

template<typename m>
auto min(m &val, m &pal)
{
    return (val < pal) ? val : pal;
}

template<typename M>
auto max(M &val, M &pal)
{
    return (val > pal) ? val : pal;
}

template<typename A>
auto add(A &val, A &pal)
{
    return (val + pal);
}


#endif /* !EX00_HPP_ */
