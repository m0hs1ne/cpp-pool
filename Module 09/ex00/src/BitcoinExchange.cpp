#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
    this->db = other.db;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
    this->db = other.db;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {};

int BitcoinExchange::loadDB(std::string dbPath) {
    std::ifstream dbFile(dbPath.c_str());
    if (!dbFile.is_open()) {
        return 0;
    }
    std::string line;
    while (std::getline(dbFile, line)) {
        std::string::size_type pos = line.find(",");
        std::string key = line.substr(0, pos);
        std::string valueStr = line.substr(pos + 1);
        float value = atof(valueStr.c_str());
        this->db[key] = value;
    }
    dbFile.close();
    return 1;
}

void BitcoinExchange::printDB() {
    for (std::map<std::string, float>::iterator it = this->db.begin(); it != this->db.end(); it++) {
        std::cout << it->first << " : " << it->second << std::endl;
    }
}

void BitcoinExchange::printData(std::string date, float value)
{
    double result = this->db.lower_bound(date)->second * value;
    std::cout << std::setprecision(2) << std::fixed << date << " => " << value << " = " << result << std::endl;
}