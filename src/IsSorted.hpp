#pragma once

#include <vector>

namespace algo
{

namespace sort
{

bool IsSorted(const std::vector<int>& vec)
{
    for (std::size_t i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

} // namespace sort

} // namespace algo
