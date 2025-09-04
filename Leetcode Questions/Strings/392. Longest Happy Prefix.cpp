#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> buildlps(string& s) {
        int n = s.size();
        int i = 1;
        int len = 0;
        vector<int> lps(n, 0);
        while (i < n) {
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }

    string longestPrefix(string s) {
        vector<int> lpsidx = buildlps(s);
        int n = s.size();
        int length = lpsidx[n - 1];
        return s.substr(0, length);
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter string: ";
    cin >> s;

    string result = sol.longestPrefix(s);
    cout << "Longest prefix which is also suffix: " << result << endl;

    return 0;
}
