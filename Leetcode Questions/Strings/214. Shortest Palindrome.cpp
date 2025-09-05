#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> buildLps(string s)
    {
        int m = s.length();
        vector<int> lps(m, 0);
        int i = 1;
        int len = 0;
        while (i < m)
        {
            if (s[i] == s[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if (len != 0)
                {
                    len = lps[len - 1];
                }
                else
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
    string shortestPalindrome(string s)
    {
        int n = s.length();
        string rev = s;
        reverse(rev.begin(), rev.end());
        string temp = s + "#" + rev;

        vector<int> lps = buildLps(temp);
        int extracted = lps.back(); // or can use lps[n-1]
        string c = rev.substr(0, n - extracted);
        return c + s;
    }
};

int main()
{
    string s = "aacecaaa";
    Solution sol;
    cout << sol.shortestPalindrome(s) << endl;

    return 0;
}