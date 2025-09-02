// Given a string s consisting only of characters a, b and c.

// Return the number of substrings containing at least one occurrence of all these characters a, b and c.

// Example 1:

// Input: s = "abcabc"
// Output: 10
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
// Example 2:

// Input: s = "aaacb"
// Output: 3
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int i = 0;
        int j = 0;
        int result = 0;
        unordered_map<char, int> mp;
        while (j < n) {
            mp[s[j]]++;
            while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0) {
                result += (n - j);
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        return result;
    }
};

int main(){

return 0;
}