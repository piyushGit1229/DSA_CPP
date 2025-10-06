#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int n = nums.size();
        int max_so_far = -1;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] >= max_so_far) {
                ans++;
                max_so_far = nums[i];
            }
        }
        return ans;
    }
};

int main(){

return 0;
}