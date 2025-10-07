#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int n = barcodes.size();
        unordered_map<int, int> mp;
        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            mp[barcodes[i]]++;
        }

        vector<pair<int, int>> v;
        for (auto it : mp) {
            v.push_back({it.second, it.first});
        }
        sort(v.rbegin(), v.rend()); // sort in descending

        int idx = 0;
        for (auto& p : v) {
            int count = p.first;
            int num = p.second;
            while (count--) {
                if (idx >= n)
                    idx = 1;
                res[idx] = num;
                idx += 2;
            }
        }
        return res;
    }
};

int main(){

return 0;
}