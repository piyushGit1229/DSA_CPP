// You are given two strings of the same length s and t. In one step you can choose any character of t and replace it with another character.

// Return the minimum number of steps to make t an anagram of s.

// An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.

// Example 1:

// Input: s = "bab", t = "aba"
// Output: 1
// Explanation: Replace the first 'a' in t with b, t = "bba" which is anagram of s.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> mp1;
        for (char c : s) {
            mp1[c]++;
        }
        map<char, int> mp2;
        for (char c : t) {
            mp2[c]++;
        }

        int ans = 0;
        for (auto it : mp1) {
            char ch = it.first;
            int sFreq = it.second;
            int tFreq = mp2[ch];
            if (sFreq > tFreq) {
                ans = ans + (sFreq - tFreq);
            }
        }
        return ans;
    }
};
int main(){

return 0;
}