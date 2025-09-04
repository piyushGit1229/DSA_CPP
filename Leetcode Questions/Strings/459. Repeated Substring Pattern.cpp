#include <bits/stdc++.h>
using namespace std;

/*
Problem:
Given a string s, check if it can be constructed by taking a substring
of it and appending multiple copies of that substring together.

Approach:
1. If s is a repeated substring pattern, then when we concatenate s with itself,
   the original string s will appear again in the "middle" of the new string.
   Example: s = "abab"
   -> s + s = "abababab"
   -> after removing first and last char -> "bababa"
   -> "abab" is still inside -> so return true.

2. If s is not a repeated substring pattern, this trick will fail,
   because after removing the first and last character,
   s will no longer appear inside.
   Example: s = "aba"
   -> s + s = "abaaba"
   -> after removing first and last char -> "baab"
   -> "aba" is not inside -> so return false.

Steps in code:
- Create ans = s + s
- Remove first and last character of ans (substr(1, ans.size()-2))
- Search for s inside that substring using .find()
- If found, return true else false
*/

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        // string ans = s + s;
        // if (ans.substr(1, ans.size() - 2).find(s) != -1)
        //     return true;
        // else {
        //     return false;
        // }

        // apporach 2
        int n = s.size();
        for (int i = 0; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                int times = n / i;
                string pattern = s.substr(0, i);
                string newstr = "";
                while (times--)
                {
                    newstr += pattern;
                }
                if (newstr == pattern)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
};

int main()
{
    Solution sol;
    string s = "abab";
    sol.repeatedSubstringPattern(s);

    return 0;
}
