#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int n = s.length();

        int ans = 0;
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mp;
            for (int j = i; j < n; j++) {
                int mx = INT_MIN;
                int mn = INT_MAX;
                mp[s[j]]++;
                for (auto& it : mp) {
                    mx = max(mx, it.second);  
                    mn = min(mn, it.second); 
                }
                ans += mx - mn;
            }
        }
        return ans;
    }
};

int main(){

return 0;
}