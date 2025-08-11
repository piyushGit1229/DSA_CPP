// #include <vector>
// class Solution{
//     public:
//     int pivotIndex(vector<int>& nums){
//     int sum=0;
//     int leftsum =0;
//     int rightsum =0;

//     for(int i=0;i<nums.size();i++){
//         sum = sum+nums[i];
//     }

//     //sum = leftsum + nums[i] + rightsum;
//     for(int i=0;i<nums.size();i++){
//     rightsum= sum-leftsum-nums[i];

//     if(leftsum==rightsum){
//         return i;
//     }

//     leftsum=leftsum+nums[i];

//     }
//     return -1;

//     }
// }