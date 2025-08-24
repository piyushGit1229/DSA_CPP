#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        int n = s.length();

        for (int i = 0; i < n; i++) {
            char c1 = s[i];
            char c2 = t[i];

            if ((mp1.find(c1) != mp1.end() && mp1[c1] != c2) ||
                (mp2.find(c2) != mp2.end() && mp2[c2] != c1)) {
                return false;
            }
            mp1[c1] = c2;
            mp2[c2] = c1;
        }
        return true;
    }
};

int main() {
    Solution sol;

    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    bool result = sol.isIsomorphic(s, t);
    if (result) {
        cout << "The strings are isomorphic." << endl;
    } else {
        cout << "The strings are not isomorphic." << endl;
    }

    return 0;
}
