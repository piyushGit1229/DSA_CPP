// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         map<int, int> freq;
//         for (int i = 0; i < nums.size(); i++) {
//             freq[nums[i]]++;
//         }
//         int n = nums.size();
//         for (auto it : freq) {
//             if (it.second > n / 2) {
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };