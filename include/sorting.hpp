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
        // swap flag to terminate the function if 0 swaps were made in an iteration.
        bool swapped = true;
        int size = array.size();
        for (int i = 0; (i < size) && (swap_check); ++i)
        {
            swapped = false;
            for (int j = 0; j < size - 1 - i; ++j)
            {
                if (array[j] > array[j + 1])
                {
                    swapped = true;
                    std::swap(array[j], array[j + 1]);
                }
            }
        }
        return array;
    }
} // namespace bubble_sort
} // namespace sorting
