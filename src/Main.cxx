#include <iostream>

#include <vector>

#include "BubbleSort.hpp"
#include "IsSorted.hpp"
#include "Utilities.hpp"
#include "SelectionSort.hpp"
#include "InsertionSort.hpp"

int main()
{
    std::vector<int> vec {2, 3, 5, 45, 4, 32, 2, 12, 45, 45 , 7, 65, 34};

    algo::sort::InsertionSort(vec);
    if (algo::sort::IsSorted(vec)) {
        std::cout << "Vector is sorted" << std::endl;
    } else {
        std::cout << "Vector is not sorted" << std::endl;
    }
    algo::util::PrintVec(vec);

    return 0;
}
