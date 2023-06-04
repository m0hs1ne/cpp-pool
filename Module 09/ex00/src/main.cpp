#include <fstream>
#include <iostream>
#include "../inc/BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        std::fstream file(av[1]);
        if(file.fail())
        {
            std::cout << "Error: inFile not found" << std::endl;
            return 0;
        }
        std::fstream dataFile("files/data.csv");
        if(dataFile.fail())
        {
            std::cout << "Error: data.csv not found, make sure to put it in files directory." << std::endl;
            return 0;
        }
        BitcoinExchange exchange;
        try
        {
            exchange = BitcoinExchange(av[1]);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return 0;
        }
    }
}