// class Solution {
// public:
//     vector<int> countDistinct(vector<int>& arr, int k) {
//         int n = arr.size();
//         vector<int> result;
//         unordered_map<int,int> mp;  // frequency map

//         for (int i = 0; i < n; i++) {
//             // Add current element to frequency map
//             mp[arr[i]]++;

//             // Remove the element that is out of the current window
//             if (i >= k) {
//                 mp[arr[i - k]]--;
//                 if (mp[arr[i - k]] == 0) {
//                     mp.erase(arr[i - k]);
//                 }
//             }

//             // When window size == k, record the distinct count
//             if (i >= k - 1) {
//                 result.push_back(mp.size());
//             }
//         }
//         return result;
//     }
// };