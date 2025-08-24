#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int openCount = 0;    // Current open parentheses
        int maxDepth = 0;     // Maximum depth of nested parentheses

        for (char c : s) {
            if (c == '(') {
                openCount++;
                maxDepth = max(maxDepth, openCount);
            } else if (c == ')') {
                openCount--;
            }
        }

        return maxDepth;
    }
};

// Example usage
int main() {
    Solution sol;
    string s = "(1+(2*3)+((8)/4))+1";
    cout << "Maximum Depth: " << sol.maxDepth(s) << endl;
    return 0;
}
