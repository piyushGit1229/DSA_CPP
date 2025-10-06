#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end()); // 6
        int index = distance(nums.begin(), find(nums.begin(), nums.end(), maxi));
        for (int i = 0; i < n; i++) {
            if (i == index)
                continue;
            if (nums[i] * 2 > maxi) {
                return -1;
            }
        }
        return index;
    }
};

int main(){

return 0;
}