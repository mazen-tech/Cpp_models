#include "../header/PmergeMe.hpp"
#include <sstream>

int main ()
{

    PmergeMe test;

    std::vector<int> unsorted = {34, 7, 23, 32, 5, 62, 32, 45, 2, 78};

    test.printUnsortedSeq(unsorted);

    test.mergeInsertSortV(unsorted);

    test.printSortedSeq(unsorted);
}