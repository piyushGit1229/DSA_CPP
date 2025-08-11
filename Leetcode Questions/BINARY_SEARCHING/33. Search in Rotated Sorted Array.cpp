// #include <vector>

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int start = 0;
//         int end = n - 1;

//         while (start <= end) {
//             int mid = start + (end - start) / 2;

//             // 🔹 Step 1: Direct hit
//             if (nums[mid] == target) {
//                 return mid;
//             }

//             // 🔹 Step 2: Check which half is sorted
//             if (nums[start] <= nums[mid]) {
//                 // Left half is sorted
//                 if (nums[start] <= target && target < nums[mid]) {
//                     // Target lies in the sorted left half
//                     end = mid - 1;
//                 } else {
//                     // Target lies in the right half
//                     start = mid + 1;
//                 }
//             } else {
//                 // Right half is sorted
//                 if (nums[mid] < target && target <= nums[end]) {
//                     // Target lies in the sorted right half
//                     start = mid + 1;
//                 } else {
//                     // Target lies in the left half
//                     end = mid - 1;
//                 }
//             }
//         }

//         // Target not found
//         return -1;
//     }
// };
