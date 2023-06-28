#include "PmergeMe.hpp"

int checkArg(int ac, char **av)
{
    for(int i =1 ; i < ac; i++)
    {
        int j = 0;
        while(av[i][j])
        {
            if(!std::isdigit(av[i][j]))
                return 0;
            j++;
        }
        if(atoi(av[i]) < 0 || atoi(av[i]) > 2147483647)
            return 0;
    }
    return 1;
}



int main(int ac, char **av)
{
    if(ac < 3)
    {
        std::cout << "Usage: ./PmergeMe two or more numbers" << std::endl;
        return 0;
    }
    
    if(!checkArg(ac,av))
    {
        std::cout << "Invalid argument" << std::endl;
        return 0;
    }
    PmergeMe P;
    std::cout << "Before: ";
    int i = 1;
    while(i < ac)
    {
        std::cout << av[i] << " ";
        P.fillV(atoi(av[i]));
        P.fillD(atoi(av[i]));
        i++;
    }
    std::cout << std::endl;
    std::vector<int> vNums = P.getVNums();
    std::deque<int> dNums = P.getDNums();
    P.sortV(vNums);
    P.sortD(dNums);
    std::cout << "After: ";
    P.printV(vNums);
    std::cout << "Time to sort a range of " << vNums.size() << " elements in a vector: " << P.elapsedTimeV << " us" << std::endl;
    std::cout << "Time to sort a range of " << dNums.size() << " elements in a deque: " << P.elapsedTimeD << " us" << std::endl;
    return 0;
}