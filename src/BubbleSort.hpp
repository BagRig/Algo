#pragma once

#include <vector>

namespace algo
{

namespace sort
{

void BubbleSort(std::vector<int>& vec)
{
    bool error;
    // std::vector<int>::size_type
    const std::size_t size = vec.size() - 1;
    do {
        error = false;
        for (std::size_t i = 0; i < size; ++i) {
            if (vec[i] > vec[i + 1]) {
                std::swap(vec[i], vec[i + 1]);
                error = true;
            }
        }
    } while (error);
}

} // namespace sort

} // namespace algo
