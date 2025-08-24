#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int n = nums.size();
        int count = 0;     // number of zeros in current window
        int maxlen = 0;

        for (int j = 0; j < n; j++) {
            if (nums[j] == 0) {
                count++;
            }

            // shrink window if more than k zeros
            while (count > k) {
                if (nums[i] == 0) count--;
                i++;
            }

            // update maxlen with valid window size
            maxlen = max(maxlen, j - i + 1);
        }
        return maxlen;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1,1,1,0,0,0,1,1,1,1,0};
    vector<int> nums2 = {0,0,1,1,1,0,0};
    vector<int> nums3 = {1,1,1,1};
    vector<int> nums4 = {0,0,0,0};

    cout << sol.longestOnes(nums1, 2) << endl; // Expected 6
    cout << sol.longestOnes(nums2, 0) << endl; // Expected 3
    cout << sol.longestOnes(nums3, 2) << endl; // Expected 4
    cout << sol.longestOnes(nums4, 3) << endl; // Expected 3

    return 0;
}
