#pragma once
#include <iostream>
#include <type_traits>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <forward_list>
#include <array>
#include <string>

// For std::pair
template <typename T1, typename T2>
std::ostream &operator<<(std::ostream &os, const std::pair<T1, T2> &p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template <typename Container>
void printContainer(const Container &c) {
    // strings
    if constexpr (std::is_same_v<Container, std::string>) {
        std::cout << "\"" << c << "\"";
        return;
    }

    if (c.empty()) {
        std::cout << "[]";
        return;
    }

    if constexpr (std::is_same_v<Container, std::stack<typename Container::value_type>>) {
        auto temp = c;
        std::cout << "[";
        while (temp.size() > 1) {
            std::cout << temp.top() << ", ";
            temp.pop();
        }
        std::cout << temp.top() << "]";
    }
    else if constexpr (std::is_same_v<Container, std::queue<typename Container::value_type>>) {
        auto temp = c;
        std::cout << "[";
        while (temp.size() > 1) {
            std::cout << temp.front() << ", ";
            temp.pop();
        }
        std::cout << temp.front() << "]";
    }
    else {
        // Generic printing for most containers
        std::cout << "[";
        auto it = c.begin();
        std::cout << *it;
        ++it;

        for (; it != c.end(); ++it) {
            std::cout << ", " << *it;
        }
        std::cout << "]";
    }
}

// Overload for C-style arrays
template <typename T, std::size_t N>
void printContainer(const T (&arr)[N]) {
    std::cout << "[";
    for (std::size_t i = 0; i < N - 1; ++i) {
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[N - 1] << "]";
}