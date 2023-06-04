#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): exchange(std::map<std::string, float>())
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : exchange(other.exchange)
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if(this != &other)
        this->exchange = other.exchange;
    return *this;
}

BitcoinExchange::BitcoinExchange(std::map<std::string, float> map) : exchange(map)
{
}

BitcoinExchange::BitcoinExchange(std::string dataFileName) : exchange(std::map<std::string, float>())
{
    std::map<std::string, float> data;
    std::fstream dataFile(dataFileName.c_str());
    if(dataFile.fail())
        throw invalidFile();
    std::string line;
    std::string name;
    float price;
    while(std::getline(dataFile, line))
    {
        if(line == "date,exchange_rate")
            continue;
        if(line.find(',') == std::string::npos)
            throw precede();
        name = line.substr(0, line.find(','));
        price = std::stof(line.substr(line.find(',') + 1));
        data[name] = price;
    }
}

BitcoinExchange::~BitcoinExchange()
{
}