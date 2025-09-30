#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int i = 1;
        int j = n - 1;
        unordered_map<int, int> mp;

        for (int i = 1; i <= k; i++) {
            mp[i]++;
        }

        while (j >= 0 && !mp.empty()) {
            count++;
            if (mp.find(nums[j]) != mp.end()) {
                mp.erase(nums[j]);
            }
            j--;
        }
        return count;
    }
};