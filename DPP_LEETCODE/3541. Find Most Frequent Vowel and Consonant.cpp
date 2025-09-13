#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isvowel(char c) {
        //easy one 
        // for (char c : s)
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    int maxFreqSum(string s) {
        int maxvowel = 0;
        int maxconson = 0;

        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        for (auto it : mp) {
            if (isvowel(it.first)) {
                if (it.second > maxvowel) {
                    maxvowel = it.second;
                }
            } else {
                if (it.second > maxconson) {
                    maxconson = it.second;
                }
            }
        }
        return maxvowel + maxconson;
    }
};
int main(){

return 0;
}


