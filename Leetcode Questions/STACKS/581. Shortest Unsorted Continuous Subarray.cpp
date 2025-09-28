#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sortednums = nums;
        sort(sortednums.begin(), sortednums.end());
        int n = nums.size();
        int left = 0;
        int right = n - 1;

        while (left < n && nums[left] == sortednums[left]) {
            left++;
        }
        while (right >= 0 && nums[right] == sortednums[right]) {
            right--;
        }
        
        return left < right ? right - left + 1 : 0;
    }
};

int main(){

return 0;
}