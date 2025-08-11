// int ispossible(vector<int>& arr, int n, int m, int mid) {
//     int studentcount = 1;
//     int pagesum = 0;
//     for (int i = 0; i < n; i++) {
//         if (pagesum + arr[i] <= mid) {
//             pagesum += arr[i];
//         } else {
//             studentcount++;
//             if (studentcount > m || arr[i] > mid) {
//                 return false;
//             }
//             pagesum = arr[i];
//         }
//     }
//     return true;
// }

// int findPages(vector<int>& arr, int n, int m) {
//     // Base case: Not enough books for students
//     if (m > n) return -1;

//     int start = *max_element(arr.begin(), arr.end());  // must be at least the largest book
//     int sum = accumulate(arr.begin(), arr.end(), 0);   // total pages
//     int end = sum;
//     int ans = -1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;
//         if (ispossible(arr, n, m, mid)) {
//             ans = mid;
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }
