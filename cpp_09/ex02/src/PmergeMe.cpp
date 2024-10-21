#include "../header/PmergeMe.hpp"

PmergeMe::PmergeMe() { }

PmergeMe::~PmergeMe() { }

bool PmergeMe::validateInput(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Error: not vailed number of arguments";
        return false;
    }

    std::string str;
    for (int i = 0; i < ac; i++)
    {
        str = av[i];
        for (char c : str)//we will iterate throght str and check if each char is a + integer
        {
            if (!isdigit(c))
            {
                std::cerr << "Error: All input must be positive integurs\n";
                return false;
            }
        }
    }
    return true;
}

std::vector<int> PmergeMe::parseArg(int ac, char **av)
{
    std::vector<int> seq; //we can't use array here, should be vector to allow the flixability in growing or shrinking in size 
    int num;

    for (int i = 0; i < ac; i++)
    {
        num = std::atoi(av[i]);
        seq.push_back(num);
    }
    return (seq);
}

void PmergeMe::printTime(const std::chrono::high_resolution_clock::time_point &start,
                    const std::chrono::high_resolution_clock::time_point &end,
                    const std::string &containerName)
                    {
                       std::chrono::duration<double, std::milli> time = end - start;
                       std::cout << "Time of the process: " <<  containerName << " : " << time.count() << " ms" << std::endl;
                    }


//implementation of the merge-insert sort algorithm

//MERGE VECTOR
static void mergVector(std::vector<int> &left, std::vector<int> &right, std::vector<int> &seq)
{
    std::vector<int>::iterator itLeft = left.begin();
    std::vector<int>::iterator itRight = right.begin();
    std::vector<int>::iterator itseq = seq.begin();

    while (itLeft != left.end() && itRight != right.end())
    {
        if (*itLeft <= *itRight)
        {
            *itseq = *itLeft;
            ++itLeft;
        }
        else
        {
            *itseq = *itRight;
            ++itRight;
        }
        ++itseq;
    }

    while (itLeft != left.end())
    {
        *itseq = *itLeft;
        ++itLeft;
        ++itseq;
    }

    while (itRight != right.end())
    {
        *itseq = *itRight;
        ++itRight;
        ++itseq;
    }
}

static void inserSortVector(std::vector<int> &seq)
{
    int key;
    int j;

    for (size_t i = 1; i < seq.size(); i++)
    {
        key = seq[i];
        j = i - 1;
        while (j >= 0 && seq[j] > key)
        {
            seq[j + 1] = seq[j];
            --j;
        }
        seq[j + 1] = key;
    }
}

void PmergeMe::mergeInsertSortV(std::vector<int> &seq)
{
    if (seq.size() <= 10)
    {
        inserSortVector(seq);
        return;
    }

    std::vector<int> left(seq.begin(), seq.begin() + seq.size() / 2);
    std::vector<int> right(seq.begin() + seq.size() / 2, seq.end());

    mergeInsertSortV(left);
    mergeInsertSortV(right);

    mergVector(left, right, seq);
}

/*************************************************************/

/*void PmergeMe::mergeInsertSortL(std::list<int> &seq)
{

}*/