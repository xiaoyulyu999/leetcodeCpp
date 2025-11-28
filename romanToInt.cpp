//
// Created by Xiaoyu Lyu on 28/11/2025.
//
// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

#include "romanToInt.h"

#include <unordered_map>
using namespace std;


int romanToInt::solution(const string strs)
{
    unordered_map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    const int n = strs.size();

    for (int i = 0; i < n; ++i)
    {

        // If this value is smaller than the next one, subtract it
        if (const int value = romanMap[strs[i]]; i + 1 < n && value < romanMap[strs[i + 1]])
            result -= value;
        else
            result += value;
    }

    return result;
}