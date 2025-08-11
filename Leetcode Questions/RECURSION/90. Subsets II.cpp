// class Solution {
// public:
//     void solve(int index, vector<int>& nums, vector<vector<int>>& result,vector<int>& subsets) {
//         result.push_back(subsets);
//         for (int i = index; i < nums.size(); i++) {
//             if (i > index && nums[i] == nums[i - 1])
//                 continue;
//             subsets.push_back(nums[i]);
//             solve(i + 1, nums, result, subsets);
//             subsets.pop_back(); // backtrack
//         }
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> result;
//         vector<int> subsets;
//         solve(0, nums, result, subsets);
//         return result;
//     }
// };