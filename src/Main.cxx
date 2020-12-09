#include <iostream>

#include <vector>

#include "BubbleSort.hpp"
#include "Utilities.hpp"

int main()
{
    std::vector<int> vec {4, 6, 7, 8, 2, 3, 4, 5, 6, 10, 10, 5, 7};

    algo::sort::BubbleSort(vec);
    algo::util::PrintVec(vec);

    return 0;
}
