#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestSubarrayWithSumAtLeastK(vector<int>& nums, int K) {
        // TODO: Implement your logic here
        int n=nums.size();
        int sum=0;
        int minlen=INT_MAX;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum==K){
                minlen=min(minlen,i+1);
            }
            if(mp.find(sum-K)!=mp.end()){
                minlen=min(minlen,i-mp[sum-K]); 
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return minlen==INT_MAX?0:minlen;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, K;
        cin >> n >> K;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        int ans = sol.smallestSubarrayWithSumAtLeastK(nums, K);
        cout << ans << "\n";
    }

    return 0;
}
