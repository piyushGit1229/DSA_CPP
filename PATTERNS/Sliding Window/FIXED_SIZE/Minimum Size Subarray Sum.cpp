// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int n = nums.size();
//         int minlen = INT_MAX;
//         int sum = 0;
//         int i = 0;
//         for (int j = 0; j < n; j++) {
//             sum = sum + nums[j];
//             while (sum >= target) {
//                 minlen = min(minlen, j - i + 1);
//                 sum = sum - nums[i];
//                 i++;
//             }
//         }
//         return (minlen == INT_MAX) ? 0 : minlen;
//     }
// };