#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        // Binary search loop
        while (start < end) {
            int mid = start + (end - start) / 2;

            /*
            Case 1: nums[mid] >= nums[end]
            → This means the smallest element lies in the **right part**,
              because the left/mid part is sorted and the rotation pivot is ahead.

              Example: [4, 5, 6, 7, 0, 1, 2]
              If mid = 2 (nums[2] = 6), and nums[end] = 2 → 6 > 2
              So the minimum is to the right of mid → start = mid + 1

            Case 2: nums[mid] < nums[end]
            → This means the right part is sorted, and mid itself
              could be the minimum. So we shift the end to mid.
            */

            if (nums[mid] > nums[end]) {
                start = mid + 1; // Move right
            } else {
                end = mid;       // Move left or include mid
            }
        }

        // At the end of the loop, start == end, pointing to the minimum element
        return nums[start]; // or nums[end], both same now
    }
};
