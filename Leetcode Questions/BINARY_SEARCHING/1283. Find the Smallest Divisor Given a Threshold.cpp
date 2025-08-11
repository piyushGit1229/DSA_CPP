
// //Brute force approach 

// #include <bits/stdc++.h>
// using namespace std;

// int smallestDivisor(vector<int>& arr, int limit) {
//     int n = arr.size(); //size of array.
//     //Find the maximum element:
//     int maxi = *max_element(arr.begin(), arr.end());

//     //Find the smallest divisor:
//     for (int d = 1; d <= maxi; d++) {
//         //Find the summation result:
//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += ceil((double)(arr[i]) / (double)(d));
//         }
//         if (sum <= limit)
//             return d;
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int limit = 8;
//     int ans = smallestDivisor(arr, limit);
//     cout << "The minimum divisor is: " << ans << "\n";
//     return 0;
// }


// class Solution {
// public:
//     int sumbyD(vector<int>& nums, int div) {
//         int n = nums.size();
//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += ceil((double)(nums[i]) / (double)(div));
//         }
//         return sum;
//     }
//     int smallestDivisor(vector<int>& nums, int threshold) {
//         int n = nums.size();
//         int start=1;
//         int end=*max_element(nums.begin(),nums.end());
//         if(n>threshold){
//             return -1;
//         }
//         while(start<=end){
//         int mid=start+(end-start)/2;
//          if(sumbyD(nums,mid)<=threshold){
//             end=mid-1;
//          }
//          else{
//             start=mid+1;
//          }
//         }
//         return start;
//     }

// };