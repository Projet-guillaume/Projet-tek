/*
** EPITECH PROJECT, 2020
** parser
** File description:
** hpp
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <iostream>
#include <stack>
#include <string>
#include <cstring>

class Parser {
public:
    Parser();
    ~Parser();
    void feed(const std::string &);
    std::string replace_space(const std::string p);
    int calcul(int result, int a, int b, char c);
    bool Operator(char input);
    int result() const;
    void reset();
protected:
private:
    std::stack<int> _stack;
    int _result;
    std::stack<char> _stack_op;
};

#endif /* !PARSER_HPP_ */
