#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        int n = nums.size();
        bool found = true;

        while (found)
        {
            found = false;

            for (int i = 0; i < n; i++)
            {
                if (original == nums[i])
                {
                    original *= 2;
                    found = true;
                    break;
                }
            }
        }
        return original;
    }
};
int main()
{

    return 0;
}