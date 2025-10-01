#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "i love leetcode";
    int n = s.size();
    int i = 0;

    while (i < n) {
        int j = i;
        while (j < n && s[j] != ' ') {  // move j until space or end
            j++;
        }

        string word = s.substr(i, j - i);  // extract the word
        cout << word << endl;              // process it

        i = j + 1; // skip the space and move to next word
    }
}
