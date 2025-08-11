// class Solution {
// public:
//    int firstoccurence(vector<int>&nums ,int target){
//         int start=0;
//         int end = nums.size()-1;
//         int first=-1;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             if(nums[mid]==target){
//                 first=mid;
//                 end=mid-1;//first occurence will always reside in the left side of the array
//             }
//             else if(nums[mid]<target){
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//         }
//         return first;
//     }

//      int lastoccurence(vector<int>&nums ,int target){
//         int start=0;
//         int end = nums.size()-1;
//         int last=-1;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             if(nums[mid]==target){
//                 last=mid;
//                 start=mid+1;//last occurence will always reside in the right side of the arra
//             }
//             else if(nums[mid]<target){
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//         }
//         return last;
//     }
//     vector<int> searchRange(vector<int>& nums, int target) {
//     int first=firstoccurence(nums,target);
//     int last=lastoccurence(nums,target);
//     return{first,last};
//     }
// };