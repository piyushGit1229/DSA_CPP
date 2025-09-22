#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> mp;
        int missing = -1;
        int repeating = -1;
        int n = grid.size();

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < n; j++) {
                mp[grid[i][j]]++;
            }
        }

        for (int i = 1; i <= n * n; i++) {
            if (mp[i] == 0) {
                missing = i;
            }
            if (mp[i] == 2) {
                repeating = i;
            }
        }
        return {repeating, missing};
    }
};

int main(){

return 0;
}

