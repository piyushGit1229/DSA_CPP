// .

// 🧾 Problem Statement

// Given an integer array nums and an integer k, return an array of the maximum
// values for each contiguous subarray of size k.

// Example

// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation:
// - Subarray [1,3,-1] has max = 3
// - Subarray [3,-1,-3] has max = 3
// - Subarray [-1,-3,5] has max = 5
// - Subarray [-3,5,3] has max = 5
// - Subarray [5,3,6] has max = 6
// - Subarray [3,6,7] has max = 7


// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         int n = nums.size();          // Length of the input array
//         deque<int> dq;                // Will store indexes of useful elements for current window
//         vector<int> result;           // To store the max values of each window

//         for (int i = 0; i < n; i++) {
//             // Step 1: Remove indexes that are out of the current window bounds
//             // The current window is from i-k+1 to i, so if the front index
//             // is less than or equal to i-k, it means it is out of window
//             while (!dq.empty() && dq.front() <= i - k) {
//                 dq.pop_front();       // Remove the front index as it is out of this window
//             }

//             // Step 2: Remove from the back all indexes whose corresponding
//             // values are less than or equal to the current element nums[i]
//             // Because these elements cannot be maximum if current is bigger
//             while (!dq.empty() && nums[i] >= nums[dq.back()]) {
//                 dq.pop_back();        // Remove smaller elements from the back
//             }

//             // Step 3: Add current element's index at the back of deque
//             dq.push_back(i);

//             // Step 4: Once we've processed the first k elements, start adding results
//             // The element at the front of the deque is the largest element's index in the current window
//             if (i >= k - 1) {
//                 result.push_back(nums[dq.front()]);
//             }
//         }

//         // Return the list of max elements for all windows
//         return result;
//     }
// };
