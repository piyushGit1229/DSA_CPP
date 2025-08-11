// 🔷 Problem: Minimum Difference in K-Length Subarray
// Difficulty: Medium
// Tags: Sliding Window, Sorting, Heap, Deque, Array

// 📝 Problem Statement
// You are given an array of integers nums and an integer k.
// Your task is to find the minimum possible difference between the maximum and minimum elements among all subarrays of length k.

// Return this minimum difference.

// 🔁 Example 1:
// Input:
// nums = [1, 3, 4, 10, 2]
// k = 3
// Output:
// 3

// Explanation:

// All subarrays of size k = 3 are:

// [1, 3, 4] → max - min = 4 - 1 = 3

// [3, 4, 10] → max - min = 10 - 3 = 7

// [4, 10, 2] → max - min = 10 - 2 = 8

// Minimum of these differences is 3.

// 🔁 Example 2:
// Input:
// nums = [8, 5, 2, 7, 9]
// k = 2
// Output:

// 3
// Explanation:

// All subarrays of size 2:

// [8, 5] → 3

// [5, 2] → 3

// [2, 7] → 5

// [7, 9] → 2

// Minimum = 2

// 🔁 Example 3:
// Input:

// ini
// Copy
// Edit
// nums = [10, 1, 2, 4, 8]
// k = 4
// Output:

// Copy
// Edit
// 7
// ✅ Constraints:
// 1 <= nums.length <= 10^5

// 0 <= nums[i] <= 10^9

// 1 <= k <= nums.length

#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int mindiff(vector<int> &arr, int k, int n)
{
    int i = 0;
    int j = 0;
    int mindiff = INT_MAX;
    vector<int> result;
    for (int i = 0; i < n - k; i++)
    {
        int minval = *min_element(arr.begin() + i, arr.begin() + i + k); // find minvalue
        int maxval= *max_element(arr.begin() + i, arr.begin() + i + k); // find maxvalue
        mindiff=min(mindiff,maxval-minval);
    }
    return mindiff;
}
int main()
{
    vector<int>arr{8, 5, 2, 7, 9};
    int k=3;
    int n=arr.size();
    mindiff(arr,k,n);

    return 0;
}