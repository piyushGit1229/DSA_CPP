#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string newstr1 = "";
        for (auto x : word1) {
            newstr1 += x;
        }

        string newstr2 = "";
        for (auto x : word2) {
            newstr2 += x;
        }

        if (newstr1 == newstr2) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};

    bool result = sol.arrayStringsAreEqual(word1, word2);

    if (result) {
        cout << "The strings are equal." << endl;
    } else {
        cout << "The strings are NOT equal." << endl;
    }

    return 0;
}
