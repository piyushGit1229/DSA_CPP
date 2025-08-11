// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
        // int count = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     int sum = 0;
        //     for (int j = i; j < nums.size(); ++j) {
        //         sum = sum + nums[j];
        //         if (sum == k) {
        //             count++;
        //         }
        //     }
        // }
        // return count;

        //prefix sum appraoch

//         unordered_map<int,int>mp;
//         mp[0]=1;
//         int sum=0;
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             sum=sum+nums[i];
//             count = count+mp[sum-k]; //// how many earlier sums make a subarray = k
//             mp[sum]++; //store the prefix
//         }
//         return count;
//     }
// };


