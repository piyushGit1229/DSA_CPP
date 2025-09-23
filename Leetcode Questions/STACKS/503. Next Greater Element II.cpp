#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> res(n, -1);
        

        for (int i = 0; i < 2 * n; i++) {
            int idx = i % n;
            while (!st.empty() && nums[idx] > nums[st.top()]) {
                res[st.top()] = nums[idx];
                st.pop();
            }
            if (i < n)
                st.push(idx);
        }
        return res;
    }
};