// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int max = INT_MIN;
//         int current=0;

//         for(int i=0;i<nums.size();i++){
//             current=current*nums[i];
//             if(current>max){
//                 max=current;
//             }
//             if(current<0){
//             current=0;
//             }
//         }
//         return max;
//     }
// };