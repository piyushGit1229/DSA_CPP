#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkfreq(string s) {
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
            if (freq[s[i]] > 1) {
                return true;
            }
        }
        return false;
    }
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length())
            return false;
        if (s == goal) {
            return checkfreq(s);
        }
        vector<int> index;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                index.push_back(i);
            }
        }
        if (index.size() != 2)
            return false;

        swap(s[index[0]], s[index[1]]);
        return s == goal;
    }
};

int main(){

return 0;
}