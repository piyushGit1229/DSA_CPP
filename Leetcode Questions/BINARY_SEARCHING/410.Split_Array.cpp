#include <iostream>
#include <vector>
#include <numeric>     // for accumulate
#include <algorithm>   // for max_element

using namespace std;

class Solution {
public:
    bool ispossible(vector<int>& nums, int k, int mid) {
        int count = 1;
        int runningsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (runningsum + nums[i] <= mid) {
                runningsum += nums[i];
            } else {
                count++;
                runningsum = nums[i];
                if (count > k)
                    return false;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int start = *max_element(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int end = sum;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (ispossible(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    // Function call
    int result = sol.splitArray(nums, k);

    // Output the result
    cout << "Minimum largest sum after splitting: " << result << endl;

    return 0;
}
