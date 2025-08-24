#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int open = 0;
        int n = seq.size();
        vector<int> result;

        for (int i = 0; i < n; i++) {
            if (seq[i] == '(') {
                open++;
                result.push_back(open % 2);
            } else {
                result.push_back(open % 2);
                open--;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;

    // Example input
    string seq;
    cout << "Enter the parentheses sequence: ";
    cin >> seq;

    vector<int> ans = sol.maxDepthAfterSplit(seq);

    cout << "Result: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
