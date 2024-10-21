#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <chrono>


class PmergeMe
{
public:
    PmergeMe(/* args */);
    ~PmergeMe();

    bool validateInput(int ac, char **av);
    std::vector<int> parseArg(int ac, char **av);

    template <typename t>
    void printUnsortedSeq(const t &seq);
    
    template <typename t>
    void printSortedSeq(const t &seq);

    void mergeInsertSortV(std::vector<int> &seq);
    void mergeInsertSortL(std::list<int> &seq);

    //fucntion to print the time taked to sort
    void printTime(const std::chrono::high_resolution_clock::time_point &start,
                    const std::chrono::high_resolution_clock::time_point &end,
                    const std::string &containerName);

};

template <typename t>
void PmergeMe::printUnsortedSeq(const t &seq)
{
    std::cout << "Before sorting\n";
    for (typename t::const_iterator it = seq.begin(); it != seq.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
    
template <typename t>
void PmergeMe::printSortedSeq(const t &seq)
{
    std::cout << "Ater sorting\n";
    for (typename t::const_iterator it = seq.begin(); it != seq.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout <<std::endl;
}

#endif