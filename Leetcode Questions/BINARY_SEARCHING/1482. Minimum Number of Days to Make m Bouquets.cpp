// class Solution {
// public:
//     bool possible(vector<int>& bloomDay, int days, int m, int k) {
//         int cnt = 0;
//         int number = 0;
//         int n = bloomDay.size();

//         for (int i = 0; i < n; i++) {
//             if (bloomDay[i] <= days) {
//                 cnt++;
//                 if (cnt == k) {
//                     number++;
//                     cnt = 0;
//                 }
//             } else {
//                 cnt = 0;
//             }
//         }

//         return number >= m;
//     }

//     int minDays(vector<int>& bloomDay, int m, int k) {
//         long long val = 1LL * m * k;
//         int n = bloomDay.size();
//         if (val > n) return -1;

//         int mini = INT_MAX, maxi = INT_MIN;
//         for (int i = 0; i < n; i++) {
//             mini = min(mini, bloomDay[i]);
//             maxi = max(maxi, bloomDay[i]);
//         }

//         int start = mini;
//         int end = maxi;
//         int ans = -1;

//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             if (possible(bloomDay, mid, m, k)) {
//                 ans = mid;
//                 end = mid - 1;
//             } else {
//                 start = mid + 1;
//             }
//         }

//         return ans;
//     }
// };
