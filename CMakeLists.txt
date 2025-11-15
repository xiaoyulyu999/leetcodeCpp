cmake_minimum_required(VERSION 4.0)
project(leetcode)

set(CMAKE_CXX_STANDARD 20)

add_executable(leetcode main.cpp
        twoSum.cpp
        twoSum.h
        sumListNode.cpp
        sumListNode.h
        lengthOfLongestSubstring.cpp
        lengthOfLongestSubstring.h
        medianOfTwoSortedArrays.cpp
        medianOfTwoSortedArrays.h
        palindromeNumber.cpp
        palindromeNumber.h
        longestCommonPrefix.cpp
        longestCommonPrefix.h
        threeSum.cpp
        threeSum.h
        sumClosest3.cpp
        sumClosest3.h
)
