#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> mp;
        int i = 0;
        int j = 0;
        int maxlen = 0;
        for (int j = 0; j < n; j++) {
            mp[fruits[j]]++;
            while (mp.size() > 2) {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;
            }
             maxlen = max(maxlen,j-i+1);
        }
       return maxlen;
    }
};

int main(){

return 0;
}
