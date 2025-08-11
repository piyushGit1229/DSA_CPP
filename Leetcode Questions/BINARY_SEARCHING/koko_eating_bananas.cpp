// class Solution {
// public:
//     long long check(vector<int>& piles, long long hours) {
//         int n = piles.size();
//         long long sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += ceil((double)(piles[i]) / hours * 1.0);
//         }
//         return sum;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         long long start = 1;
//         long long end = *max_element(piles.begin(), piles.end());

//         while (start <= end) {
//             long long mid = start + (end - start) / 2;
//             if (check(piles, mid) <= h) {
//                 end = mid - 1;
//             } else {
//                 start = mid + 1;
//             }
//         }
//         return (int) start;
//     }
// };