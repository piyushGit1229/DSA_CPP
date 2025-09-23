#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        vector<int> result;
        unordered_map<int, int> mp;
        sort(arr1.begin(), arr1.end());
        for (int i = 0; i < arr1.size(); i++)
        {
            mp[arr1[i]]++;
        }

        for (int i = 0; i < arr2.size(); i++)
        {
            for (auto it : mp)
            {
                if (arr2[i] == it.first)
                {
                    int times = it.second;
                    while (times--)
                        result.push_back(it.first);
                }
            }
        }

        for (int num : arr1)
        {
            bool found = false;
            for (int x : arr2)
            {
                if (num == x)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                result.push_back(num);
            }
        }

        return result;
    }
};
int main()
{

    return 0;
}
