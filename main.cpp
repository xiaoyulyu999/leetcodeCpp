#include <iostream>
#include <vector>
#include "sum4.h"
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
    // Example 1:
    //
    // Input: nums = [1,0,-1,0,-2,2], target = 0
    // Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
    // Example 2:
    //
    // Input: nums = [2,2,2,2,2], target = 8

    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    auto result = sum4::solution(nums, target);
    for (auto i : nums)
    {
        cout << i << endl;
    }

    return 0;
}