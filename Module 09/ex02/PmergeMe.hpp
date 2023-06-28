#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <cstring>
#include <sys/time.h>

class PmergeMe
{
    std::vector<int> vNums;
    std::deque<int> dNums;

public:
    double elapsedTimeV;
    double elapsedTimeD;
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe const &other);
    PmergeMe &operator=(PmergeMe const &other);
    void sortV(std::vector<int> &vNums);
    void sortD(std::deque<int> &dNums);
    void printV(std::vector<int> &vNums);
    void fillV(int num);
    void fillD(int num);
    std::vector<int> getVNums() const;
    std::deque<int> getDNums() const;
    double getElapsedTimeV() const;
    double getElapsedTimeD() const;
};

#endif