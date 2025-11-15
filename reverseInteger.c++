//
// Created by Xiaoyu Lyu on 15/11/2025.
//
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
//
//
//
// Example 1:
//
// Input: x = 123
// Output: 321
// Example 2:
//
// Input: x = -123
// Output: -321
// Example 3:
//
// Input: x = 120
// Output: 21

#include "reverseInteger.hpp"
#include <limits>

int reverseInteger::reverse(int x) {

    int result = 0;
    constexpr int INT_MAX_DIV10 = std::numeric_limits<int>::max() / 10;
    constexpr int INT_MIN_DIV10 = std::numeric_limits<int>::min() / 10;

    while (x != 0) {
        const int digit = x % 10;
        x /= 10;

        // overflow checks before multiplying and adding
        if (result > INT_MAX_DIV10 || (result == INT_MAX_DIV10 && digit > 7)) return 0;
        if (result < INT_MIN_DIV10 || (result == INT_MIN_DIV10 && digit < -8)) return 0;

        result = result * 10 + digit;
    }
    return result;
}
}
