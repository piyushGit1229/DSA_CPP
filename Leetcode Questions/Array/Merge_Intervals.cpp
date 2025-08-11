// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         int n = intervals.size();

//         // 🟢 Step 1: Sort the intervals based on starting times
//         // Example: Input = [[1,3], [2,6], [8,10], [15,18]]
//         // After sorting = [[1,3], [2,6], [8,10], [15,18]]
//         // Sorting ensures we can easily detect overlaps

//         sort(intervals.begin(), intervals.end());

//         vector<vector<int>> ans;  // To store merged intervals

//         // 🟢 Step 2: Traverse through all intervals

//         for (int i = 0; i < n; i++) {
//             // Get the current interval's start and end
//             int start = intervals[i][0];
//             int end = intervals[i][1];

//             // 🔁 Step 3: Keep merging intervals as long as they overlap
//             // Condition: Next interval's start ≤ current end
//             // Example:
//             // i = 0 → start = 1, end = 3
//             // intervals[i+1] = [2,6] → overlaps → merge → end = max(3,6) = 6

//             while (i + 1 < n && intervals[i + 1][0] <= end) {
//                 end = max(end, intervals[i + 1][1]);  // Update end
//                 i++;  // Move to the next overlapping interval
//             }

//             // ✅ Step 4: Push the merged interval into the result
//             ans.push_back({start, end});

//             // Next non-overlapping interval will be processed in next iteration
//         }

//         // 🟢 Step 5: Return the merged result
//         return ans;
//     }
// };
