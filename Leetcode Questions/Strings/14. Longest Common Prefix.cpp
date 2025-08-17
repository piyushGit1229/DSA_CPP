#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    if (strs.empty()) return "";

    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size() - 1];

    int i = 0;
    while (i < first.size() && first[i] == last[i]) {
        i++;
    }

    return first.substr(0, i);
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
