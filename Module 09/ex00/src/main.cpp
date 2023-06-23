#include "../inc/BitcoinExchange.hpp"

int checkValueStr(char *value)
{
	int i = 0;
	int k = 0;
	while(value[i])
	{
		if(value[i] != '.' && value[i] != ',' && !isdigit(value[i]))
		{
			return 0;
		}
		if (value[i] == '.' || value[i] == ',')
		{
			k++;
		}
		i++;
	}
	if(k > 1)
		return 0;
	return 1;
}

bool checkYMD(std::string date)
{
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    if (year < 2009 || year > 2023)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    if (month == 2)
    {
        if (year % 4 == 0)
        {
            if (day > 29)
                return false;
        }
        else
        {
            if (day > 28)
                return false;
        }
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
            return false;
    }
    return true;
}

bool checkDate(std::string date)
{
    if (date.size() != 10)
        return false;
    for(int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
        {
            if (date[i] != '-')
                return false;
        }
        else if(!isdigit(date[i]))
            return false;
    }
    if(!checkYMD(date))
        return false;
    return true;
}

int checkValue(float value)
{
    if (value < 0)
        return 0;
    if(value > 1000)
        return 2;
    return 1;
}


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./btc [file]" << std::endl;
        return 0;
    }
    BitcoinExchange exchange;
    if (!exchange.loadDB("./files/data.csv"))
    {
        std::cerr << "Error: Could not load database." << std::endl;
    }
    std::ifstream file(av[1]);
    if (!file.is_open())
    {
        std::cerr << "Error: Could not open file: " << av[1] << std::endl;
        return 0;
    }
    else
    {
        std::string line;
        int lineNum = 0;
        while (std::getline(file, line))
        {
            if (line == "date | value" && lineNum == 0)
            {
                lineNum++;
                continue;
            }
            int i = 0;
            int k = 0;
            while (line[i])
            {
                if (line[i] == '|')
                    k++;
                i++;
            }
            if (k != 1)
            {
                std::cerr << "Error: Invalid input => " << line << std::endl;
                continue;
            }
            char *cstr = new char[line.length() + 1];
            strcpy(cstr, line.c_str());
            char *date = strtok(cstr, " |");
            if (!date)
            {
                std::cerr << "Error: Invalid input => " << line << std::endl;
                delete[] cstr;
                continue;
            }
            char *value = strtok(NULL, " |");
            if (!value)
            {
                std::cerr << "Error: Invalid input => " << line << std::endl;
                delete[] cstr;
                continue;
            }
            if(!checkValueStr(value))
            {
                std::cerr << "Error: Invalid input => " << value << std::endl;
                delete []cstr;
                continue;
            }
            int a = 0;
            while(value[a])
            {
                if(value[a] == ',')
                    value[a] = '.';
                a++;
            }
            float valueF = atof(value);
            if(!checkDate(date))
            {
                std::cerr << "Error: Invalid input => " << line << std::endl;
                delete[] cstr;
                continue;
            }
            if(checkValue(valueF) == 0)
            {
                std::cerr << "Error: not a positive number." << std::endl;
                delete[] cstr;
                continue;
            }
            if(checkValue(valueF) == 2)
            {
                std::cerr << "Error: value too high." << std::endl;
                delete[] cstr;
                continue;
            }
            else
                exchange.printData(date, valueF);
            delete[] cstr;
        }
        file.close();
    }
}