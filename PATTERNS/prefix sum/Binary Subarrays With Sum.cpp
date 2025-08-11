// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         map<int, int> mp;
//         mp[0] = 1;
//         int count = 0;
//         int curr_sum = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             curr_sum = curr_sum + nums[i];
//             if (mp.find(curr_sum - goal) != mp.end()) {
//                 count = count + mp[curr_sum - goal];
//             }
//             mp[curr_sum]++;
//         }
//         return count;
//     }
// };