#pragma once

#include <iostream>
#include <vector>

namespace algo
{

namespace util
{

void PrintVec(const std::vector<int>& vec)
{
    for(int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

} // namespace util

} // namespace algo
