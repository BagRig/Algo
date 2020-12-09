#pragma once

#include <vector>

namespace algo
{

namespace sort
{

void SelectionSort(std::vector<int>& vec)
{
    std::size_t smallestIndex = 0;
    for (std::size_t i = 0; i < vec.size() - 1; ++i) {
        smallestIndex = i;
        for(std::size_t j = i + 1; j < vec.size(); ++j) {
            if(vec[smallestIndex] > vec[j]) {
                smallestIndex = j;
            }
        }
        std::swap(vec[i], vec[smallestIndex]);
    }
}

} //namespace sort

} // namespace algo
