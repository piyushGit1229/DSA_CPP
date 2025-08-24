#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int maxlen = 0;
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (nums[j] == 0)
            {
                cnt++;
            }
            while (cnt > 1)
            {
                if (nums[i] == 0)
                    cnt--;
                i++;
            }
            maxlen = max(maxlen, j - i);
        }
        return maxlen;
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {1, 1, 0, 1};
    vector<int> nums2 = {0, 1, 1, 1, 0, 1, 1, 0, 1};
    vector<int> nums3 = {1, 1, 1};
    vector<int> nums4 = {0, 0, 0};

    cout << sol.longestSubarray(nums1) << endl; // 3
    cout << sol.longestSubarray(nums2) << endl; // 5
    cout << sol.longestSubarray(nums3) << endl; // 2
    cout << sol.longestSubarray(nums4) << endl; // 0

    return 0;
}