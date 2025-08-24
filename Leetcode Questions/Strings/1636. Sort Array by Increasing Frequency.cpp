#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // Step 1: Count frequency of each number
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Sort the array using custom comparator
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] != freq[b]) {
                return freq[a] < freq[b]; // Smaller frequency comes first
            } else {
                return a > b;             // If frequencies are equal, larger number comes first
            }
        });
 
        // Step 3: Return the sorted array
        return nums;
    }
};

// -----------------------
// Example usage in main():
int main() {
    Solution sol;
    vector<int> nums = {4, 1, 2, 2, 3, 3, 3};
    vector<int> sorted = sol.frequencySort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}




///lambda concept


// 3️⃣ Putting it together

// Example: sort by descending frequency, then by value ascending (alphabetical)

// sort(s.begin(), s.end(), [&](char a, char b){
//     if(freq[a] != freq[b])
//         return freq[a] > freq[b]; // higher frequency comes first
//     else
//         return a < b;             // tie-breaker: smaller char first
// });


// Example: sort by ascending frequency, then by value descending

// sort(s.begin(), s.end(), [&](char a, char b){
//     if(freq[a] != freq[b])
//         return freq[a] < freq[b]; // lower frequency comes first
//     else
//         return a > b;             // tie-breaker: larger char first
// });