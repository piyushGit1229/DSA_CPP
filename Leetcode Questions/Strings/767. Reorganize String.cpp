#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        int maxFreq = 0;
        for (auto it : mp)
            maxFreq = max(maxFreq, it.second);
        if (maxFreq > (n + 1) / 2)
            return "";

        vector<pair<int, char>> v;
        for (auto it : mp) {
            v.push_back({it.second, it.first});
        }
        sort(v.rbegin(), v.rend());

        vector<char> res(n);
        int index = 0;
        for (auto& p : v) {
            int count = p.first;
            char ch = p.second;
            while (count--) {
                if (index >= n)
                    index = 1; // switch to odd indices after even
                res[index] = ch;
                index += 2;
            }
        }

        return string(res.begin(), res.end());
    }
};

int main(){

return 0;
}