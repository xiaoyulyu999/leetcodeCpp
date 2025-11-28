//
// Created by Xiaoyu Lyu on 25/11/2025.
//

#include "medianOfTwoSorted.h"


float medianOfTwoSorted::solution(std::vector<int>& nums1, std::vector<int>& nums2) {
    // Ensure nums1 is the smaller array
    if (nums1.size() > nums2.size()) {
        return medianOfTwoSorted::solution(nums2, nums1);
    }

    int m = nums1.size();
    int n = nums2.size();
    int total = m + n;
    int half = (total + 1) / 2;

    int left = 0, right = m;

    while (left <= right) {
        int i = (left + right) / 2;      // cut in nums1
        int j = half - i;                // cut in nums2

        int nums1_left  = (i == 0) ? INT_MIN : nums1[i - 1];
        int nums1_right = (i == m) ? INT_MAX : nums1[i];

        int nums2_left  = (j == 0) ? INT_MIN : nums2[j - 1];
        int nums2_right = (j == n) ? INT_MAX : nums2[j];

        // Check if we found a valid partition
        if (nums1_left <= nums2_right && nums2_left <= nums1_right) {
            // Odd total length
            if (total % 2 == 1) {
                return max(nums1_left, nums2_left);
            }
            // Even total length
            return (std::max(nums1_left, nums2_left) +
                    std::min(nums1_right, nums2_right)) / 2.0;
        }
        else if (nums1_left > nums2_right) {
            // Move left in nums1
            right = i - 1;
        }
        else {
            // Move right in nums1
            left = i + 1;
        }
    }

    // Should never reach here
    return 0.0;
}
