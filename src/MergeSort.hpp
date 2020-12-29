#pragma once

#include <vector>

namespace algo
{

namespace sort
{

void Merge(std::vector<int>& vec, std::vector<int>& left, std::vector<int>& right)
{
    assert(vec.size() == left.size() + right.size());
    std::size_t i = 0;
    std::size_t j = 0;
    std::size_t v = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            vec[v] = left[i];
            ++i;
        } else {
            vec[v] = right[j];
            ++j;
        }
        ++v;
    }

    while (i < left.size()) {
        vec[v] = left[i];
        ++i;
        ++v;
    }

    while (j < right.size()) {
        vec[v] = right[j];
        ++j;
        ++v;
    }
}

void MergeSort(std::vector<int>& vec)
{
    assert(vec.size() != 0);
    if (vec.size() == 1) return;
    std::size_t mid = (0 + vec.size()) / 2;
    std::vector<int> left(mid);
    std::vector<int> right(vec.size() - mid);
    for (std::size_t i = 0; i < left.size(); ++i) {
        left[i] = vec[i];
    }
    for (std::size_t i = 0; i < right.size(); ++i) {
        right[i] = vec[i + mid];
    }
    MergeSort(left);
    MergeSort(right);
    Merge(vec, left, right);
}

} // namespace sort

} // namespace algo
