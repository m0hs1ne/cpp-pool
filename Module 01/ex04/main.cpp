#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::ifstream inFile;
    std::ofstream outFile;
    std::string in_file;
    std::string out_file;
    std::string line;
    std::string s1;
    std::string s2;

    if (ac != 4)
    {
        std::cout << "Usage: ./replace infile s1 s2" << std::endl;
        return (1);
    }
    in_file = av[1];
    s1 = av[2];
    s2 = av[3];
    if(in_file.empty() || s1.empty() || s2.empty())
    {
        std::cout << "Your arguments are empty." << std::endl;
        return 1;
    }
    inFile.open(in_file);
    out_file = in_file + ".replace";
    if (!inFile.is_open())
    {
        std::cout << "Error: can't open file " << av[1] << std::endl;
        return 1;
    }
    outFile.open(out_file);
    while(getline(inFile, line))
    {
        while (line.find(s1) != std::string::npos)
        {
            line.insert(line.find(s1), s2);
            line.erase(line.find(s1), s1.length());
        }
        outFile << line << std::endl;
    }
    inFile.close();
    outFile.close();
}