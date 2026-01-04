#include "../include/printContainer.hpp"
#include "../include/sorting.hpp"
#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace sorting;

static void test()
{
    std::vector<int> vec_1{9, 2, -13, 0};
    sorting::bubble_sort::bubbleSort(vec_1);

    std::vector<int> vec_2{5};
    sorting::bubble_sort::bubbleSort(vec_2);

    std::vector<int> vec_3{1, 1, 1, 1, 1};
    sorting::bubble_sort::bubbleSort(vec_3);

    std::vector<float> vec_4{32, 32, -3.33, 3.14, 2.28, 1004, -3.33, 3.14, 2.28, 1004};
    sorting::bubble_sort::bubbleSort(vec_4);

    std::vector<std::string> vec_5{"A", "Aaaa", "aaaa", "aa", "Hello", "HELLO", "hello"};
    sorting::bubble_sort::bubbleSort(vec_5);

    assert(std::is_sorted(vec_1.begin(), vec_1.end()));
    assert(std::is_sorted(vec_2.begin(), vec_2.end()));
    assert(std::is_sorted(vec_3.begin(), vec_3.end()));
    assert(std::is_sorted(vec_4.begin(), vec_4.end()));
    assert(std::is_sorted(vec_5.begin(), vec_5.end()));

    printContainer(vec_1);
    std::cout << "\n";
    printContainer(vec_2);
    std::cout << "\n";
    printContainer(vec_3);
    std::cout << "\n";
    printContainer(vec_4);
    std::cout << "\n";
    printContainer(vec_5);
    std::cout << "\n";
}

int main()
{
    test();
    return 0;
}
