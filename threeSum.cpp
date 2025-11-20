#include "threeSum.h"
#include <vector>


std::vector<std::vector<int>> threeSum::solution(std::vector<int>& nums)
{
    std::ranges::sort(nums);
    std::vector<std::vector<int>> result;

    const int n = nums.size();

    for (int i = 0; i < n - 2; i++)
    {
        // Skip duplicates for i
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            if (const int sum = nums[i] + nums[left] + nums[right]; sum < 0)
            {
                left++;
            }
            else if (sum > 0)
            {
                right--;
            }
            else // sum == 0
            {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates for left
                while (left < right && nums[left] == nums[left + 1])
                    left++;

                // Skip duplicates for right
                while (left < right && nums[right] == nums[right - 1])
                    right--;

                left++;
                right--;
            }
        }
    }

    return result;
}
