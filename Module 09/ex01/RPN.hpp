#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>

class RPN
{
private:
    std::stack<int> _stack;

public:
    RPN();
    RPN(RPN const &other);
    ~RPN();
    RPN &operator=(RPN const &other);
    void calculate(std::string const &str);


};

#endif