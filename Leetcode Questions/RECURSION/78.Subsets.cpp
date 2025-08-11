#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    // Recursive helper function
    void solve(int index, vector<int>& nums, vector<int>& subset, vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(subset); // ⬅️ FIXED: push the current subset
            return;
        }

        // Include nums[index]
        subset.push_back(nums[index]);
        solve(index + 1, nums, subset, result);

        // Exclude nums[index] (backtrack)
        subset.pop_back();
        solve(index + 1, nums, subset, result);
    }

    // Main function to generate subsets
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        solve(0, nums, subset, result);
        return result;
    }
};

int main() {
    vector<int> nums = {1, 2, 3}; // Sample input
    Solution sol;
    vector<vector<int>> result = sol.subsets(nums);

    cout << "All subsets are:\n";
    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
