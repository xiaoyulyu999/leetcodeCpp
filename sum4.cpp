#include <algorithm>
#include "sum4.h"

std::vector<std::vector<int>> sum4::solution(std::vector<int>& nums, const int target)
{
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    std::vector<std::vector<int>> result;
    if (n < 4) return result;

    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            int remain = target - nums[i] - nums[j];

            int left = j + 1;
            int right = n - 1;

            while (left < right)
            {
                int twoSum = nums[left] + nums[right];

                if (twoSum < remain)
                {
                    ++left;
                }
                else if (twoSum > remain)
                {
                    --right;
                }
                else
                {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});

                    // skip duplicates
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;

                    // move pointers after a match
                    ++left;
                    --right;
                }
            }
        }
    }
    return result;
}
