#ifndef BTC_HPP
#define BTC_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>

class BitcoinExchange
{
private:
    std::map<std::string, float, std::greater<std::string> > db;

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();
    int loadDB(std::string dbPath);
    void printDB();
    void printData(std::string date, float val);
};

#endif