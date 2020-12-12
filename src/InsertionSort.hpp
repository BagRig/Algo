#pragma once

#include <vector>

namespace algo
{

namespace sort
{

void InsertionSort(std::vector<int>& vec)
{
    for (size_t i = 1; i < vec.size(); ++i) {
        for (size_t j = i; j > 0; --j) {
            if (vec[j] < vec[j-1]) {
                std::swap(vec[j], vec[j-1]);
            }
        }
    }
}

} // namespace sort

} // namespace algo
