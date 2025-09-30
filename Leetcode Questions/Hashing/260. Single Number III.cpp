
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> result;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        for (auto it : mp) {
            if (it.second == 1) {
                result.push_back(it.first);
            }
        }
        return result;
    }
};