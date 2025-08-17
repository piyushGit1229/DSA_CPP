#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;
        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};

int main() {
    Solution sol;

    // convert string literal to vector<char>
    vector<char> s = {'h','e','l','l','o'};

    sol.reverseString(s);

    // print result
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
