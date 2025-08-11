#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarrayWithSumK(const vector<int>& a, long long k) {
    unordered_map<long long, int> mp;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < (int)a.size(); i++) {
        sum += a[i];

        if (sum == k) {
            maxLen = i + 1;
        }

        if (mp.find(sum - k) != mp.end()) {
            maxLen = max(maxLen, i - mp[sum - k]);
        }

        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    long long k = 3;
    cout << "Longest subarray length with sum " << k << " is: " 
         << longestSubarrayWithSumK(arr, k) << "\n";
    return 0;
}
