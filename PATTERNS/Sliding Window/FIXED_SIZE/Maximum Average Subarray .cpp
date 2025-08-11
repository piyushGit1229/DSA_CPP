// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//        double sum=0;
//        double maxSum=INT_MIN;
//        int i=0;
//        int j=0;
//        int n=nums.size();

//        while(j<n){
//         sum = sum+nums[j];
//         if(j-i+1<k){
//             j++;
//         }
//         else if(j-i+1 == k){
//         maxSum = max(sum,maxSum);
//         sum = sum - nums[i];
//         i++;
//         j++;
//         }
//        }
//        return maxSum / k;
//     }
// };