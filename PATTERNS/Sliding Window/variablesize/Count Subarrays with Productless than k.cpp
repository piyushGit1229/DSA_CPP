// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int count=0;
//         int product=1 ;
//         int n=nums.size();
//         int i=0;

//         for(int j=0;j<n;j++){
//             product=product*nums[j];
//             while(product>=k && i<=j){
//                 product=product/nums[i];
//                 i++;
//             }
//             count=count+(j-i+1);
//         }
//         return count;
//     }
// };