#ifndef BTC_HPP
#define BTC_HPP

#include <string>
#include <iostream>
#include <exception>
#include <map>
#include <fstream>

class BitcoinExchange
{
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    BitcoinExchange(std::string name, double price);
    ~BitcoinExchange();
    BitcoinExchange(std::map<std::string, float>);
    BitcoinExchange(std::string);
    void Print(float,float,std::string);
    float getBuyPrice(std::string);
    void printMap();

    class invalidFile : public std::exception
    {
        const char* what() const throw();
    };
    class precede : public std::exception
    {
        const char* what() const throw();
    };
private:
    std::map<std::string, float> exchange;
};

#endif