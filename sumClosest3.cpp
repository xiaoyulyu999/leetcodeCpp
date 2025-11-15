//
// Created by Xiaoyu Lyu on 15/11/2025.
//
//
// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
//
// Return the sum of the three integers.
//
// You may assume that each input would have exactly one solution.
//
//
//
// Example 1:
//
// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
// Example 2:
//
// Input: nums = [0,0,0], target = 1
// Output: 0
// Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

#include "sumClosest3.h"

int sumClosest3::solution(std::vector<int>& nums, int target)
{
    std::sort(nums.begin(), nums.end());

    int n = nums.size();
    int closest = nums[0] + nums[1] + nums[2]; // initialize with first valid triplet

    for (int i = 0; i < n - 2; ++i)
    {
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            // update closest if needed
            if (std::abs(sum - target) < std::abs(closest - target))
            {
                closest = sum;
            }

            if (sum < target)
            {
                ++left;
            }
            else
            {
                --right;
            }
        }
    }
    return closest;
}

