#include <iostream>

#include <vector>

#include "BubbleSort.hpp"
#include "IsSorted.hpp"
#include "Utilities.hpp"
#include "SelectionSort.hpp"

int main()
{
    std::vector<int> vec {4, 6, 7, 8, 2, 3, 4, 5, 6, 10, 10, 5, 7};

    algo::sort::SelectionSort(vec);
    if (algo::sort::IsSorted(vec)) {
        std::cout << "Vector is sorted" << std::endl;
    } else {
        std::cout << "Vector is not sorted" << std::endl;
    }
    algo::util::PrintVec(vec);

    return 0;
}
