#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &other)
{
    this->_stack = other._stack;
}

RPN::~RPN() {}

RPN &RPN::operator=(RPN const &other)
{
    this->_stack = other._stack;
    return *this;
}

void RPN::calculate(std::string const &str)
{
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            continue;
        else if (isdigit(str[i]) || (str[i] == '-' && isdigit(str[i + 1]) && i + 1 < len))
        {
            int num = 0;
            if (str[i] == '-')
            {
                num = (str[i + 1] - '0') * -1;
                i++;
            }
            else
                num = str[i] - '0';
            this->_stack.push(num);
        }
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if (this->_stack.size() < 2)
            {
                std::cout << "Error: insufficient values for operator " << str[i] << std::endl;
                return;
            }
            int a = this->_stack.top();
            this->_stack.pop();
            int b = this->_stack.top();
            this->_stack.pop();
            int result;
            switch (str[i])
            {
            case '+':
                result = b + a;
                break;
            case '-':
                result = b - a;
                break;
            case '*':
                result = b * a;
                break;
            case '/':
                if (a == 0)
                {
                    std::cout << "Error: division by zero" << std::endl;
                    return;
                }
                result = b / a;
                break;
            default:
                break;
            }
            this->_stack.push(result);
        }
        else
        {
            std::cout << "Error: invalid character " << str[i] << std::endl;
            return;
        }
    }
    if (this->_stack.size() != 1)
    {
        std::cout << "Error: too many values" << std::endl;
        return;
    }
    std::cout << this->_stack.top() << std::endl;
}