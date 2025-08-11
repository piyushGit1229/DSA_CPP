// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         int n=nums.size();
//         map<int,int>mp;
//         mp[0]=1;
//         int prefixsum =0,count=0;
//         for(int i =0;i<n;i++){
//             prefixsum += (nums[i]%2);
//             if(mp.find(prefixsum-k)!=mp.end()){
//                 count = count+mp[prefixsum-k];
//             }
//             mp[prefixsum]++;
//         }
//         return count;
//     }
// };