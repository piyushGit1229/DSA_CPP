#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int leftsum = 0;
        int rightsum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
        }

        // sum = left + nums[i] + right

        for (int i = 0; i < n; i++) {
            rightsum = sum - leftsum - nums[i];

            if (leftsum == rightsum) {
                return i;
            }
            
            leftsum = leftsum + nums[i];
        }
        return -1;
    }
};

int main(){


return 0;
}
