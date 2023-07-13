#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};

PmergeMe::~PmergeMe() {};

PmergeMe::PmergeMe(PmergeMe const &other) {
    this->dNums = other.dNums;
    this->vNums = other.vNums;
};

PmergeMe &PmergeMe::operator=(PmergeMe const &other) {
    this->dNums = other.dNums;
    this->vNums = other.vNums;
    return *this;
};

template <typename Container>
void sortInsert(Container & cont, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;
    int tmp[end + 1];

    while(i <= mid && j <= end)
    {
        if(cont[i] <= cont[j])
            tmp[k++] = cont[i++];
        else
            tmp[k++] = cont[j++];
    }
    while(i <= mid)
        tmp[k++] = cont[i++];
    while(j <= end)
        tmp[k++] = cont[j++];
    for(i = start; i <= end; i++)
        cont[i] = tmp[i];
}

void mSortV(std::vector<int> & vNums, int start, int end)
{
    if(start < end)
    {
        int mid;
        mid = (start + end) / 2;
        mSortV(vNums, start, mid);
        mSortV(vNums, mid + 1, end);
        sortInsert(vNums, start, mid, end);
    }
}

void mSortD(std::deque<int> & dNums, int start, int end)
{
    if(start < end)
    {
        int mid;
        mid = (start + end) / 2;
        mSortD(dNums, start, mid);
        mSortD(dNums, mid + 1, end);
        sortInsert(dNums, start, mid, end);
    }
}

void PmergeMe::printV(std::vector<int> &vNums)
{
    for (std::vector<int>::iterator it = vNums.begin(); it != vNums.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::sortV(std::vector<int> &vNums)
{
    struct timeval start, end;
    gettimeofday(&start, NULL);
    mSortV(vNums, 0, vNums.size() - 1);
    gettimeofday(&end, NULL);
    long elapsedTime = ((end.tv_sec - start.tv_sec) * 1000000) + end.tv_usec - start.tv_usec;
    this->elapsedTimeV = static_cast<double>(elapsedTime);
}

void PmergeMe::sortD(std::deque<int> &dNums)
{
    struct timeval start, end;
    gettimeofday(&start, NULL);
    mSortD(dNums, 0, dNums.size() - 1);
    gettimeofday(&end, NULL);
    long elapsedTime = ((end.tv_sec - start.tv_sec) * 1000000) + end.tv_usec - start.tv_usec;
    this->elapsedTimeD = static_cast<double>(elapsedTime);
}

void PmergeMe::fillV(int num)
{
    this->vNums.push_back(num);
}

void PmergeMe::fillD(int num)
{
    this->dNums.push_back(num);
}

std::vector<int> PmergeMe::getVNums() const
{
    return this->vNums;
}

std::deque<int> PmergeMe::getDNums() const
{
    return this->dNums;
}
