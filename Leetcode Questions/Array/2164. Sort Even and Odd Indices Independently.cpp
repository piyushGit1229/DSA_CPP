#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> finalresult;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }
        sort(odd.begin(), odd.end(), greater<int>()); // 3 1 -> j ptr
        sort(even.begin(), even.end());               // 2 4 -> i ptr
        int i = 0;
        int j = 0;
        while (i < even.size() && j < odd.size()) {
            finalresult.push_back(even[i]);
            finalresult.push_back(odd[j]);
            i++;
            j++;
        }
        while (i < even.size()) {
            finalresult.push_back(even[i]);
            i++;
        }
        while (j < odd.size()) {
            finalresult.push_back(odd[j]);
            j++;
        }
        return finalresult;
    }
};

int main(){

return 0;
}