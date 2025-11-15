//
// Created by Xiaoyu Lyu on 10/11/2025.
//

#include "twoSum.h"
#include <unordered_map>

std::vector<int> twoSum::findTwoSum(const std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> numMap; // value -> index

    for (int i = 0; i < nums.size(); ++i)
    {
        int evaluater = target - nums[i];
        if(numMap.contains(evaluater))
        {
            return std::vector<int>{numMap[evaluater], i};
        }
        numMap[nums[i]] = i;
    }
    return {};

}