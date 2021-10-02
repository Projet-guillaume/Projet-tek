#include "Parser.hpp"

Parser::Parser()
{

}

Parser::~Parser()
{

}
int Parser::result() const
{
    return _result;
}


bool Parser::Operator(char input)
{
    char ops[] = {'-', '+', '*', '/', '%'};

    for (int i = 0; i < 5; i++) {
        if (input == ops[i])
            return true;
    } return false;
}

void Parser::reset()
{
    _result = 0;
}

int Parser::calcul(int result, int a, int b, char c)
{
    if (c == '%')
         result = a % b;
    else if (c == '/')
        result = a / b;
    else if (c == '+')
        result = a + b;
    else if (c == '-')
        result = a - b;
    else if (c == '*')
        result = a * b;
    return result;
}

std::string Parser::replace_space(const std::string p)
{
    std::string str1 = p;
    std::size_t found = str1.find(" ");

    if (found != std::string::npos) {
        str1.replace(str1.find(" "), 1, "");
        return Parser::replace_space(str1);
    } else
        return str1;
}

void Parser::feed(const std::string &p)
{
    int i = 0;
    int n = 0;
    int b = 0;
    int a = 0;
    std::string s = replace_space(p);

    for (i; s[i]; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            n = s[i] - 48;
            for (i; s[i + 1] >= '0' && s[i + 1] <= '9'; i++)
                n = n * 10 + (s[i + 1] - 48);
            _stack.push(n);
        }
        if (Operator(s[i]))
            _stack_op.push(s[i]);
        if (s[i] == ')' || s[i] == s[s.size()]) {
            b = _stack.top();
            _stack.pop();
            a = _stack.top();
            _stack.pop();
            _result = calcul(_result, a, b, _stack_op.top());
            _stack.push(_result);
            _stack_op.pop();
        }
    }
    if (_stack.size() == 1)
        _stack_op.push('+');
    if (_stack_op.size() > 0 && _stack.size() > 1) {
        b = _stack.top();
        _stack.pop();
        a = _stack.top();
        _stack.pop();
        _result = calcul(_result, a, b, _stack_op.top());
        _stack.push(_result);
        _stack_op.pop();
    }
}