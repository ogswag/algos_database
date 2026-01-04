#pragma once
#include <algorithm>
#include <iostream>
#include <vector>

namespace sorting
{
namespace bubble_sort
{
    template <typename T>
    std::vector<T> bubbleSort(std::vector<T> &array)
    {
        // swap_check flag to terminate the function early
        // if there is no swap occurs in one iteration.
        bool swap_check = true;
        int size = array.size();
        for (int i = 0; (i < size) && (swap_check); ++i)
        {
            swap_check = false;
            for (int j = 0; j < size - 1 - i; ++j)
            {
                if (array[j] > array[j + 1])
                {
                    swap_check = true;
                    std::swap(array[j], array[j + 1]);
                }
            }
        }
        return array;
    }
} // namespace bubble_sort
} // namespace sorting
