#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();      // rows
        int n = mat[0].size();   // columns
        
        map<int, vector<int>> mp;
        vector<int> result;

        // Group elements by (row + col)
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mp[i + j].push_back(mat[i][j]);
            }
        }

        bool flip = true;

        // Traverse diagonals
        for (auto& it : mp) {
            if (flip) {
                reverse(it.second.begin(), it.second.end());
            }
            for (int& num : it.second) {
                result.push_back(num);
            }
            flip = !flip;  // toggle flip
        }

        return result;
    }
};

int main() {
    Solution sol;

    // Example input matrix
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Call function
    vector<int> ans = sol.findDiagonalOrder(mat);

    // Print result
    cout << "Diagonal Order: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
