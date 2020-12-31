#pragma once

#include <vector>
#include <cassert>

namespace algo
{

namespace sort
{

std::size_t Partition(std::vector<int>& vec, std::size_t left, std::size_t right)
{
    assert(left < right && right < vec.size());
    std::size_t pivotIdx = right;
    std::size_t i = left;
    std::size_t j = left;
    while (j < pivotIdx) {
        assert(pivotIdx < vec.size());
        if (vec[j] <= vec[pivotIdx]) {
            assert(i < vec.size() && j < vec.size());
            std::swap(vec[i], vec[j]);
            ++i;
        }
        ++j;
    }
    assert(i < vec.size() && j < vec.size());
    std::swap(vec[i], vec[pivotIdx]);
    pivotIdx = i;
    return pivotIdx;
}

void ActualSort(std::vector<int>& vec, std::size_t left, std::size_t right)
{
    if (left >= right) return;
    const std::size_t pivotIdx = Partition(vec, left, right);
    ActualSort(vec, left, pivotIdx - 1);
    ActualSort(vec, pivotIdx + 1, right);
}

void QuickSort(std::vector<int>& vec)
{
    const std::size_t left = 0;
    const std::size_t right = vec.size() - 1;
    ActualSort(vec, left, right);
}

} // namespace sort

} // namespace algo
