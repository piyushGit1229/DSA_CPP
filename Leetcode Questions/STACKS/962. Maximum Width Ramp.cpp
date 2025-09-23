#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        // int mindiff = 0;
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (i < j && nums[i] <= nums[j]) {
        //             int diff = j - i;
        //             mindiff = max(mindiff, diff);
        //         }
        //     }
        // }
        // return mindiff;

        // using monotonic stack
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (st.empty() || nums[i] < nums[st.top()]) {
                st.push(i);
            }
        }
        int maxwidth = 0;
        for (int j = n - 1; j >= 0; j--) {
            while (!st.empty() && nums[j] >= nums[st.top()]) {
                maxwidth = max(maxwidth, j - st.top());
                st.pop();
            }
        }
        return maxwidth;
    }
};

int main(){

return 0;
}