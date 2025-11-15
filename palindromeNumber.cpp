//
// Created by Xiaoyu Lyu on 12/11/2025.
//

#include "palindromeNumber.h"

#include <string>

bool palindromeNumber::isPalindrome(int n)
{

    std::string s = std::to_string(n);
    std::string rev = std::string(s.rbegin(), s.rend());
    return s == rev;

}
