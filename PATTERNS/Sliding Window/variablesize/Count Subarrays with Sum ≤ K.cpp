#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to count subarrays with sum less than or equal to K
    long long countSubarraysWithSumAtMostK(const vector<int>& nums, long long K) {
    int n=nums.size();
    long long count=0;
    long long sum=0;
    // unordered_map<int,int> mp;
    // mp[0]=1;

    // for(int i=0;i<n;i++){
    //     sum=sum+nums[i];
    //     count=count+mp[sum-K];
    //     mp[sum]++;
    // }
    // return count;
    int i=0;
    int j=0;
    for(int j=0;j<n;j++){
        sum=sum+nums[j];
        while(sum>K && i<=j){
            sum=sum-nums[i];
            i++;
        }
        count=count+(j-i+1);
    }
    return count;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        long long K;
        cin >> n >> K;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        long long ans = sol.countSubarraysWithSumAtMostK(nums, K);
        cout << ans << "\n";
    }

    return 0;
}
