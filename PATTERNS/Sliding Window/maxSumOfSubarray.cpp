// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int maxSumOfSubarrayOfSizeK(vector<int>& nums, int k) {
//     int n = nums.size();
//     int i = 0, j = 0;      // i = start, j = end of the window
//     int sum = 0;
//     int maxSum = INT_MIN;

//     while (j < n) {
//         sum += nums[j];  // expand the window by including nums[j]

//         // Check if window size is less than k, just expand
//         if (j - i + 1 < k) {
//             j++;
//         }
//         // When window size becomes exactly k
//         else if (j - i + 1 == k) {
//             maxSum = max(maxSum, sum);  // record max sum
//             sum = sum - nums[i];        // remove nums[i] as window slides
//             i++;                        // shrink from left
//             j++;                        // expand right
//         }
//     }

//     return maxSum;
// }

// int main() {
//     vector<int> nums = {1, 4, 2, 10, 23, 3, 1, 0, 20};
//     int k = 4;

//     int result = maxSumOfSubarrayOfSizeK(nums, k);
//     cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;

//     return 0;
// }

